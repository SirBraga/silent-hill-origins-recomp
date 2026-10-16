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

// Function: sub_002EA3F8
// Address: 0x2ea3f8 - 0x2ea470
void sub_002EA3F8_0x2ea3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EA3F8_0x2ea3f8");
#endif

    switch (ctx->pc) {
        case 0x2ea408u: goto label_2ea408;
        case 0x2ea418u: goto label_2ea418;
        case 0x2ea428u: goto label_2ea428;
        case 0x2ea438u: goto label_2ea438;
        case 0x2ea448u: goto label_2ea448;
        case 0x2ea450u: goto label_2ea450;
        case 0x2ea458u: goto label_2ea458;
        default: break;
    }

    ctx->pc = 0x2ea3f8u;

    // 0x2ea3f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ea3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ea3fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ea3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ea400: 0xc0badac  jal         func_2EB6B0
    ctx->pc = 0x2EA400u;
    SET_GPR_U32(ctx, 31, 0x2EA408u);
    ctx->pc = 0x2EB6B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EB6B0u, 0x2EA400u, 0x2EA408u)) {
        return;
    }
    ctx->pc = 0x2EA408u;
label_2ea408:
    // 0x2ea408: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2EA408u;
    {
        const bool branch_taken_0x2ea408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA408u;
        // 0x2ea40c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea408) {
            ctx->pc = 0x2EA45Cu;
            goto label_2ea45c;
        }
    }
    ctx->pc = 0x2EA410u;
    // 0x2ea410: 0xc0bb32c  jal         func_2ECCB0
    ctx->pc = 0x2EA410u;
    SET_GPR_U32(ctx, 31, 0x2EA418u);
    ctx->pc = 0x2ECCB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2ECCB0u, 0x2EA410u, 0x2EA418u)) {
        return;
    }
    ctx->pc = 0x2EA418u;
label_2ea418:
    // 0x2ea418: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2EA418u;
    {
        const bool branch_taken_0x2ea418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea418) {
            ctx->pc = 0x2EA450u;
            goto label_2ea450;
        }
    }
    ctx->pc = 0x2EA420u;
    // 0x2ea420: 0xc0bb5cc  jal         func_2ED730
    ctx->pc = 0x2EA420u;
    SET_GPR_U32(ctx, 31, 0x2EA428u);
    ctx->pc = 0x2ED730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2ED730u, 0x2EA420u, 0x2EA428u)) {
        return;
    }
    ctx->pc = 0x2EA428u;
label_2ea428:
    // 0x2ea428: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EA428u;
    {
        const bool branch_taken_0x2ea428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea428) {
            ctx->pc = 0x2EA448u;
            goto label_2ea448;
        }
    }
    ctx->pc = 0x2EA430u;
    // 0x2ea430: 0xc0ba6ee  jal         func_2E9BB8
    ctx->pc = 0x2EA430u;
    SET_GPR_U32(ctx, 31, 0x2EA438u);
    ctx->pc = 0x2E9BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E9BB8u, 0x2EA430u, 0x2EA438u)) {
        return;
    }
    ctx->pc = 0x2EA438u;
label_2ea438:
    // 0x2ea438: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EA438u;
    {
        const bool branch_taken_0x2ea438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA438u;
        // 0x2ea43c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea438) {
            ctx->pc = 0x2EA45Cu;
            goto label_2ea45c;
        }
    }
    ctx->pc = 0x2EA440u;
    // 0x2ea440: 0xc0bb5fa  jal         func_2ED7E8
    ctx->pc = 0x2EA440u;
    SET_GPR_U32(ctx, 31, 0x2EA448u);
    ctx->pc = 0x2ED7E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2ED7E8u, 0x2EA440u, 0x2EA448u)) {
        return;
    }
    ctx->pc = 0x2EA448u;
label_2ea448:
    // 0x2ea448: 0xc0bb31c  jal         func_2ECC70
    ctx->pc = 0x2EA448u;
    SET_GPR_U32(ctx, 31, 0x2EA450u);
    ctx->pc = 0x2ECC70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2ECC70u, 0x2EA448u, 0x2EA450u)) {
        return;
    }
    ctx->pc = 0x2EA450u;
label_2ea450:
    // 0x2ea450: 0xc0bad9c  jal         func_2EB670
    ctx->pc = 0x2EA450u;
    SET_GPR_U32(ctx, 31, 0x2EA458u);
    ctx->pc = 0x2EB670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EB670u, 0x2EA450u, 0x2EA458u)) {
        return;
    }
    ctx->pc = 0x2EA458u;
label_2ea458:
    // 0x2ea458: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ea458u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea45c:
    // 0x2ea45c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ea45cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ea460: 0x3e00008  jr          $ra
    ctx->pc = 0x2EA460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EA464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA460u;
        // 0x2ea464: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EA460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EA468u;
    // 0x2ea468: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2ea468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ea46c: 0x0  nop
    ctx->pc = 0x2ea46cu;
    // NOP
    ctx->pc = 0x2ea470u;
}
