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

// Function: sub_00263338
// Address: 0x263338 - 0x2633d0
void sub_00263338_0x263338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00263338_0x263338");
#endif

    switch (ctx->pc) {
        case 0x2633a0u: goto label_2633a0;
        default: break;
    }

    ctx->pc = 0x263338u;

    // 0x263338: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x263338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26333c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x26333cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x263340: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x263340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x263344: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x263344u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263348: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x263348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x26334c: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x26334cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x263350: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x263350u;
    {
        const bool branch_taken_0x263350 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x263354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263350u;
        // 0x263354: 0x8f829148  lw          $v0, -0x6EB8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938952)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263350) {
            ctx->pc = 0x2633B4u;
            goto label_2633b4;
        }
    }
    ctx->pc = 0x263358u;
    // 0x263358: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x263358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x26335c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x26335cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x263360: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x263360u;
    {
        const bool branch_taken_0x263360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x263364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263360u;
        // 0x263364: 0x8f829148  lw          $v0, -0x6EB8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938952)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263360) {
            ctx->pc = 0x2633B4u;
            goto label_2633b4;
        }
    }
    ctx->pc = 0x263368u;
    // 0x263368: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x263368u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26336c: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x26336cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x263370: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x263370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x263374: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x263374u;
    {
        const bool branch_taken_0x263374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x263374) {
            ctx->pc = 0x263378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263374u;
            // 0x263378: 0x8c820054  lw          $v0, 0x54($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263394u;
            goto label_263394;
        }
    }
    ctx->pc = 0x26337Cu;
    // 0x26337c: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x26337cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x263380: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x263380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x263384: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x263384u;
    {
        const bool branch_taken_0x263384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x263384) {
            ctx->pc = 0x263388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263384u;
            // 0x263388: 0x8c820054  lw          $v0, 0x54($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263394u;
            goto label_263394;
        }
    }
    ctx->pc = 0x26338Cu;
    // 0x26338c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26338Cu;
    {
        const bool branch_taken_0x26338c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26338Cu;
        // 0x263390: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26338c) {
            ctx->pc = 0x2633A0u;
            goto label_2633a0;
        }
    }
    ctx->pc = 0x263394u;
label_263394:
    // 0x263394: 0x2062021  addu        $a0, $s0, $a2
    ctx->pc = 0x263394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x263398: 0xc0993a4  jal         func_264E90
    ctx->pc = 0x263398u;
    SET_GPR_U32(ctx, 31, 0x2633A0u);
    ctx->pc = 0x26339Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263398u;
    // 0x26339c: 0x94450004  lhu         $a1, 0x4($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x264E90u, 0x263398u, 0x2633A0u)) {
        return;
    }
    ctx->pc = 0x2633A0u;
label_2633a0:
    // 0x2633a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2633a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2633a4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2633A4u;
    {
        const bool branch_taken_0x2633a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2633A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2633A4u;
        // 0x2633a8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2633a4) {
            ctx->pc = 0x2633C0u;
            goto label_2633c0;
        }
    }
    ctx->pc = 0x2633ACu;
    // 0x2633ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2633ACu;
    {
        const bool branch_taken_0x2633ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2633B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2633ACu;
        // 0x2633b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2633ac) {
            ctx->pc = 0x2633C0u;
            goto label_2633c0;
        }
    }
    ctx->pc = 0x2633B4u;
label_2633b4:
    // 0x2633b4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2633b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2633b8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2633b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2633bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2633bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2633c0:
    // 0x2633c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2633c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2633c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2633c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2633c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2633C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2633CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2633C8u;
        // 0x2633cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2633C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2633D0u;
}
