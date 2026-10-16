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

// Function: sub_001DBC78
// Address: 0x1dbc78 - 0x1dbce8
void sub_001DBC78_0x1dbc78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DBC78_0x1dbc78");
#endif

    switch (ctx->pc) {
        case 0x1dbcd8u: goto label_1dbcd8;
        default: break;
    }

    ctx->pc = 0x1dbc78u;

    // 0x1dbc78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dbc78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dbc7c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dbc7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1dbc80: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1DBC80u;
    {
        const bool branch_taken_0x1dbc80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBC80u;
        // 0x1dbc84: 0xe7ac0000  swc1        $f12, 0x0($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbc80) {
            ctx->pc = 0x1DBCD8u;
            goto label_1dbcd8;
        }
    }
    ctx->pc = 0x1DBC88u;
    // 0x1dbc88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dbc88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dbc8c: 0x0  nop
    ctx->pc = 0x1dbc8cu;
    // NOP
    // 0x1dbc90: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1dbc90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dbc94: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x1dbc94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x1dbc98: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1dbc98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1dbc9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1dbc9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dbca0: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
    ctx->pc = 0x1DBCA0u;
    {
        const bool branch_taken_0x1dbca0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dbca0) {
            ctx->pc = 0x1DBCA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DBCA0u;
            // 0x1dbca4: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DBCC8u;
            goto label_1dbcc8;
        }
    }
    ctx->pc = 0x1DBCA8u;
    // 0x1dbca8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1dbca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1dbcac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1dbcacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dbcb0: 0x0  nop
    ctx->pc = 0x1dbcb0u;
    // NOP
    // 0x1dbcb4: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x1dbcb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dbcb8: 0x0  nop
    ctx->pc = 0x1dbcb8u;
    // NOP
    // 0x1dbcbc: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1DBCBCu;
    {
        const bool branch_taken_0x1dbcbc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dbcbc) {
            ctx->pc = 0x1DBCC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DBCBCu;
            // 0x1dbcc0: 0x3c05001e  lui         $a1, 0x1E (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DBCCCu;
            goto label_1dbccc;
        }
    }
    ctx->pc = 0x1DBCC4u;
    // 0x1dbcc4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1dbcc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1dbcc8:
    // 0x1dbcc8: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1dbcc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
label_1dbccc:
    // 0x1dbccc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1dbcccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbcd0: 0xc09545a  jal         func_255168
    ctx->pc = 0x1DBCD0u;
    SET_GPR_U32(ctx, 31, 0x1DBCD8u);
    ctx->pc = 0x1DBCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBCD0u;
    // 0x1dbcd4: 0x24a5bc40  addiu       $a1, $a1, -0x43C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255168u, 0x1DBCD0u, 0x1DBCD8u)) {
        return;
    }
    ctx->pc = 0x1DBCD8u;
label_1dbcd8:
    // 0x1dbcd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dbcd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dbcdc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBCDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBCDCu;
        // 0x1dbce0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBCDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBCE4u;
    // 0x1dbce4: 0x0  nop
    ctx->pc = 0x1dbce4u;
    // NOP
    ctx->pc = 0x1dbce8u;
}
