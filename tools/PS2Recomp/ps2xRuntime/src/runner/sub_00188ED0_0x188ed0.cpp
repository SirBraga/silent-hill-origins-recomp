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

// Function: sub_00188ED0
// Address: 0x188ed0 - 0x188fd0
void sub_00188ED0_0x188ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00188ED0_0x188ed0");
#endif

    switch (ctx->pc) {
        case 0x188ee8u: goto label_188ee8;
        case 0x188ef8u: goto label_188ef8;
        case 0x188f30u: goto label_188f30;
        case 0x188f60u: goto label_188f60;
        case 0x188f8cu: goto label_188f8c;
        case 0x188fb8u: goto label_188fb8;
        default: break;
    }

    ctx->pc = 0x188ed0u;

    // 0x188ed0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x188ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x188ed4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x188ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x188ed8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x188ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x188edc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x188edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x188ee0: 0xc062540  jal         func_189500
    ctx->pc = 0x188EE0u;
    SET_GPR_U32(ctx, 31, 0x188EE8u);
    ctx->pc = 0x188EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188EE0u;
    // 0x188ee4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189500u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x189500u, 0x188EE0u, 0x188EE8u)) {
        return;
    }
    ctx->pc = 0x188EE8u;
label_188ee8:
    // 0x188ee8: 0x50400034  beql        $v0, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x188EE8u;
    {
        const bool branch_taken_0x188ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188ee8) {
            ctx->pc = 0x188EECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188EE8u;
            // 0x188eec: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188FBCu;
            goto label_188fbc;
        }
    }
    ctx->pc = 0x188EF0u;
    // 0x188ef0: 0xc062528  jal         func_1894A0
    ctx->pc = 0x188EF0u;
    SET_GPR_U32(ctx, 31, 0x188EF8u);
    ctx->pc = 0x188EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188EF0u;
    // 0x188ef4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1894A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1894A0u, 0x188EF0u, 0x188EF8u)) {
        return;
    }
    ctx->pc = 0x188EF8u;
label_188ef8:
    // 0x188ef8: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x188EF8u;
    {
        const bool branch_taken_0x188ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188EF8u;
        // 0x188efc: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188ef8) {
            ctx->pc = 0x188FB8u;
            goto label_188fb8;
        }
    }
    ctx->pc = 0x188F00u;
    // 0x188f00: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x188f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x188f04: 0x24458b50  addiu       $a1, $v0, -0x74B0
    ctx->pc = 0x188f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937424));
    // 0x188f08: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x188F08u;
    {
        const bool branch_taken_0x188f08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x188F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188F08u;
        // 0x188f0c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188f08) {
            ctx->pc = 0x188F14u;
            goto label_188f14;
        }
    }
    ctx->pc = 0x188F10u;
    // 0x188f10: 0x8c670014  lw          $a3, 0x14($v1)
    ctx->pc = 0x188f10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_188f14:
    // 0x188f14: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x188f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x188f18: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x188F18u;
    {
        const bool branch_taken_0x188f18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x188F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188F18u;
        // 0x188f1c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188f18) {
            ctx->pc = 0x188F24u;
            goto label_188f24;
        }
    }
    ctx->pc = 0x188F20u;
    // 0x188f20: 0x8c680014  lw          $t0, 0x14($v1)
    ctx->pc = 0x188f20u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_188f24:
    // 0x188f24: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x188f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x188f28: 0xc05a47c  jal         func_1691F0
    ctx->pc = 0x188F28u;
    SET_GPR_U32(ctx, 31, 0x188F30u);
    ctx->pc = 0x188F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188F28u;
    // 0x188f2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1691F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1691F0u, 0x188F28u, 0x188F30u)) {
        return;
    }
    ctx->pc = 0x188F30u;
label_188f30:
    // 0x188f30: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x188f30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x188f34: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x188f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x188f38: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x188f38u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x188f3c: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x188F3Cu;
    {
        const bool branch_taken_0x188f3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x188F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188F3Cu;
        // 0x188f40: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188f3c) {
            ctx->pc = 0x188F60u;
            goto label_188f60;
        }
    }
    ctx->pc = 0x188F44u;
    // 0x188f44: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x188f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x188f48: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x188F48u;
    {
        const bool branch_taken_0x188f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188F48u;
        // 0x188f4c: 0x8e221a70  lw          $v0, 0x1A70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188f48) {
            ctx->pc = 0x188F64u;
            goto label_188f64;
        }
    }
    ctx->pc = 0x188F50u;
    // 0x188f50: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x188f50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x188f54: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x188f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188f58: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x188F58u;
    SET_GPR_U32(ctx, 31, 0x188F60u);
    ctx->pc = 0x188F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188F58u;
    // 0x188f5c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x188F58u, 0x188F60u)) {
        return;
    }
    ctx->pc = 0x188F60u;
label_188f60:
    // 0x188f60: 0x8e221a70  lw          $v0, 0x1A70($s1)
    ctx->pc = 0x188f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6768)));
label_188f64:
    // 0x188f64: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x188f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x188f68: 0x50820009  beql        $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x188F68u;
    {
        const bool branch_taken_0x188f68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x188f68) {
            ctx->pc = 0x188F6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188F68u;
            // 0x188f6c: 0x8e05009c  lw          $a1, 0x9C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188F90u;
            goto label_188f90;
        }
    }
    ctx->pc = 0x188F70u;
    // 0x188f70: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x188f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x188f74: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x188F74u;
    {
        const bool branch_taken_0x188f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188f74) {
            ctx->pc = 0x188F78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188F74u;
            // 0x188f78: 0x8e05009c  lw          $a1, 0x9C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188F90u;
            goto label_188f90;
        }
    }
    ctx->pc = 0x188F7Cu;
    // 0x188f7c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x188f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x188f80: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x188f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188f84: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x188F84u;
    SET_GPR_U32(ctx, 31, 0x188F8Cu);
    ctx->pc = 0x188F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188F84u;
    // 0x188f88: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x188F84u, 0x188F8Cu)) {
        return;
    }
    ctx->pc = 0x188F8Cu;
label_188f8c:
    // 0x188f8c: 0x8e05009c  lw          $a1, 0x9C($s0)
    ctx->pc = 0x188f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_188f90:
    // 0x188f90: 0x50a0000a  beql        $a1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x188F90u;
    {
        const bool branch_taken_0x188f90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x188f90) {
            ctx->pc = 0x188F94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188F90u;
            // 0x188f94: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188FBCu;
            goto label_188fbc;
        }
    }
    ctx->pc = 0x188F98u;
    // 0x188f98: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x188f98u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x188f9c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x188F9Cu;
    {
        const bool branch_taken_0x188f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188f9c) {
            ctx->pc = 0x188FA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188F9Cu;
            // 0x188fa0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188FBCu;
            goto label_188fbc;
        }
    }
    ctx->pc = 0x188FA4u;
    // 0x188fa4: 0x8e0200a4  lw          $v0, 0xA4($s0)
    ctx->pc = 0x188fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x188fa8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x188FA8u;
    {
        const bool branch_taken_0x188fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188FA8u;
        // 0x188fac: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188fa8) {
            ctx->pc = 0x188FB8u;
            goto label_188fb8;
        }
    }
    ctx->pc = 0x188FB0u;
    // 0x188fb0: 0xc0641d6  jal         func_190758
    ctx->pc = 0x188FB0u;
    SET_GPR_U32(ctx, 31, 0x188FB8u);
    ctx->pc = 0x188FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188FB0u;
    // 0x188fb4: 0x8c448b2c  lw          $a0, -0x74D4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190758u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x190758u, 0x188FB0u, 0x188FB8u)) {
        return;
    }
    ctx->pc = 0x188FB8u;
label_188fb8:
    // 0x188fb8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x188fb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_188fbc:
    // 0x188fbc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x188fbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x188fc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x188fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x188FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188FC4u;
        // 0x188fc8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188FCCu;
    // 0x188fcc: 0x0  nop
    ctx->pc = 0x188fccu;
    // NOP
    ctx->pc = 0x188fd0u;
}
