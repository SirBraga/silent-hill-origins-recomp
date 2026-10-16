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

// Function: sub_0021B670
// Address: 0x21b670 - 0x21b760
void sub_0021B670_0x21b670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021B670_0x21b670");
#endif

    switch (ctx->pc) {
        case 0x21b6acu: goto label_21b6ac;
        case 0x21b6bcu: goto label_21b6bc;
        case 0x21b6ccu: goto label_21b6cc;
        case 0x21b6dcu: goto label_21b6dc;
        case 0x21b6ecu: goto label_21b6ec;
        case 0x21b700u: goto label_21b700;
        case 0x21b718u: goto label_21b718;
        case 0x21b730u: goto label_21b730;
        default: break;
    }

    ctx->pc = 0x21b670u;

    // 0x21b670: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x21b670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x21b674: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x21b674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x21b678: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x21b678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x21b67c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21b67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b680: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x21b680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x21b684: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x21b684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b688: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x21b688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x21b68c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x21b68cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b690: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21b690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21b694: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x21b694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x21b698: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x21b698u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b69c: 0x8cd10000  lw          $s1, 0x0($a2)
    ctx->pc = 0x21b69cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x21b6a0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x21b6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x21b6a4: 0xc092782  jal         func_249E08
    ctx->pc = 0x21B6A4u;
    SET_GPR_U32(ctx, 31, 0x21B6ACu);
    ctx->pc = 0x21B6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B6A4u;
    // 0x21b6a8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x21B6A4u, 0x21B6ACu)) {
        return;
    }
    ctx->pc = 0x21B6ACu;
label_21b6ac:
    // 0x21b6ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21b6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b6b0: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x21b6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x21b6b4: 0xc09275c  jal         func_249D70
    ctx->pc = 0x21B6B4u;
    SET_GPR_U32(ctx, 31, 0x21B6BCu);
    ctx->pc = 0x21B6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B6B4u;
    // 0x21b6b8: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249D70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249D70u, 0x21B6B4u, 0x21B6BCu)) {
        return;
    }
    ctx->pc = 0x21B6BCu;
label_21b6bc:
    // 0x21b6bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21b6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b6c0: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x21b6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x21b6c4: 0xc09275c  jal         func_249D70
    ctx->pc = 0x21B6C4u;
    SET_GPR_U32(ctx, 31, 0x21B6CCu);
    ctx->pc = 0x21B6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B6C4u;
    // 0x21b6c8: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249D70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249D70u, 0x21B6C4u, 0x21B6CCu)) {
        return;
    }
    ctx->pc = 0x21B6CCu;
label_21b6cc:
    // 0x21b6cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21b6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b6d0: 0x2625001c  addiu       $a1, $s1, 0x1C
    ctx->pc = 0x21b6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x21b6d4: 0xc09275c  jal         func_249D70
    ctx->pc = 0x21B6D4u;
    SET_GPR_U32(ctx, 31, 0x21B6DCu);
    ctx->pc = 0x21B6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B6D4u;
    // 0x21b6d8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249D70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249D70u, 0x21B6D4u, 0x21B6DCu)) {
        return;
    }
    ctx->pc = 0x21B6DCu;
label_21b6dc:
    // 0x21b6dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21b6dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b6e0: 0x2625002c  addiu       $a1, $s1, 0x2C
    ctx->pc = 0x21b6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
    // 0x21b6e4: 0xc092782  jal         func_249E08
    ctx->pc = 0x21B6E4u;
    SET_GPR_U32(ctx, 31, 0x21B6ECu);
    ctx->pc = 0x21B6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B6E4u;
    // 0x21b6e8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x21B6E4u, 0x21B6ECu)) {
        return;
    }
    ctx->pc = 0x21B6ECu;
label_21b6ec:
    // 0x21b6ec: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x21b6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x21b6f0: 0x18600014  blez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x21B6F0u;
    {
        const bool branch_taken_0x21b6f0 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x21B6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B6F0u;
        // 0x21b6f4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b6f0) {
            ctx->pc = 0x21B744u;
            goto label_21b744;
        }
    }
    ctx->pc = 0x21B6F8u;
    // 0x21b6f8: 0x8e250030  lw          $a1, 0x30($s1)
    ctx->pc = 0x21b6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x21b6fc: 0x0  nop
    ctx->pc = 0x21b6fcu;
    // NOP
label_21b700:
    // 0x21b700: 0x1280c0  sll         $s0, $s2, 3
    ctx->pc = 0x21b700u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x21b704: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21b704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b708: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21b708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21b70c: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x21b70cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x21b710: 0xc092782  jal         func_249E08
    ctx->pc = 0x21B710u;
    SET_GPR_U32(ctx, 31, 0x21B718u);
    ctx->pc = 0x21B714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B710u;
    // 0x21b714: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x21B710u, 0x21B718u)) {
        return;
    }
    ctx->pc = 0x21B718u;
label_21b718:
    // 0x21b718: 0x8e250030  lw          $a1, 0x30($s1)
    ctx->pc = 0x21b718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x21b71c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21b71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b720: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21b720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21b724: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x21b724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x21b728: 0xc09275c  jal         func_249D70
    ctx->pc = 0x21B728u;
    SET_GPR_U32(ctx, 31, 0x21B730u);
    ctx->pc = 0x21B72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B728u;
    // 0x21b72c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249D70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249D70u, 0x21B728u, 0x21B730u)) {
        return;
    }
    ctx->pc = 0x21B730u;
label_21b730:
    // 0x21b730: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x21b730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x21b734: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x21b734u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x21b738: 0x5460fff1  bnel        $v1, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x21B738u;
    {
        const bool branch_taken_0x21b738 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b738) {
            ctx->pc = 0x21B73Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B738u;
            // 0x21b73c: 0x8e250030  lw          $a1, 0x30($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b700;
        }
    }
    ctx->pc = 0x21B740u;
    // 0x21b740: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x21b740u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_21b744:
    // 0x21b744: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x21b744u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21b748: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x21b748u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21b74c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x21b74cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21b750: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x21b750u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21b754: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21b754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21b758: 0x3e00008  jr          $ra
    ctx->pc = 0x21B758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B758u;
        // 0x21b75c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21B760u;
}
