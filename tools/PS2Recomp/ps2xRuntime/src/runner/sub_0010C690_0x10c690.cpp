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

// Function: sub_0010C690
// Address: 0x10c690 - 0x10c8c8
void sub_0010C690_0x10c690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C690_0x10c690");
#endif

    switch (ctx->pc) {
        case 0x10c6e4u: goto label_10c6e4;
        case 0x10c738u: goto label_10c738;
        case 0x10c820u: goto label_10c820;
        case 0x10c844u: goto label_10c844;
        case 0x10c850u: goto label_10c850;
        default: break;
    }

    ctx->pc = 0x10c690u;

    // 0x10c690: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x10c690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x10c694: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x10c694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x10c698: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x10c698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x10c69c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x10c69cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c6a0: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x10c6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x10c6a4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x10c6a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c6a8: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x10c6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x10c6ac: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x10c6acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c6b0: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x10c6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x10c6b4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x10c6b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c6b8: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x10c6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x10c6bc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x10c6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x10c6c0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x10c6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x10c6c4: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x10c6c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x10c6c8: 0x12000071  beqz        $s0, . + 4 + (0x71 << 2)
    ctx->pc = 0x10C6C8u;
    {
        const bool branch_taken_0x10c6c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C6C8u;
        // 0x10c6cc: 0xe7b400d0  swc1        $f20, 0xD0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c6c8) {
            ctx->pc = 0x10C890u;
            goto label_10c890;
        }
    }
    ctx->pc = 0x10C6D0u;
    // 0x10c6d0: 0x12400070  beqz        $s2, . + 4 + (0x70 << 2)
    ctx->pc = 0x10C6D0u;
    {
        const bool branch_taken_0x10c6d0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C6D0u;
        // 0x10c6d4: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c6d0) {
            ctx->pc = 0x10C894u;
            goto label_10c894;
        }
    }
    ctx->pc = 0x10C6D8u;
    // 0x10c6d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10c6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c6dc: 0xc04389e  jal         func_10E278
    ctx->pc = 0x10C6DCu;
    SET_GPR_U32(ctx, 31, 0x10C6E4u);
    ctx->pc = 0x10C6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C6DCu;
    // 0x10c6e0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E278u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10E278u, 0x10C6DCu, 0x10C6E4u)) {
        return;
    }
    ctx->pc = 0x10C6E4u;
label_10c6e4:
    // 0x10c6e4: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x10c6e4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c6e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10c6e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10c6ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10c6ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10c6f0: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x10c6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x10c6f4: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x10c6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x10c6f8: 0x26910b20  addiu       $s1, $s4, 0xB20
    ctx->pc = 0x10c6f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 2848));
    // 0x10c6fc: 0xafb20004  sw          $s2, 0x4($sp)
    ctx->pc = 0x10c6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 18));
    // 0x10c700: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x10c700u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x10c704: 0xafb00024  sw          $s0, 0x24($sp)
    ctx->pc = 0x10c704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 16));
    // 0x10c708: 0xafb20028  sw          $s2, 0x28($sp)
    ctx->pc = 0x10c708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 18));
    // 0x10c70c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x10c70cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x10c710: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x10c710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x10c714: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x10c714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x10c718: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x10c718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x10c71c: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x10c71cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x10c720: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x10c720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x10c724: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x10c724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x10c728: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x10c728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x10c72c: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x10c72cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x10c730: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x10c730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x10c734: 0x0  nop
    ctx->pc = 0x10c734u;
    // NOP
label_10c738:
    // 0x10c738: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x10c738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10c73c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x10c73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c740: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10C740u;
    {
        const bool branch_taken_0x10c740 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10C744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C740u;
        // 0x10c744: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c740) {
            ctx->pc = 0x10C75Cu;
            goto label_10c75c;
        }
    }
    ctx->pc = 0x10C748u;
    // 0x10c748: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x10c748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x10c74c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x10c74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c750: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x10c750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x10c754: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x10c754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x10c758: 0x3200b  movn        $a0, $zero, $v1
    ctx->pc = 0x10c758u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0));
label_10c75c:
    // 0x10c75c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10C75Cu;
    {
        const bool branch_taken_0x10c75c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C75Cu;
        // 0x10c760: 0x2404002c  addiu       $a0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c75c) {
            ctx->pc = 0x10C780u;
            goto label_10c780;
        }
    }
    ctx->pc = 0x10C764u;
    // 0x10c764: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x10c764u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x10c768: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x10c768u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c76c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x10c76cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x10c770: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x10c770u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x10c774: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x10c774u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x10c778: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x10c778u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x10c77c: 0xe6350014  swc1        $f21, 0x14($s1)
    ctx->pc = 0x10c77cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_10c780:
    // 0x10c780: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x10c780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x10c784: 0x2641018  mult        $v0, $s3, $a0
    ctx->pc = 0x10c784u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x10c788: 0x542821  addu        $a1, $v0, $s4
    ctx->pc = 0x10c788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x10c78c: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x10c78cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x10c790: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x10c790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x10c794: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10C794u;
    {
        const bool branch_taken_0x10c794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x10C798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C794u;
        // 0x10c798: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c794) {
            ctx->pc = 0x10C7B0u;
            goto label_10c7b0;
        }
    }
    ctx->pc = 0x10C79Cu;
    // 0x10c79c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x10c79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x10c7a0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x10c7a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c7a4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x10c7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10c7a8: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x10c7a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x10c7ac: 0x3300b  movn        $a2, $zero, $v1
    ctx->pc = 0x10c7acu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0));
label_10c7b0:
    // 0x10c7b0: 0x10c00033  beqz        $a2, . + 4 + (0x33 << 2)
    ctx->pc = 0x10C7B0u;
    {
        const bool branch_taken_0x10c7b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C7B0u;
        // 0x10c7b4: 0x2641018  mult        $v0, $s3, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c7b0) {
            ctx->pc = 0x10C880u;
            goto label_10c880;
        }
    }
    ctx->pc = 0x10C7B8u;
    // 0x10c7b8: 0x548021  addu        $s0, $v0, $s4
    ctx->pc = 0x10c7b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x10c7bc: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x10c7bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x10c7c0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x10c7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x10c7c4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x10c7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10c7c8: 0x1080002c  beqz        $a0, . + 4 + (0x2C << 2)
    ctx->pc = 0x10C7C8u;
    {
        const bool branch_taken_0x10c7c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C7C8u;
        // 0x10c7cc: 0xc44182f8  lwc1        $f1, -0x7D08($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294935288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c7c8) {
            ctx->pc = 0x10C87Cu;
            goto label_10c87c;
        }
    }
    ctx->pc = 0x10C7D0u;
    // 0x10c7d0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x10c7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x10c7d4: 0x8c4382f4  lw          $v1, -0x7D0C($v0)
    ctx->pc = 0x10c7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3382F4u));
    // 0x10c7d8: 0x50600029  beql        $v1, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x10C7D8u;
    {
        const bool branch_taken_0x10c7d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c7d8) {
            ctx->pc = 0x10C7DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C7D8u;
            // 0x10c7dc: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C880u;
            goto label_10c880;
        }
    }
    ctx->pc = 0x10C7E0u;
    // 0x10c7e0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x10c7e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x10c7e4: 0x0  nop
    ctx->pc = 0x10c7e4u;
    // NOP
    // 0x10c7e8: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x10c7e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10c7ec: 0x0  nop
    ctx->pc = 0x10c7ecu;
    // NOP
    // 0x10c7f0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x10C7F0u;
    {
        const bool branch_taken_0x10c7f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10c7f0) {
            ctx->pc = 0x10C818u;
            goto label_10c818;
        }
    }
    ctx->pc = 0x10C7F8u;
    // 0x10c7f8: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x10c7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10c7fc: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x10c7fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10c800: 0x0  nop
    ctx->pc = 0x10c800u;
    // NOP
    // 0x10c804: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x10C804u;
    {
        const bool branch_taken_0x10c804 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10C808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C804u;
        // 0x10c808: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c804) {
            ctx->pc = 0x10C880u;
            goto label_10c880;
        }
    }
    ctx->pc = 0x10C80Cu;
    // 0x10c80c: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x10c80cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x10c810: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x10C810u;
    {
        const bool branch_taken_0x10c810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C810u;
        // 0x10c814: 0xe6010010  swc1        $f1, 0x10($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c810) {
            ctx->pc = 0x10C880u;
            goto label_10c880;
        }
    }
    ctx->pc = 0x10C818u;
label_10c818:
    // 0x10c818: 0xc0b879c  jal         func_2E1E70
    ctx->pc = 0x10C818u;
    SET_GPR_U32(ctx, 31, 0x10C820u);
    ctx->pc = 0x10C81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C818u;
    // 0x10c81c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1E70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1E70u, 0x10C818u, 0x10C820u)) {
        return;
    }
    ctx->pc = 0x10C820u;
label_10c820:
    // 0x10c820: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10c820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10c824: 0xe4540058  swc1        $f20, 0x58($v0)
    ctx->pc = 0x10c824u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x10c828: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x10c828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10c82c: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x10c82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x10c830: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10C830u;
    {
        const bool branch_taken_0x10c830 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C830u;
        // 0x10c834: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c830) {
            ctx->pc = 0x10C848u;
            goto label_10c848;
        }
    }
    ctx->pc = 0x10C838u;
    // 0x10c838: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10c838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c83c: 0xc0b6752  jal         func_2D9D48
    ctx->pc = 0x10C83Cu;
    SET_GPR_U32(ctx, 31, 0x10C844u);
    ctx->pc = 0x10C840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C83Cu;
    // 0x10c840: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9D48u, 0x10C83Cu, 0x10C844u)) {
        return;
    }
    ctx->pc = 0x10C844u;
label_10c844:
    // 0x10c844: 0x0  nop
    ctx->pc = 0x10c844u;
    // NOP
label_10c848:
    // 0x10c848: 0xc0765ea  jal         func_1D97A8
    ctx->pc = 0x10C848u;
    SET_GPR_U32(ctx, 31, 0x10C850u);
    ctx->pc = 0x10C84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C848u;
    // 0x10c84c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D97A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D97A8u, 0x10C848u, 0x10C850u)) {
        return;
    }
    ctx->pc = 0x10C850u;
label_10c850:
    // 0x10c850: 0xe6140020  swc1        $f20, 0x20($s0)
    ctx->pc = 0x10c850u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x10c854: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x10c854u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x10c858: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x10c858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x10c85c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x10c85cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x10c860: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x10c860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x10c864: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x10c864u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x10c868: 0xe6140010  swc1        $f20, 0x10($s0)
    ctx->pc = 0x10c868u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x10c86c: 0xe6150014  swc1        $f21, 0x14($s0)
    ctx->pc = 0x10c86cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x10c870: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x10c870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x10c874: 0xe615001c  swc1        $f21, 0x1C($s0)
    ctx->pc = 0x10c874u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x10c878: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x10c878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_10c87c:
    // 0x10c87c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x10c87cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10c880:
    // 0x10c880: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x10c880u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x10c884: 0x2e620040  sltiu       $v0, $s3, 0x40
    ctx->pc = 0x10c884u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x10c888: 0x1440ffab  bnez        $v0, . + 4 + (-0x55 << 2)
    ctx->pc = 0x10C888u;
    {
        const bool branch_taken_0x10c888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C888u;
        // 0x10c88c: 0x2631001c  addiu       $s1, $s1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c888) {
            ctx->pc = 0x10C738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10c738;
        }
    }
    ctx->pc = 0x10C890u;
label_10c890:
    // 0x10c890: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x10c890u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_10c894:
    // 0x10c894: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x10c894u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x10c898: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x10c898u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x10c89c: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x10c89cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x10c8a0: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x10c8a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10c8a4: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x10c8a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10c8a8: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x10c8a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10c8ac: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x10c8acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10c8b0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x10c8b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10c8b4: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x10c8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x10c8b8: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x10c8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10c8bc: 0x3e00008  jr          $ra
    ctx->pc = 0x10C8BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C8BCu;
        // 0x10c8c0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C8BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C8C4u;
    // 0x10c8c4: 0x0  nop
    ctx->pc = 0x10c8c4u;
    // NOP
    ctx->pc = 0x10c8c8u;
}
