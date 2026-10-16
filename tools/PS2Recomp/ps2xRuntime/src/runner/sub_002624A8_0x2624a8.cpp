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

// Function: sub_002624A8
// Address: 0x2624a8 - 0x262528
void sub_002624A8_0x2624a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002624A8_0x2624a8");
#endif

    switch (ctx->pc) {
        case 0x26250cu: goto label_26250c;
        default: break;
    }

    ctx->pc = 0x2624a8u;

    // 0x2624a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2624a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2624ac: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2624acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2624b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2624b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2624b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2624b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2624b8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2624b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2624bc: 0x8cc30078  lw          $v1, 0x78($a2)
    ctx->pc = 0x2624bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 120)));
    // 0x2624c0: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2624c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x2624c4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2624c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2624c8: 0x8c4241b4  lw          $v0, 0x41B4($v0)
    ctx->pc = 0x2624c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B41B4u));
    // 0x2624cc: 0xc22021  addu        $a0, $a2, $v0
    ctx->pc = 0x2624ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2624d0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2624d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2624d4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2624D4u;
    {
        const bool branch_taken_0x2624d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2624d4) {
            ctx->pc = 0x2624D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2624D4u;
            // 0x2624d8: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2624F8u;
            goto label_2624f8;
        }
    }
    ctx->pc = 0x2624DCu;
    // 0x2624dc: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x2624dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2624e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2624e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2624e4: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2624E4u;
    {
        const bool branch_taken_0x2624e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2624e4) {
            ctx->pc = 0x2624E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2624E4u;
            // 0x2624e8: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2624F8u;
            goto label_2624f8;
        }
    }
    ctx->pc = 0x2624ECu;
    // 0x2624ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2624ECu;
    {
        const bool branch_taken_0x2624ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2624F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2624ECu;
        // 0x2624f0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2624ec) {
            ctx->pc = 0x26250Cu;
            goto label_26250c;
        }
    }
    ctx->pc = 0x2624F4u;
    // 0x2624f4: 0x0  nop
    ctx->pc = 0x2624f4u;
    // NOP
label_2624f8:
    // 0x2624f8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2624f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2624fc: 0x8c8441b4  lw          $a0, 0x41B4($a0)
    ctx->pc = 0x2624fcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B41B4u));
    // 0x262500: 0x94450004  lhu         $a1, 0x4($v0)
    ctx->pc = 0x262500u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x262504: 0xc0993a4  jal         func_264E90
    ctx->pc = 0x262504u;
    SET_GPR_U32(ctx, 31, 0x26250Cu);
    ctx->pc = 0x262508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262504u;
    // 0x262508: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x264E90u, 0x262504u, 0x26250Cu)) {
        return;
    }
    ctx->pc = 0x26250Cu;
label_26250c:
    // 0x26250c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26250cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x262510: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x262510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x262514: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x262514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x262518: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x262518u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26251c: 0x3e00008  jr          $ra
    ctx->pc = 0x26251Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26251Cu;
        // 0x262520: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26251Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x262524u;
    // 0x262524: 0x0  nop
    ctx->pc = 0x262524u;
    // NOP
    ctx->pc = 0x262528u;
}
