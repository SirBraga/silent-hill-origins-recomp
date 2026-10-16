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

// Function: sub_0017A6F8
// Address: 0x17a6f8 - 0x17a7e8
void sub_0017A6F8_0x17a6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A6F8_0x17a6f8");
#endif

    switch (ctx->pc) {
        case 0x17a720u: goto label_17a720;
        case 0x17a798u: goto label_17a798;
        case 0x17a7acu: goto label_17a7ac;
        case 0x17a7d0u: goto label_17a7d0;
        default: break;
    }

    ctx->pc = 0x17a6f8u;

    // 0x17a6f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17a6f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17a6fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17a6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17a700: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17a700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17a704: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x17a704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x17a708: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17A708u;
    {
        const bool branch_taken_0x17a708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A708u;
        // 0x17a70c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a708) {
            ctx->pc = 0x17A718u;
            goto label_17a718;
        }
    }
    ctx->pc = 0x17A710u;
    // 0x17a710: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17A710u;
    {
        const bool branch_taken_0x17a710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A710u;
        // 0x17a714: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a710) {
            ctx->pc = 0x17A724u;
            goto label_17a724;
        }
    }
    ctx->pc = 0x17A718u;
label_17a718:
    // 0x17a718: 0xc07be38  jal         func_1EF8E0
    ctx->pc = 0x17A718u;
    SET_GPR_U32(ctx, 31, 0x17A720u);
    ctx->pc = 0x1EF8E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EF8E0u, 0x17A718u, 0x17A720u)) {
        return;
    }
    ctx->pc = 0x17A720u;
label_17a720:
    // 0x17a720: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x17a720u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_17a724:
    // 0x17a724: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x17A724u;
    {
        const bool branch_taken_0x17a724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17A728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A724u;
        // 0x17a728: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a724) {
            ctx->pc = 0x17A7D4u;
            goto label_17a7d4;
        }
    }
    ctx->pc = 0x17A72Cu;
    // 0x17a72c: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x17a72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17a730: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17a730u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17a734: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x17a734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x17a738: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17a738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x17a73c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x17a73cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17a740: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x17a740u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x17a744: 0x0  nop
    ctx->pc = 0x17a744u;
    // NOP
    // 0x17a748: 0x0  nop
    ctx->pc = 0x17a748u;
    // NOP
    // 0x17a74c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x17a74cu;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[0]);
    // 0x17a750: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x17A750u;
    {
        const bool branch_taken_0x17a750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A750u;
        // 0x17a754: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a750) {
            ctx->pc = 0x17A7D0u;
            goto label_17a7d0;
        }
    }
    ctx->pc = 0x17A758u;
    // 0x17a758: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17a758u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17a75c: 0x24426ec0  addiu       $v0, $v0, 0x6EC0
    ctx->pc = 0x17a75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28352));
    // 0x17a760: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17a760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17a764: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x17a764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17a768: 0x800008  jr          $a0
    ctx->pc = 0x17A768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A770u: goto label_17a770;
            case 0x17A77Cu: goto label_17a77c;
            case 0x17A7A0u: goto label_17a7a0;
            case 0x17A7B4u: goto label_17a7b4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A768u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x17A770u;
label_17a770:
    // 0x17a770: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x17a770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x17a774: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17A774u;
    {
        const bool branch_taken_0x17a774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A774u;
        // 0x17a778: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a774) {
            ctx->pc = 0x17A784u;
            goto label_17a784;
        }
    }
    ctx->pc = 0x17A77Cu;
label_17a77c:
    // 0x17a77c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x17a77cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x17a780: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17a780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a784:
    // 0x17a784: 0x8c444120  lw          $a0, 0x4120($v0)
    ctx->pc = 0x17a784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16672)));
    // 0x17a788: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x17a788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a78c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x17a78cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a790: 0xc07bf14  jal         func_1EFC50
    ctx->pc = 0x17A790u;
    SET_GPR_U32(ctx, 31, 0x17A798u);
    ctx->pc = 0x17A794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A790u;
    // 0x17a794: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFC50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EFC50u, 0x17A790u, 0x17A798u)) {
        return;
    }
    ctx->pc = 0x17A798u;
label_17a798:
    // 0x17a798: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x17A798u;
    {
        const bool branch_taken_0x17a798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A798u;
        // 0x17a79c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a798) {
            ctx->pc = 0x17A7D4u;
            goto label_17a7d4;
        }
    }
    ctx->pc = 0x17A7A0u;
label_17a7a0:
    // 0x17a7a0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x17a7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x17a7a4: 0xc07bf02  jal         func_1EFC08
    ctx->pc = 0x17A7A4u;
    SET_GPR_U32(ctx, 31, 0x17A7ACu);
    ctx->pc = 0x17A7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A7A4u;
    // 0x17a7a8: 0x8c444120  lw          $a0, 0x4120($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFC08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EFC08u, 0x17A7A4u, 0x17A7ACu)) {
        return;
    }
    ctx->pc = 0x17A7ACu;
label_17a7ac:
    // 0x17a7ac: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x17A7ACu;
    {
        const bool branch_taken_0x17a7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A7ACu;
        // 0x17a7b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a7ac) {
            ctx->pc = 0x17A7D4u;
            goto label_17a7d4;
        }
    }
    ctx->pc = 0x17A7B4u;
label_17a7b4:
    // 0x17a7b4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x17a7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x17a7b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17a7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17a7bc: 0x8c444120  lw          $a0, 0x4120($v0)
    ctx->pc = 0x17a7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B4120u));
    // 0x17a7c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x17a7c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a7c4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x17a7c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a7c8: 0xc07bf14  jal         func_1EFC50
    ctx->pc = 0x17A7C8u;
    SET_GPR_U32(ctx, 31, 0x17A7D0u);
    ctx->pc = 0x17A7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A7C8u;
    // 0x17a7cc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFC50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EFC50u, 0x17A7C8u, 0x17A7D0u)) {
        return;
    }
    ctx->pc = 0x17A7D0u;
label_17a7d0:
    // 0x17a7d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17a7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17a7d4:
    // 0x17a7d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17a7d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a7d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17a7d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a7dc: 0x3e00008  jr          $ra
    ctx->pc = 0x17A7DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A7DCu;
        // 0x17a7e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A7DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A7E4u;
    // 0x17a7e4: 0x0  nop
    ctx->pc = 0x17a7e4u;
    // NOP
    ctx->pc = 0x17a7e8u;
}
