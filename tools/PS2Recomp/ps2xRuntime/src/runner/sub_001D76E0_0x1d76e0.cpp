#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D76E0
// Address: 0x1d76e0 - 0x1d78b0
void sub_001D76E0_0x1d76e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D76E0_0x1d76e0");
#endif

    switch (ctx->pc) {
        case 0x1d7724u: goto label_1d7724;
        case 0x1d7730u: goto label_1d7730;
        case 0x1d7740u: goto label_1d7740;
        case 0x1d7760u: goto label_1d7760;
        case 0x1d7784u: goto label_1d7784;
        case 0x1d77c0u: goto label_1d77c0;
        case 0x1d7830u: goto label_1d7830;
        case 0x1d7850u: goto label_1d7850;
        case 0x1d7880u: goto label_1d7880;
        case 0x1d788cu: goto label_1d788c;
        default: break;
    }

    ctx->pc = 0x1d76e0u;

    // 0x1d76e0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x1d76e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x1d76e4: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1d76e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1d76e8: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1d76e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1d76ec: 0x8c44bd10  lw          $a0, -0x42F0($v0)
    ctx->pc = 0x1d76ecu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6CBD10u));
    // 0x1d76f0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1d76f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1d76f4: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x1d76f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x1d76f8: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x1d76f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d76fc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1d76fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1d7700: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d7700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d7704: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1d7704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1d7708: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D7708u;
    {
        const bool branch_taken_0x1d7708 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D770Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7708u;
        // 0x1d770c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7708) {
            ctx->pc = 0x1D7724u;
            goto label_1d7724;
        }
    }
    ctx->pc = 0x1D7710u;
    // 0x1d7710: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d7710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d7714: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D7714u;
    {
        const bool branch_taken_0x1d7714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7714u;
        // 0x1d7718: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7714) {
            ctx->pc = 0x1D7728u;
            goto label_1d7728;
        }
    }
    ctx->pc = 0x1D771Cu;
    // 0x1d771c: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1D771Cu;
    SET_GPR_U32(ctx, 31, 0x1D7724u);
    ctx->pc = 0x1D7720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D771Cu;
    // 0x1d7720: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1D771Cu, 0x1D7724u)) {
        return;
    }
    ctx->pc = 0x1D7724u;
label_1d7724:
    // 0x1d7724: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1d7724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1d7728:
    // 0x1d7728: 0xc075d54  jal         func_1D7550
    ctx->pc = 0x1D7728u;
    SET_GPR_U32(ctx, 31, 0x1D7730u);
    ctx->pc = 0x1D772Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7728u;
    // 0x1d772c: 0x2802b  sltu        $s0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7550u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7550u, 0x1D7728u, 0x1D7730u)) {
        return;
    }
    ctx->pc = 0x1D7730u;
label_1d7730:
    // 0x1d7730: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x1D7730u;
    {
        const bool branch_taken_0x1d7730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7730u;
        // 0x1d7734: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7730) {
            ctx->pc = 0x1D7894u;
            goto label_1d7894;
        }
    }
    ctx->pc = 0x1D7738u;
    // 0x1d7738: 0xc05f90a  jal         func_17E428
    ctx->pc = 0x1D7738u;
    SET_GPR_U32(ctx, 31, 0x1D7740u);
    ctx->pc = 0x1D773Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7738u;
    // 0x1d773c: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E428u, 0x1D7738u, 0x1D7740u)) {
        return;
    }
    ctx->pc = 0x1D7740u;
label_1d7740:
    // 0x1d7740: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d7740u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d7744: 0x0  nop
    ctx->pc = 0x1d7744u;
    // NOP
    // 0x1d7748: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d7748u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d774c: 0x0  nop
    ctx->pc = 0x1d774cu;
    // NOP
    // 0x1d7750: 0x45000050  bc1f        . + 4 + (0x50 << 2)
    ctx->pc = 0x1D7750u;
    {
        const bool branch_taken_0x1d7750 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D7754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7750u;
        // 0x1d7754: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7750) {
            ctx->pc = 0x1D7894u;
            goto label_1d7894;
        }
    }
    ctx->pc = 0x1D7758u;
    // 0x1d7758: 0xc05f90a  jal         func_17E428
    ctx->pc = 0x1D7758u;
    SET_GPR_U32(ctx, 31, 0x1D7760u);
    ctx->pc = 0x1D775Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7758u;
    // 0x1d775c: 0x24040011  addiu       $a0, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E428u, 0x1D7758u, 0x1D7760u)) {
        return;
    }
    ctx->pc = 0x1D7760u;
label_1d7760:
    // 0x1d7760: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d7760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d7764: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d7764u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d7768: 0x0  nop
    ctx->pc = 0x1d7768u;
    // NOP
    // 0x1d776c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d776cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d7770: 0x0  nop
    ctx->pc = 0x1d7770u;
    // NOP
    // 0x1d7774: 0x45000047  bc1f        . + 4 + (0x47 << 2)
    ctx->pc = 0x1D7774u;
    {
        const bool branch_taken_0x1d7774 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D7778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7774u;
        // 0x1d7778: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7774) {
            ctx->pc = 0x1D7894u;
            goto label_1d7894;
        }
    }
    ctx->pc = 0x1D777Cu;
    // 0x1d777c: 0xc0603e4  jal         func_180F90
    ctx->pc = 0x1D777Cu;
    SET_GPR_U32(ctx, 31, 0x1D7784u);
    ctx->pc = 0x180F90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180F90u, 0x1D777Cu, 0x1D7784u)) {
        return;
    }
    ctx->pc = 0x1D7784u;
label_1d7784:
    // 0x1d7784: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x1D7784u;
    {
        const bool branch_taken_0x1d7784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7784u;
        // 0x1d7788: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7784) {
            ctx->pc = 0x1D7894u;
            goto label_1d7894;
        }
    }
    ctx->pc = 0x1D778Cu;
    // 0x1d778c: 0x56000042  bnel        $s0, $zero, . + 4 + (0x42 << 2)
    ctx->pc = 0x1D778Cu;
    {
        const bool branch_taken_0x1d778c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d778c) {
            ctx->pc = 0x1D7790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D778Cu;
            // 0x1d7790: 0xac409d84  sw          $zero, -0x627C($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4294942084), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D7898u;
            goto label_1d7898;
        }
    }
    ctx->pc = 0x1D7794u;
    // 0x1d7794: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x1d7794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x1d7798: 0x8e231a70  lw          $v1, 0x1A70($s1)
    ctx->pc = 0x1d7798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6768)));
    // 0x1d779c: 0x8c42bda8  lw          $v0, -0x4258($v0)
    ctx->pc = 0x1d779cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6CBDA8u));
    // 0x1d77a0: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1d77a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1d77a4: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D77A4u;
    {
        const bool branch_taken_0x1d77a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D77A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D77A4u;
        // 0x1d77a8: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d77a4) {
            ctx->pc = 0x1D77C0u;
            goto label_1d77c0;
        }
    }
    ctx->pc = 0x1D77ACu;
    // 0x1d77ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d77acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d77b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D77B0u;
    {
        const bool branch_taken_0x1d77b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D77B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D77B0u;
        // 0x1d77b4: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d77b0) {
            ctx->pc = 0x1D77C4u;
            goto label_1d77c4;
        }
    }
    ctx->pc = 0x1D77B8u;
    // 0x1d77b8: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1D77B8u;
    SET_GPR_U32(ctx, 31, 0x1D77C0u);
    ctx->pc = 0x1D77BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D77B8u;
    // 0x1d77bc: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1D77B8u, 0x1D77C0u)) {
        return;
    }
    ctx->pc = 0x1D77C0u;
label_1d77c0:
    // 0x1d77c0: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d77c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_1d77c4:
    // 0x1d77c4: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1d77c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d77c8: 0x8c629d88  lw          $v0, -0x6278($v1)
    ctx->pc = 0x1d77c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942088)));
    // 0x1d77cc: 0xac649d88  sw          $a0, -0x6278($v1)
    ctx->pc = 0x1d77ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294942088), GPR_U32(ctx, 4));
    // 0x1d77d0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x1d77d0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x1d77d4: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x1d77d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1d77d8: 0x10800030  beqz        $a0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1D77D8u;
    {
        const bool branch_taken_0x1d77d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D77DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D77D8u;
        // 0x1d77dc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d77d8) {
            ctx->pc = 0x1D789Cu;
            goto label_1d789c;
        }
    }
    ctx->pc = 0x1D77E0u;
    // 0x1d77e0: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x1d77e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
    // 0x1d77e4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d77e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d77e8: 0x8cc59d84  lw          $a1, -0x627C($a2)
    ctx->pc = 0x1d77e8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x339D84u));
    // 0x1d77ec: 0x24479d58  addiu       $a3, $v0, -0x62A8
    ctx->pc = 0x1d77ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942040));
    // 0x1d77f0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1d77f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1d77f4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1d77f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1d77f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d77f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d77fc: 0x54820027  bnel        $a0, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1D77FCu;
    {
        const bool branch_taken_0x1d77fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d77fc) {
            ctx->pc = 0x1D7800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D77FCu;
            // 0x1d7800: 0xacc09d84  sw          $zero, -0x627C($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 4294942084), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D789Cu;
            goto label_1d789c;
        }
    }
    ctx->pc = 0x1D7804u;
    // 0x1d7804: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x1d7804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d7808: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1d7808u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d780c: 0xacc29d84  sw          $v0, -0x627C($a2)
    ctx->pc = 0x1d780cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294942084), GPR_U32(ctx, 2));
    // 0x1d7810: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1d7810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1d7814: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d7814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d7818: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x1D7818u;
    {
        const bool branch_taken_0x1d7818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7818) {
            ctx->pc = 0x1D781Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D7818u;
            // 0x1d781c: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D78A0u;
            goto label_1d78a0;
        }
    }
    ctx->pc = 0x1D7820u;
    // 0x1d7820: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d7820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d7824: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1d7824u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d7828: 0xc05f910  jal         func_17E440
    ctx->pc = 0x1D7828u;
    SET_GPR_U32(ctx, 31, 0x1D7830u);
    ctx->pc = 0x1D782Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7828u;
    // 0x1d782c: 0x24040011  addiu       $a0, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E440u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E440u, 0x1D7828u, 0x1D7830u)) {
        return;
    }
    ctx->pc = 0x1D7830u;
label_1d7830:
    // 0x1d7830: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d7830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d7834: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d7834u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d7838: 0x24a51710  addiu       $a1, $a1, 0x1710
    ctx->pc = 0x1d7838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5904));
    // 0x1d783c: 0x8c448b2c  lw          $a0, -0x74D4($v0)
    ctx->pc = 0x1d783cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x338B2Cu));
    // 0x1d7840: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d7840u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7844: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1d7844u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7848: 0xc0636ea  jal         func_18DBA8
    ctx->pc = 0x1D7848u;
    SET_GPR_U32(ctx, 31, 0x1D7850u);
    ctx->pc = 0x1D784Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7848u;
    // 0x1d784c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DBA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18DBA8u, 0x1D7848u, 0x1D7850u)) {
        return;
    }
    ctx->pc = 0x1D7850u;
label_1d7850:
    // 0x1d7850: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x1d7850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x1d7854: 0x8e221a70  lw          $v0, 0x1A70($s1)
    ctx->pc = 0x1d7854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6768)));
    // 0x1d7858: 0x8c634490  lw          $v1, 0x4490($v1)
    ctx->pc = 0x1d7858u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B4490u));
    // 0x1d785c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D785Cu;
    {
        const bool branch_taken_0x1d785c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D7860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D785Cu;
        // 0x1d7860: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d785c) {
            ctx->pc = 0x1D7884u;
            goto label_1d7884;
        }
    }
    ctx->pc = 0x1D7864u;
    // 0x1d7864: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d7864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d7868: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D7868u;
    {
        const bool branch_taken_0x1d7868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D786Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7868u;
        // 0x1d786c: 0x27a20020  addiu       $v0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7868) {
            ctx->pc = 0x1D7884u;
            goto label_1d7884;
        }
    }
    ctx->pc = 0x1D7870u;
    // 0x1d7870: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x1d7870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x1d7874: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d7874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7878: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1D7878u;
    SET_GPR_U32(ctx, 31, 0x1D7880u);
    ctx->pc = 0x1D787Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7878u;
    // 0x1d787c: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1D7878u, 0x1D7880u)) {
        return;
    }
    ctx->pc = 0x1D7880u;
label_1d7880:
    // 0x1d7880: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x1d7880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1d7884:
    // 0x1d7884: 0xc05f99a  jal         func_17E668
    ctx->pc = 0x1D7884u;
    SET_GPR_U32(ctx, 31, 0x1D788Cu);
    ctx->pc = 0x1D7888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7884u;
    // 0x1d7888: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E668u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E668u, 0x1D7884u, 0x1D788Cu)) {
        return;
    }
    ctx->pc = 0x1D788Cu;
label_1d788c:
    // 0x1d788c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D788Cu;
    {
        const bool branch_taken_0x1d788c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D788Cu;
        // 0x1d7890: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d788c) {
            ctx->pc = 0x1D789Cu;
            goto label_1d789c;
        }
    }
    ctx->pc = 0x1D7894u;
label_1d7894:
    // 0x1d7894: 0xac409d84  sw          $zero, -0x627C($v0)
    ctx->pc = 0x1d7894u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294942084), GPR_U32(ctx, 0));
label_1d7898:
    // 0x1d7898: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1d7898u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1d789c:
    // 0x1d789c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1d789cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d78a0:
    // 0x1d78a0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d78a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d78a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D78A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D78A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D78A4u;
        // 0x1d78a8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D78A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D78ACu;
    // 0x1d78ac: 0x0  nop
    ctx->pc = 0x1d78acu;
    // NOP
    ctx->pc = 0x1d78b0u;
}
