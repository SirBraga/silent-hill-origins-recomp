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

// Function: sub_002898F8
// Address: 0x2898f8 - 0x28995c
void sub_002898F8_0x2898f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002898F8_0x2898f8");
#endif

    switch (ctx->pc) {
        case 0x289934u: goto label_289934;
        case 0x289944u: goto label_289944;
        case 0x289954u: goto label_289954;
        default: break;
    }

    ctx->pc = 0x2898f8u;

    // 0x2898f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2898f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2898fc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2898fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289900: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x289900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x289904: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x289904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x289908: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x289908u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x28990c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x28990Cu;
    {
        const bool branch_taken_0x28990c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28990Cu;
        // 0x289910: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28990c) {
            ctx->pc = 0x28996Cu;
            return;
        }
    }
    ctx->pc = 0x289914u;
    // 0x289914: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x289914u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x289918: 0x2442ce00  addiu       $v0, $v0, -0x3200
    ctx->pc = 0x289918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954496));
    // 0x28991c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28991cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x289920: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x289920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x289924: 0x800008  jr          $a0
    ctx->pc = 0x289924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28992Cu: goto label_28992c;
            case 0x28993Cu: goto label_28993c;
            case 0x28994Cu: goto label_28994c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289924u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28992Cu;
label_28992c:
    // 0x28992c: 0xc0a2a62  jal         func_28A988
    ctx->pc = 0x28992Cu;
    SET_GPR_U32(ctx, 31, 0x289934u);
    ctx->pc = 0x289930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28992Cu;
    // 0x289930: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A988u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28A988u, 0x28992Cu, 0x289934u)) {
        return;
    }
    ctx->pc = 0x289934u;
label_289934:
    // 0x289934: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x289934u;
    {
        const bool branch_taken_0x289934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289934u;
        // 0x289938: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289934) {
            ctx->pc = 0x289974u;
            return;
        }
    }
    ctx->pc = 0x28993Cu;
label_28993c:
    // 0x28993c: 0xc0a32d4  jal         func_28CB50
    ctx->pc = 0x28993Cu;
    SET_GPR_U32(ctx, 31, 0x289944u);
    ctx->pc = 0x289940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28993Cu;
    // 0x289940: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CB50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28CB50u, 0x28993Cu, 0x289944u)) {
        return;
    }
    ctx->pc = 0x289944u;
label_289944:
    // 0x289944: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x289944u;
    {
        const bool branch_taken_0x289944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289944u;
        // 0x289948: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289944) {
            ctx->pc = 0x289974u;
            return;
        }
    }
    ctx->pc = 0x28994Cu;
label_28994c:
    // 0x28994c: 0xc0a26ea  jal         func_289BA8
    ctx->pc = 0x28994Cu;
    SET_GPR_U32(ctx, 31, 0x289954u);
    ctx->pc = 0x289950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28994Cu;
    // 0x289950: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289BA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x289BA8u, 0x28994Cu, 0x289954u)) {
        return;
    }
    ctx->pc = 0x289954u;
label_289954:
    // 0x289954: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x289954u;
    {
        const bool branch_taken_0x289954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289954u;
        // 0x289958: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289954) {
            ctx->pc = 0x289974u;
            return;
        }
    }
    ctx->pc = 0x28995Cu;
}
