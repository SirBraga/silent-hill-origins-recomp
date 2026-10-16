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

// Function: sub_00227B58
// Address: 0x227b58 - 0x227c30
void sub_00227B58_0x227b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227B58_0x227b58");
#endif

    switch (ctx->pc) {
        case 0x227bb0u: goto label_227bb0;
        case 0x227bd8u: goto label_227bd8;
        case 0x227becu: goto label_227bec;
        default: break;
    }

    ctx->pc = 0x227b58u;

    // 0x227b58: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x227b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x227b5c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x227b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x227b60: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x227b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x227b64: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x227b64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227b68: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x227b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x227b6c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x227b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x227b70: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x227b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x227b74: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x227b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x227b78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x227b7c: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x227b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x227b80: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x227B80u;
    {
        const bool branch_taken_0x227b80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x227B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227B80u;
        // 0x227b84: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227b80) {
            ctx->pc = 0x227BB0u;
            goto label_227bb0;
        }
    }
    ctx->pc = 0x227B88u;
    // 0x227b88: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x227b88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x227b8c: 0x50a00009  beql        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x227B8Cu;
    {
        const bool branch_taken_0x227b8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x227b8c) {
            ctx->pc = 0x227B90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227B8Cu;
            // 0x227b90: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227BB4u;
            goto label_227bb4;
        }
    }
    ctx->pc = 0x227B94u;
    // 0x227b94: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x227b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x227b98: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x227b98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x227b9c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x227B9Cu;
    {
        const bool branch_taken_0x227b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x227b9c) {
            ctx->pc = 0x227BA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227B9Cu;
            // 0x227ba0: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227BB4u;
            goto label_227bb4;
        }
    }
    ctx->pc = 0x227BA4u;
    // 0x227ba4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x227ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x227ba8: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x227BA8u;
    SET_GPR_U32(ctx, 31, 0x227BB0u);
    ctx->pc = 0x227BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227BA8u;
    // 0x227bac: 0x663004  sllv        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x227BA8u, 0x227BB0u)) {
        return;
    }
    ctx->pc = 0x227BB0u;
label_227bb0:
    // 0x227bb0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x227bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_227bb4:
    // 0x227bb4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x227bb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227bb8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x227bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x227bbc: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x227bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x227bc0: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x227bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x227bc4: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x227bc4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x227bc8: 0x8e910014  lw          $s1, 0x14($s4)
    ctx->pc = 0x227bc8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x227bcc: 0x43a818  mult        $s5, $v0, $v1
    ctx->pc = 0x227bccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
    // 0x227bd0: 0x1880000d  blez        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x227BD0u;
    {
        const bool branch_taken_0x227bd0 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x227BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227BD0u;
        // 0x227bd4: 0x8e500014  lw          $s0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227bd0) {
            ctx->pc = 0x227C08u;
            goto label_227c08;
        }
    }
    ctx->pc = 0x227BD8u;
label_227bd8:
    // 0x227bd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227bdc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x227bdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227be0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x227be0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227be4: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x227BE4u;
    SET_GPR_U32(ctx, 31, 0x227BECu);
    ctx->pc = 0x227BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227BE4u;
    // 0x227be8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x227BE4u, 0x227BECu)) {
        return;
    }
    ctx->pc = 0x227BECu;
label_227bec:
    // 0x227bec: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x227becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x227bf0: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x227bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x227bf4: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x227bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x227bf8: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x227bf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x227bfc: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x227bfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x227c00: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x227C00u;
    {
        const bool branch_taken_0x227c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x227C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227C00u;
        // 0x227c04: 0x2248821  addu        $s1, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227c00) {
            ctx->pc = 0x227BD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_227bd8;
        }
    }
    ctx->pc = 0x227C08u;
label_227c08:
    // 0x227c08: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x227c08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x227c0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x227c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227c10: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x227c10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x227c14: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x227c14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x227c18: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x227c18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x227c1c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x227c1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x227c20: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x227c20u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227c24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227c24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227c28: 0x3e00008  jr          $ra
    ctx->pc = 0x227C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227C28u;
        // 0x227c2c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227C30u;
}
