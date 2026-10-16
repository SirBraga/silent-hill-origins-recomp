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

// Function: sub_001270E0
// Address: 0x1270e0 - 0x127150
void sub_001270E0_0x1270e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001270E0_0x1270e0");
#endif

    switch (ctx->pc) {
        case 0x1270f4u: goto label_1270f4;
        case 0x12711cu: goto label_12711c;
        case 0x12712cu: goto label_12712c;
        case 0x127134u: goto label_127134;
        default: break;
    }

    ctx->pc = 0x1270e0u;

    // 0x1270e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1270e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1270e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1270e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1270e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1270e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1270ec: 0xc04094c  jal         func_102530
    ctx->pc = 0x1270ECu;
    SET_GPR_U32(ctx, 31, 0x1270F4u);
    ctx->pc = 0x1270F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1270ECu;
    // 0x1270f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x102530u, 0x1270ECu, 0x1270F4u)) {
        return;
    }
    ctx->pc = 0x1270F4u;
label_1270f4:
    // 0x1270f4: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1270f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x1270f8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1270f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1270fc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1270fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x127100: 0x0  nop
    ctx->pc = 0x127100u;
    // NOP
    // 0x127104: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x127104u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x127108: 0x0  nop
    ctx->pc = 0x127108u;
    // NOP
    // 0x12710c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x12710Cu;
    {
        const bool branch_taken_0x12710c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12710c) {
            ctx->pc = 0x127124u;
            goto label_127124;
        }
    }
    ctx->pc = 0x127114u;
    // 0x127114: 0xc040966  jal         func_102598
    ctx->pc = 0x127114u;
    SET_GPR_U32(ctx, 31, 0x12711Cu);
    ctx->pc = 0x127118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127114u;
    // 0x127118: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102598u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x102598u, 0x127114u, 0x12711Cu)) {
        return;
    }
    ctx->pc = 0x12711Cu;
label_12711c:
    // 0x12711c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12711Cu;
    {
        const bool branch_taken_0x12711c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12711c) {
            ctx->pc = 0x12712Cu;
            goto label_12712c;
        }
    }
    ctx->pc = 0x127124u;
label_127124:
    // 0x127124: 0xc04096e  jal         func_1025B8
    ctx->pc = 0x127124u;
    SET_GPR_U32(ctx, 31, 0x12712Cu);
    ctx->pc = 0x127128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127124u;
    // 0x127128: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1025B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1025B8u, 0x127124u, 0x12712Cu)) {
        return;
    }
    ctx->pc = 0x12712Cu;
label_12712c:
    // 0x12712c: 0xc04093e  jal         func_1024F8
    ctx->pc = 0x12712Cu;
    SET_GPR_U32(ctx, 31, 0x127134u);
    ctx->pc = 0x127130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12712Cu;
    // 0x127130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1024F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1024F8u, 0x12712Cu, 0x127134u)) {
        return;
    }
    ctx->pc = 0x127134u;
label_127134:
    // 0x127134: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x127134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127138: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x127138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12713c: 0xae0202ac  sw          $v0, 0x2AC($s0)
    ctx->pc = 0x12713cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 2));
    // 0x127140: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x127140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x127144: 0x3e00008  jr          $ra
    ctx->pc = 0x127144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127144u;
        // 0x127148: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12714Cu;
    // 0x12714c: 0x0  nop
    ctx->pc = 0x12714cu;
    // NOP
    ctx->pc = 0x127150u;
}
