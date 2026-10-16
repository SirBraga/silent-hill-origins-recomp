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

// Function: sub_001BE078
// Address: 0x1be078 - 0x1be128
void sub_001BE078_0x1be078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE078_0x1be078");
#endif

    switch (ctx->pc) {
        case 0x1be0ecu: goto label_1be0ec;
        default: break;
    }

    ctx->pc = 0x1be078u;

    // 0x1be078: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1be078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1be07c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1be07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1be080: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1be080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1be084: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1be084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be088: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1be088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1be08c: 0x8e0302ac  lw          $v1, 0x2AC($s0)
    ctx->pc = 0x1be08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 684)));
    // 0x1be090: 0x28620006  slti        $v0, $v1, 0x6
    ctx->pc = 0x1be090u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1be094: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BE094u;
    {
        const bool branch_taken_0x1be094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE094u;
        // 0x1be098: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be094) {
            ctx->pc = 0x1BE0A4u;
            goto label_1be0a4;
        }
    }
    ctx->pc = 0x1BE09Cu;
    // 0x1be09c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1BE09Cu;
    {
        const bool branch_taken_0x1be09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE09Cu;
        // 0x1be0a0: 0xae0002ac  sw          $zero, 0x2AC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be09c) {
            ctx->pc = 0x1BE0B4u;
            goto label_1be0b4;
        }
    }
    ctx->pc = 0x1BE0A4u;
label_1be0a4:
    // 0x1be0a4: 0x4630004  bgezl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE0A4u;
    {
        const bool branch_taken_0x1be0a4 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x1be0a4) {
            ctx->pc = 0x1BE0A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BE0A4u;
            // 0x1be0a8: 0x8e0302ac  lw          $v1, 0x2AC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 684)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BE0B8u;
            goto label_1be0b8;
        }
    }
    ctx->pc = 0x1BE0ACu;
    // 0x1be0ac: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1be0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1be0b0: 0xae0202ac  sw          $v0, 0x2AC($s0)
    ctx->pc = 0x1be0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 2));
label_1be0b4:
    // 0x1be0b4: 0x8e0302ac  lw          $v1, 0x2AC($s0)
    ctx->pc = 0x1be0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 684)));
label_1be0b8:
    // 0x1be0b8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1be0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1be0bc: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BE0BCu;
    {
        const bool branch_taken_0x1be0bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1be0bc) {
            ctx->pc = 0x1BE0C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BE0BCu;
            // 0x1be0c0: 0x8e0302ac  lw          $v1, 0x2AC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 684)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BE0D8u;
            goto label_1be0d8;
        }
    }
    ctx->pc = 0x1BE0C4u;
    // 0x1be0c4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1be0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1be0c8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1be0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1be0cc: 0x71100b  movn        $v0, $v1, $s1
    ctx->pc = 0x1be0ccu;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
    // 0x1be0d0: 0xae0202ac  sw          $v0, 0x2AC($s0)
    ctx->pc = 0x1be0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 2));
    // 0x1be0d4: 0x8e0302ac  lw          $v1, 0x2AC($s0)
    ctx->pc = 0x1be0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 684)));
label_1be0d8:
    // 0x1be0d8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1be0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1be0dc: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1BE0DCu;
    {
        const bool branch_taken_0x1be0dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1be0dc) {
            ctx->pc = 0x1BE0E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BE0DCu;
            // 0x1be0e0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BE114u;
            goto label_1be114;
        }
    }
    ctx->pc = 0x1BE0E4u;
    // 0x1be0e4: 0xc05f90a  jal         func_17E428
    ctx->pc = 0x1BE0E4u;
    SET_GPR_U32(ctx, 31, 0x1BE0ECu);
    ctx->pc = 0x1BE0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE0E4u;
    // 0x1be0e8: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E428u, 0x1BE0E4u, 0x1BE0ECu)) {
        return;
    }
    ctx->pc = 0x1BE0ECu;
label_1be0ec:
    // 0x1be0ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1be0ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1be0f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1be0f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1be0f4: 0x0  nop
    ctx->pc = 0x1be0f4u;
    // NOP
    // 0x1be0f8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1be0f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1be0fc: 0x0  nop
    ctx->pc = 0x1be0fcu;
    // NOP
    // 0x1be100: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1BE100u;
    {
        const bool branch_taken_0x1be100 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BE104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE100u;
        // 0x1be104: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be100) {
            ctx->pc = 0x1BE110u;
            goto label_1be110;
        }
    }
    ctx->pc = 0x1BE108u;
    // 0x1be108: 0x11100b  movn        $v0, $zero, $s1
    ctx->pc = 0x1be108u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0));
    // 0x1be10c: 0xae0202ac  sw          $v0, 0x2AC($s0)
    ctx->pc = 0x1be10cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 2));
label_1be110:
    // 0x1be110: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1be110u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1be114:
    // 0x1be114: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1be114u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be118: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be11c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE11Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE11Cu;
        // 0x1be120: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE11Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE124u;
    // 0x1be124: 0x0  nop
    ctx->pc = 0x1be124u;
    // NOP
    ctx->pc = 0x1be128u;
}
