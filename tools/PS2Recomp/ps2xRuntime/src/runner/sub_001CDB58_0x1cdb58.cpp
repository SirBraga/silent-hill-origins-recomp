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

// Function: sub_001CDB58
// Address: 0x1cdb58 - 0x1cdbc0
void sub_001CDB58_0x1cdb58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CDB58_0x1cdb58");
#endif

    switch (ctx->pc) {
        case 0x1cdbb0u: goto label_1cdbb0;
        default: break;
    }

    ctx->pc = 0x1cdb58u;

    // 0x1cdb58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cdb58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cdb5c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1cdb5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdb60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cdb60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cdb64: 0x8c620290  lw          $v0, 0x290($v1)
    ctx->pc = 0x1cdb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 656)));
    // 0x1cdb68: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CDB68u;
    {
        const bool branch_taken_0x1cdb68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDB68u;
        // 0x1cdb6c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdb68) {
            ctx->pc = 0x1CDBB4u;
            goto label_1cdbb4;
        }
    }
    ctx->pc = 0x1CDB70u;
    // 0x1cdb70: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1cdb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdb74: 0xc4610298  lwc1        $f1, 0x298($v1)
    ctx->pc = 0x1cdb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cdb78: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cdb78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cdb7c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cdb7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cdb80: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1cdb80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1cdb84: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x1cdb84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cdb88: 0x0  nop
    ctx->pc = 0x1cdb88u;
    // NOP
    // 0x1cdb8c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1CDB8Cu;
    {
        const bool branch_taken_0x1cdb8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CDB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDB8Cu;
        // 0x1cdb90: 0xe4610298  swc1        $f1, 0x298($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 664), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdb8c) {
            ctx->pc = 0x1CDBB4u;
            goto label_1cdbb4;
        }
    }
    ctx->pc = 0x1CDB94u;
    // 0x1cdb94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cdb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdb98: 0x8c640044  lw          $a0, 0x44($v1)
    ctx->pc = 0x1cdb98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x1cdb9c: 0xac620294  sw          $v0, 0x294($v1)
    ctx->pc = 0x1cdb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 660), GPR_U32(ctx, 2));
    // 0x1cdba0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cdba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdba4: 0xac600290  sw          $zero, 0x290($v1)
    ctx->pc = 0x1cdba4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 656), GPR_U32(ctx, 0));
    // 0x1cdba8: 0xc06bede  jal         func_1AFB78
    ctx->pc = 0x1CDBA8u;
    SET_GPR_U32(ctx, 31, 0x1CDBB0u);
    ctx->pc = 0x1CDBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDBA8u;
    // 0x1cdbac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFB78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AFB78u, 0x1CDBA8u, 0x1CDBB0u)) {
        return;
    }
    ctx->pc = 0x1CDBB0u;
label_1cdbb0:
    // 0x1cdbb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cdbb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cdbb4:
    // 0x1cdbb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDBB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDBB4u;
        // 0x1cdbb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDBB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDBBCu;
    // 0x1cdbbc: 0x0  nop
    ctx->pc = 0x1cdbbcu;
    // NOP
    ctx->pc = 0x1cdbc0u;
}
