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

// Function: sub_002895E0
// Address: 0x2895e0 - 0x289644
void sub_002895E0_0x2895e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002895E0_0x2895e0");
#endif

    switch (ctx->pc) {
        case 0x28961cu: goto label_28961c;
        case 0x28962cu: goto label_28962c;
        case 0x28963cu: goto label_28963c;
        default: break;
    }

    ctx->pc = 0x2895e0u;

    // 0x2895e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2895e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2895e4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2895e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2895e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2895e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2895ec: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2895ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2895f0: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x2895f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2895f4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2895F4u;
    {
        const bool branch_taken_0x2895f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2895F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2895F4u;
        // 0x2895f8: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2895f4) {
            ctx->pc = 0x289654u;
            return;
        }
    }
    ctx->pc = 0x2895FCu;
    // 0x2895fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2895fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x289600: 0x2442cdc0  addiu       $v0, $v0, -0x3240
    ctx->pc = 0x289600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954432));
    // 0x289604: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x289604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x289608: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x289608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28960c: 0x800008  jr          $a0
    ctx->pc = 0x28960Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x289614u: goto label_289614;
            case 0x289624u: goto label_289624;
            case 0x289634u: goto label_289634;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28960Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x289614u;
label_289614:
    // 0x289614: 0xc0a2ddc  jal         func_28B770
    ctx->pc = 0x289614u;
    SET_GPR_U32(ctx, 31, 0x28961Cu);
    ctx->pc = 0x289618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289614u;
    // 0x289618: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B770u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28B770u, 0x289614u, 0x28961Cu)) {
        return;
    }
    ctx->pc = 0x28961Cu;
label_28961c:
    // 0x28961c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x28961Cu;
    {
        const bool branch_taken_0x28961c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28961Cu;
        // 0x289620: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28961c) {
            ctx->pc = 0x28965Cu;
            return;
        }
    }
    ctx->pc = 0x289624u;
label_289624:
    // 0x289624: 0xc0a34ac  jal         func_28D2B0
    ctx->pc = 0x289624u;
    SET_GPR_U32(ctx, 31, 0x28962Cu);
    ctx->pc = 0x289628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289624u;
    // 0x289628: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D2B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28D2B0u, 0x289624u, 0x28962Cu)) {
        return;
    }
    ctx->pc = 0x28962Cu;
label_28962c:
    // 0x28962c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x28962Cu;
    {
        const bool branch_taken_0x28962c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28962Cu;
        // 0x289630: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28962c) {
            ctx->pc = 0x28965Cu;
            return;
        }
    }
    ctx->pc = 0x289634u;
label_289634:
    // 0x289634: 0xc0a26b4  jal         func_289AD0
    ctx->pc = 0x289634u;
    SET_GPR_U32(ctx, 31, 0x28963Cu);
    ctx->pc = 0x289638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289634u;
    // 0x289638: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289AD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x289AD0u, 0x289634u, 0x28963Cu)) {
        return;
    }
    ctx->pc = 0x28963Cu;
label_28963c:
    // 0x28963c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28963Cu;
    {
        const bool branch_taken_0x28963c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28963Cu;
        // 0x289640: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28963c) {
            ctx->pc = 0x28965Cu;
            return;
        }
    }
    ctx->pc = 0x289644u;
}
