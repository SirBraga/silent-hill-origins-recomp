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

// Function: sub_00149500
// Address: 0x149500 - 0x149608
void sub_00149500_0x149500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149500_0x149500");
#endif

    switch (ctx->pc) {
        case 0x149590u: goto label_149590;
        case 0x1495b4u: goto label_1495b4;
        case 0x1495d4u: goto label_1495d4;
        case 0x1495dcu: goto label_1495dc;
        default: break;
    }

    ctx->pc = 0x149500u;

    // 0x149500: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x149500u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x149504: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x149504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x149508: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x149508u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x14950c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14950cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x149510: 0xc48084d4  lwc1        $f0, -0x7B2C($a0)
    ctx->pc = 0x149510u;
    { uint32_t bits = FAST_READ32(0x3384D4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149514: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x149514u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x149518: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x149518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x14951c: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x14951cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x149520: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x149520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x149524: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x149524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x149528: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x149528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x14952c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14952cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x149530: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149534: 0x4500002c  bc1f        . + 4 + (0x2C << 2)
    ctx->pc = 0x149534u;
    {
        const bool branch_taken_0x149534 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x149538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149534u;
        // 0x149538: 0xe48084d4  swc1        $f0, -0x7B2C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294935764), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x149534) {
            ctx->pc = 0x1495E8u;
            goto label_1495e8;
        }
    }
    ctx->pc = 0x14953Cu;
    // 0x14953c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14953cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x149540: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x149540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x149544: 0x8c4384d0  lw          $v1, -0x7B30($v0)
    ctx->pc = 0x149544u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3384D0u));
    // 0x149548: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x149548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14954c: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x14954Cu;
    {
        const bool branch_taken_0x14954c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x149550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14954Cu;
        // 0x149550: 0xe48084d4  swc1        $f0, -0x7B2C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294935764), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14954c) {
            ctx->pc = 0x1495E8u;
            goto label_1495e8;
        }
    }
    ctx->pc = 0x149554u;
    // 0x149554: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x149554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x149558: 0x8c62870c  lw          $v0, -0x78F4($v1)
    ctx->pc = 0x149558u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33870Cu));
    // 0x14955c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x14955cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x149560: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x149560u;
    {
        const bool branch_taken_0x149560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x149564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149560u;
        // 0x149564: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149560) {
            ctx->pc = 0x1495E8u;
            goto label_1495e8;
        }
    }
    ctx->pc = 0x149568u;
    // 0x149568: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x149568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x14956c: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x14956Cu;
    {
        const bool branch_taken_0x14956c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14956c) {
            ctx->pc = 0x149570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14956Cu;
            // 0x149570: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149578u;
            goto label_149578;
        }
    }
    ctx->pc = 0x149574u;
    // 0x149574: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x149574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_149578:
    // 0x149578: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x149578u;
    {
        const bool branch_taken_0x149578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14957Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149578u;
        // 0x14957c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149578) {
            ctx->pc = 0x1495E8u;
            goto label_1495e8;
        }
    }
    ctx->pc = 0x149580u;
    // 0x149580: 0x8e4284d0  lw          $v0, -0x7B30($s2)
    ctx->pc = 0x149580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294935760)));
    // 0x149584: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x149584u;
    {
        const bool branch_taken_0x149584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x149588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149584u;
        // 0x149588: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149584) {
            ctx->pc = 0x1495E8u;
            goto label_1495e8;
        }
    }
    ctx->pc = 0x14958Cu;
    // 0x14958c: 0x8e3084d0  lw          $s0, -0x7B30($s1)
    ctx->pc = 0x14958cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294935760)));
label_149590:
    // 0x149590: 0x8e63870c  lw          $v1, -0x78F4($s3)
    ctx->pc = 0x149590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294936332)));
    // 0x149594: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x149594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x149598: 0xae2284d0  sw          $v0, -0x7B30($s1)
    ctx->pc = 0x149598u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294935760), GPR_U32(ctx, 2));
    // 0x14959c: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x14959cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1495a0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1495a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1495a4: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x1495a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1495a8: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x1495a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1495ac: 0xc05e316  jal         func_178C58
    ctx->pc = 0x1495ACu;
    SET_GPR_U32(ctx, 31, 0x1495B4u);
    ctx->pc = 0x1495B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1495ACu;
    // 0x1495b0: 0x8e080010  lw          $t0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178C58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x178C58u, 0x1495ACu, 0x1495B4u)) {
        return;
    }
    ctx->pc = 0x1495B4u;
label_1495b4:
    // 0x1495b4: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1495b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1495b8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1495B8u;
    {
        const bool branch_taken_0x1495b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1495b8) {
            ctx->pc = 0x1495D4u;
            goto label_1495d4;
        }
    }
    ctx->pc = 0x1495C0u;
    // 0x1495c0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1495c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1495c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1495C4u;
    {
        const bool branch_taken_0x1495c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1495c4) {
            ctx->pc = 0x1495D4u;
            goto label_1495d4;
        }
    }
    ctx->pc = 0x1495CCu;
    // 0x1495cc: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1495CCu;
    SET_GPR_U32(ctx, 31, 0x1495D4u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1495CCu, 0x1495D4u)) {
        return;
    }
    ctx->pc = 0x1495D4u;
label_1495d4:
    // 0x1495d4: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1495D4u;
    SET_GPR_U32(ctx, 31, 0x1495DCu);
    ctx->pc = 0x1495D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1495D4u;
    // 0x1495d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1495D4u, 0x1495DCu)) {
        return;
    }
    ctx->pc = 0x1495DCu;
label_1495dc:
    // 0x1495dc: 0x8e4284d0  lw          $v0, -0x7B30($s2)
    ctx->pc = 0x1495dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294935760)));
    // 0x1495e0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1495E0u;
    {
        const bool branch_taken_0x1495e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1495E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1495E0u;
        // 0x1495e4: 0x8e3084d0  lw          $s0, -0x7B30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294935760)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1495e0) {
            ctx->pc = 0x149590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_149590;
        }
    }
    ctx->pc = 0x1495E8u;
label_1495e8:
    // 0x1495e8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1495e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1495ec: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1495ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1495f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1495f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1495f4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1495f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1495f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1495f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1495fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1495FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1495FCu;
        // 0x149600: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1495FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149604u;
    // 0x149604: 0x0  nop
    ctx->pc = 0x149604u;
    // NOP
    ctx->pc = 0x149608u;
}
