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

// Function: sub_00162320
// Address: 0x162320 - 0x162368
void sub_00162320_0x162320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162320_0x162320");
#endif

    switch (ctx->pc) {
        case 0x16233cu: goto label_16233c;
        case 0x162348u: goto label_162348;
        default: break;
    }

    ctx->pc = 0x162320u;

    // 0x162320: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x162320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x162324: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x162324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x162328: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x162328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16232c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16232cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162330: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x162330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x162334: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x162334u;
    SET_GPR_U32(ctx, 31, 0x16233Cu);
    ctx->pc = 0x162338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162334u;
    // 0x162338: 0x24040094  addiu       $a0, $zero, 0x94 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x162334u, 0x16233Cu)) {
        return;
    }
    ctx->pc = 0x16233Cu;
label_16233c:
    // 0x16233c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16233cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162340: 0xc0588da  jal         func_162368
    ctx->pc = 0x162340u;
    SET_GPR_U32(ctx, 31, 0x162348u);
    ctx->pc = 0x162344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162340u;
    // 0x162344: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162368u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x162368u, 0x162340u, 0x162348u)) {
        return;
    }
    ctx->pc = 0x162348u;
label_162348:
    // 0x162348: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x162348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x16234c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16234cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162350: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x162350u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x162354: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x162354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162358: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x162358u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16235c: 0x3e00008  jr          $ra
    ctx->pc = 0x16235Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16235Cu;
        // 0x162360: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16235Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162364u;
    // 0x162364: 0x0  nop
    ctx->pc = 0x162364u;
    // NOP
    ctx->pc = 0x162368u;
}
