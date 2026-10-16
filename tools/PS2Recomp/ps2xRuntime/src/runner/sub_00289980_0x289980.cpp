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

// Function: sub_00289980
// Address: 0x289980 - 0x289a20
void sub_00289980_0x289980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289980_0x289980");
#endif

    switch (ctx->pc) {
        case 0x2899dcu: goto label_2899dc;
        case 0x2899ecu: goto label_2899ec;
        case 0x2899fcu: goto label_2899fc;
        case 0x289a0cu: goto label_289a0c;
        default: break;
    }

    ctx->pc = 0x289980u;

    // 0x289980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x289980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x289984: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x289984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x289988: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x289988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x28998c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28998cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x289990: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x289990u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289994: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x289994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x289998: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x289998u;
    {
        const bool branch_taken_0x289998 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28999Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289998u;
        // 0x28999c: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x289998) {
            ctx->pc = 0x2899E4u;
            goto label_2899e4;
        }
    }
    ctx->pc = 0x2899A0u;
    // 0x2899a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2899A0u;
    {
        const bool branch_taken_0x2899a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2899A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2899A0u;
        // 0x2899a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2899a0) {
            ctx->pc = 0x2899B8u;
            goto label_2899b8;
        }
    }
    ctx->pc = 0x2899A8u;
    // 0x2899a8: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2899A8u;
    {
        const bool branch_taken_0x2899a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2899ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2899A8u;
        // 0x2899ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2899a8) {
            ctx->pc = 0x2899D4u;
            goto label_2899d4;
        }
    }
    ctx->pc = 0x2899B0u;
    // 0x2899b0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2899B0u;
    {
        const bool branch_taken_0x2899b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2899B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2899B0u;
        // 0x2899b4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2899b0) {
            ctx->pc = 0x289A14u;
            goto label_289a14;
        }
    }
    ctx->pc = 0x2899B8u;
label_2899b8:
    // 0x2899b8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2899b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2899bc: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2899BCu;
    {
        const bool branch_taken_0x2899bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2899C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2899BCu;
        // 0x2899c0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2899bc) {
            ctx->pc = 0x2899F4u;
            goto label_2899f4;
        }
    }
    ctx->pc = 0x2899C4u;
    // 0x2899c4: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2899C4u;
    {
        const bool branch_taken_0x2899c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2899C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2899C4u;
        // 0x2899c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2899c4) {
            ctx->pc = 0x289A04u;
            goto label_289a04;
        }
    }
    ctx->pc = 0x2899CCu;
    // 0x2899cc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2899CCu;
    {
        const bool branch_taken_0x2899cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2899D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2899CCu;
        // 0x2899d0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2899cc) {
            ctx->pc = 0x289A14u;
            goto label_289a14;
        }
    }
    ctx->pc = 0x2899D4u;
label_2899d4:
    // 0x2899d4: 0xc0a2bd2  jal         func_28AF48
    ctx->pc = 0x2899D4u;
    SET_GPR_U32(ctx, 31, 0x2899DCu);
    ctx->pc = 0x2899D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2899D4u;
    // 0x2899d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AF48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28AF48u, 0x2899D4u, 0x2899DCu)) {
        return;
    }
    ctx->pc = 0x2899DCu;
label_2899dc:
    // 0x2899dc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2899DCu;
    {
        const bool branch_taken_0x2899dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2899E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2899DCu;
        // 0x2899e0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2899dc) {
            ctx->pc = 0x289A10u;
            goto label_289a10;
        }
    }
    ctx->pc = 0x2899E4u;
label_2899e4:
    // 0x2899e4: 0xc0a3386  jal         func_28CE18
    ctx->pc = 0x2899E4u;
    SET_GPR_U32(ctx, 31, 0x2899ECu);
    ctx->pc = 0x2899E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2899E4u;
    // 0x2899e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CE18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28CE18u, 0x2899E4u, 0x2899ECu)) {
        return;
    }
    ctx->pc = 0x2899ECu;
label_2899ec:
    // 0x2899ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2899ECu;
    {
        const bool branch_taken_0x2899ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2899F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2899ECu;
        // 0x2899f0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2899ec) {
            ctx->pc = 0x289A10u;
            goto label_289a10;
        }
    }
    ctx->pc = 0x2899F4u;
label_2899f4:
    // 0x2899f4: 0xc0a26bc  jal         func_289AF0
    ctx->pc = 0x2899F4u;
    SET_GPR_U32(ctx, 31, 0x2899FCu);
    ctx->pc = 0x2899F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2899F4u;
    // 0x2899f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289AF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x289AF0u, 0x2899F4u, 0x2899FCu)) {
        return;
    }
    ctx->pc = 0x2899FCu;
label_2899fc:
    // 0x2899fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2899FCu;
    {
        const bool branch_taken_0x2899fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2899FCu;
        // 0x289a00: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2899fc) {
            ctx->pc = 0x289A10u;
            goto label_289a10;
        }
    }
    ctx->pc = 0x289A04u;
label_289a04:
    // 0x289a04: 0xc0a4284  jal         func_290A10
    ctx->pc = 0x289A04u;
    SET_GPR_U32(ctx, 31, 0x289A0Cu);
    ctx->pc = 0x289A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289A04u;
    // 0x289a08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290A10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x290A10u, 0x289A04u, 0x289A0Cu)) {
        return;
    }
    ctx->pc = 0x289A0Cu;
label_289a0c:
    // 0x289a0c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x289a0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_289a10:
    // 0x289a10: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x289a10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_289a14:
    // 0x289a14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x289a14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x289a18: 0x3e00008  jr          $ra
    ctx->pc = 0x289A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289A18u;
        // 0x289a1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x289A20u;
}
