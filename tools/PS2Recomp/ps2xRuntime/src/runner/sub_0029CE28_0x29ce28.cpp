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

// Function: sub_0029CE28
// Address: 0x29ce28 - 0x29cf40
void sub_0029CE28_0x29ce28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029CE28_0x29ce28");
#endif

    switch (ctx->pc) {
        case 0x29ce60u: goto label_29ce60;
        case 0x29cea8u: goto label_29cea8;
        case 0x29ced8u: goto label_29ced8;
        case 0x29cf0cu: goto label_29cf0c;
        default: break;
    }

    ctx->pc = 0x29ce28u;

    // 0x29ce28: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x29ce28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x29ce2c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x29ce2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x29ce30: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x29ce30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x29ce34: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x29ce34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ce38: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x29ce38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x29ce3c: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x29ce3cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29ce40: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x29ce40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x29ce44: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x29ce44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ce48: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29ce48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29ce4c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x29ce4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ce50: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x29ce50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x29ce54: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29ce54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ce58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29ce58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29ce5c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x29ce5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_29ce60:
    // 0x29ce60: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x29ce60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x29ce64: 0x453023  subu        $a2, $v0, $a1
    ctx->pc = 0x29ce64u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x29ce68: 0x18c00024  blez        $a2, . + 4 + (0x24 << 2)
    ctx->pc = 0x29CE68u;
    {
        const bool branch_taken_0x29ce68 = (GPR_S64(ctx, 6) <= 0);
        if (branch_taken_0x29ce68) {
            ctx->pc = 0x29CEFCu;
            goto label_29cefc;
        }
    }
    ctx->pc = 0x29CE70u;
    // 0x29ce70: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x29ce70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29ce74: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x29ce74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x29ce78: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x29ce78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x29ce7c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x29CE7Cu;
    {
        const bool branch_taken_0x29ce7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CE7Cu;
        // 0x29ce80: 0x13103c  dsll32      $v0, $s3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ce7c) {
            ctx->pc = 0x29CE88u;
            goto label_29ce88;
        }
    }
    ctx->pc = 0x29CE84u;
    // 0x29ce84: 0x2303e  dsrl32      $a2, $v0, 0
    ctx->pc = 0x29ce84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> (32 + 0));
label_29ce88:
    // 0x29ce88: 0x28c20015  slti        $v0, $a2, 0x15
    ctx->pc = 0x29ce88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x29ce8c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x29CE8Cu;
    {
        const bool branch_taken_0x29ce8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29CE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CE8Cu;
        // 0x29ce90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ce8c) {
            ctx->pc = 0x29CEB8u;
            goto label_29ceb8;
        }
    }
    ctx->pc = 0x29CE94u;
    // 0x29ce94: 0x6803c  dsll32      $s0, $a2, 0
    ctx->pc = 0x29ce94u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29ce98: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x29ce98u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x29ce9c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29ce9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cea0: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x29CEA0u;
    SET_GPR_U32(ctx, 31, 0x29CEA8u);
    ctx->pc = 0x29CEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CEA0u;
    // 0x29cea4: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x29CEA0u, 0x29CEA8u)) {
        return;
    }
    ctx->pc = 0x29CEA8u;
label_29cea8:
    // 0x29cea8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x29cea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x29ceac: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x29ceacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x29ceb0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x29CEB0u;
    {
        const bool branch_taken_0x29ceb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CEB0u;
        // 0x29ceb4: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ceb0) {
            ctx->pc = 0x29CEF8u;
            goto label_29cef8;
        }
    }
    ctx->pc = 0x29CEB8u;
label_29ceb8:
    // 0x29ceb8: 0x18c0000f  blez        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x29CEB8u;
    {
        const bool branch_taken_0x29ceb8 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x29CEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CEB8u;
        // 0x29cebc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ceb8) {
            ctx->pc = 0x29CEF8u;
            goto label_29cef8;
        }
    }
    ctx->pc = 0x29CEC0u;
    // 0x29cec0: 0x6803c  dsll32      $s0, $a2, 0
    ctx->pc = 0x29cec0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29cec4: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x29cec4u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x29cec8: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x29cec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x29cecc: 0x462000a  bltzl       $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x29CECCu;
    {
        const bool branch_taken_0x29cecc = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x29cecc) {
            ctx->pc = 0x29CED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29CECCu;
            // 0x29ced0: 0xae450004  sw          $a1, 0x4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29CEF8u;
            goto label_29cef8;
        }
    }
    ctx->pc = 0x29CED4u;
    // 0x29ced4: 0x0  nop
    ctx->pc = 0x29ced4u;
    // NOP
label_29ced8:
    // 0x29ced8: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x29ced8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x29cedc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x29cedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x29cee0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x29cee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x29cee4: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x29cee4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x29cee8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x29cee8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x29ceec: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x29CEECu;
    {
        const bool branch_taken_0x29ceec = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x29ceec) {
            ctx->pc = 0x29CED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29ced8;
        }
    }
    ctx->pc = 0x29CEF4u;
    // 0x29cef4: 0xae450004  sw          $a1, 0x4($s2)
    ctx->pc = 0x29cef4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 5));
label_29cef8:
    // 0x29cef8: 0x2709823  subu        $s3, $s3, $s0
    ctx->pc = 0x29cef8u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_29cefc:
    // 0x29cefc: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x29CEFCu;
    {
        const bool branch_taken_0x29cefc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CEFCu;
        // 0x29cf00: 0x2931023  subu        $v0, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cefc) {
            ctx->pc = 0x29CF18u;
            goto label_29cf18;
        }
    }
    ctx->pc = 0x29CF04u;
    // 0x29cf04: 0xc0a7274  jal         func_29C9D0
    ctx->pc = 0x29CF04u;
    SET_GPR_U32(ctx, 31, 0x29CF0Cu);
    ctx->pc = 0x29CF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CF04u;
    // 0x29cf08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C9D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29C9D0u, 0x29CF04u, 0x29CF0Cu)) {
        return;
    }
    ctx->pc = 0x29CF0Cu;
label_29cf0c:
    // 0x29cf0c: 0x5455ffd4  bnel        $v0, $s5, . + 4 + (-0x2C << 2)
    ctx->pc = 0x29CF0Cu;
    {
        const bool branch_taken_0x29cf0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x29cf0c) {
            ctx->pc = 0x29CF10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29CF0Cu;
            // 0x29cf10: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29CE60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29ce60;
        }
    }
    ctx->pc = 0x29CF14u;
    // 0x29cf14: 0x2931023  subu        $v0, $s4, $s3
    ctx->pc = 0x29cf14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
label_29cf18:
    // 0x29cf18: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x29cf18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29cf1c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x29cf1cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29cf20: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x29cf20u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29cf24: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x29cf24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29cf28: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x29cf28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29cf2c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29cf2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29cf30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29cf30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29cf34: 0x3e00008  jr          $ra
    ctx->pc = 0x29CF34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29CF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CF34u;
        // 0x29cf38: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CF34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29CF3Cu;
    // 0x29cf3c: 0x0  nop
    ctx->pc = 0x29cf3cu;
    // NOP
    ctx->pc = 0x29cf40u;
}
