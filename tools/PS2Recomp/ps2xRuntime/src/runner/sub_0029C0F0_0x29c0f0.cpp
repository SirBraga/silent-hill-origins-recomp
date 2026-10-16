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

// Function: sub_0029C0F0
// Address: 0x29c0f0 - 0x29c158
void sub_0029C0F0_0x29c0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C0F0_0x29c0f0");
#endif

    switch (ctx->pc) {
        case 0x29c12cu: goto label_29c12c;
        default: break;
    }

    ctx->pc = 0x29c0f0u;

    // 0x29c0f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29c0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29c0f4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x29c0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x29c0f8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x29c0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x29c0fc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x29c0fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c100: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29c100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29c104: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x29c104u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c108: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29c108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29c10c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x29c10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x29c110: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29c110u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c114: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29c114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29c118: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x29c118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x29c11c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29C11Cu;
    {
        const bool branch_taken_0x29c11c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C11Cu;
        // 0x29c120: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c11c) {
            ctx->pc = 0x29C12Cu;
            goto label_29c12c;
        }
    }
    ctx->pc = 0x29C124u;
    // 0x29c124: 0xc0a71ee  jal         func_29C7B8
    ctx->pc = 0x29C124u;
    SET_GPR_U32(ctx, 31, 0x29C12Cu);
    ctx->pc = 0x29C7B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29C7B8u, 0x29C124u, 0x29C12Cu)) {
        return;
    }
    ctx->pc = 0x29C12Cu;
label_29c12c:
    // 0x29c12c: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x29c12cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x29c130: 0xae13000c  sw          $s3, 0xC($s0)
    ctx->pc = 0x29c130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 19));
    // 0x29c134: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x29c134u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    // 0x29c138: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x29c138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29c13c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x29c13cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29c140: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x29c140u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29c144: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29c144u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c148: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29c148u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c14c: 0x3e00008  jr          $ra
    ctx->pc = 0x29C14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C14Cu;
        // 0x29c150: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C14Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C154u;
    // 0x29c154: 0x0  nop
    ctx->pc = 0x29c154u;
    // NOP
    ctx->pc = 0x29c158u;
}
