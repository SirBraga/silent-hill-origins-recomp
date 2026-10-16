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

// Function: sub_00197F00
// Address: 0x197f00 - 0x198008
void sub_00197F00_0x197f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197F00_0x197f00");
#endif

    switch (ctx->pc) {
        case 0x197f30u: goto label_197f30;
        case 0x197f48u: goto label_197f48;
        case 0x197f50u: goto label_197f50;
        case 0x197f64u: goto label_197f64;
        case 0x197fa0u: goto label_197fa0;
        case 0x197fb4u: goto label_197fb4;
        case 0x197fccu: goto label_197fcc;
        default: break;
    }

    ctx->pc = 0x197f00u;

    // 0x197f00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x197f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x197f04: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x197f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x197f08: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x197f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x197f0c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x197f0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197f10: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x197f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x197f14: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x197f14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197f18: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x197f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x197f1c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x197f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x197f20: 0x1220002f  beqz        $s1, . + 4 + (0x2F << 2)
    ctx->pc = 0x197F20u;
    {
        const bool branch_taken_0x197f20 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x197F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197F20u;
        // 0x197f24: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197f20) {
            ctx->pc = 0x197FE0u;
            goto label_197fe0;
        }
    }
    ctx->pc = 0x197F28u;
    // 0x197f28: 0xc0c5d1c  jal         func_317470
    ctx->pc = 0x197F28u;
    SET_GPR_U32(ctx, 31, 0x197F30u);
    ctx->pc = 0x197F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197F28u;
    // 0x197f2c: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317470u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317470u, 0x197F28u, 0x197F30u)) {
        return;
    }
    ctx->pc = 0x197F30u;
label_197f30:
    // 0x197f30: 0x2413005f  addiu       $s3, $zero, 0x5F
    ctx->pc = 0x197f30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x197f34: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x197f34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x197f38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x197f38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197f3c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x197F3Cu;
    {
        const bool branch_taken_0x197f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197F3Cu;
        // 0x197f40: 0x247211d1  addiu       $s2, $v1, 0x11D1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4561));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197f3c) {
            ctx->pc = 0x197F54u;
            goto label_197f54;
        }
    }
    ctx->pc = 0x197F44u;
    // 0x197f44: 0x0  nop
    ctx->pc = 0x197f44u;
    // NOP
label_197f48:
    // 0x197f48: 0xc0c5d1c  jal         func_317470
    ctx->pc = 0x197F48u;
    SET_GPR_U32(ctx, 31, 0x197F50u);
    ctx->pc = 0x197F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197F48u;
    // 0x197f4c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317470u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317470u, 0x197F48u, 0x197F50u)) {
        return;
    }
    ctx->pc = 0x197F50u;
label_197f50:
    // 0x197f50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x197f50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_197f54:
    // 0x197f54: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
    ctx->pc = 0x197F54u;
    {
        const bool branch_taken_0x197f54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x197F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197F54u;
        // 0x197f58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197f54) {
            ctx->pc = 0x197FE0u;
            goto label_197fe0;
        }
    }
    ctx->pc = 0x197F5Cu;
    // 0x197f5c: 0xc0c4ab8  jal         func_312AE0
    ctx->pc = 0x197F5Cu;
    SET_GPR_U32(ctx, 31, 0x197F64u);
    ctx->pc = 0x197F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197F5Cu;
    // 0x197f60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x197F5Cu, 0x197F64u)) {
        return;
    }
    ctx->pc = 0x197F64u;
label_197f64:
    // 0x197f64: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x197f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x197f68: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x197F68u;
    {
        const bool branch_taken_0x197f68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x197f68) {
            ctx->pc = 0x197F90u;
            goto label_197f90;
        }
    }
    ctx->pc = 0x197F70u;
    // 0x197f70: 0x80850000  lb          $a1, 0x0($a0)
    ctx->pc = 0x197f70u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x197f74: 0xb21821  addu        $v1, $a1, $s2
    ctx->pc = 0x197f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x197f78: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x197f78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x197f7c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x197f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x197f80: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x197F80u;
    {
        const bool branch_taken_0x197f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x197f80) {
            ctx->pc = 0x197F48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197f48;
        }
    }
    ctx->pc = 0x197F88u;
    // 0x197f88: 0x10b3ffef  beq         $a1, $s3, . + 4 + (-0x11 << 2)
    ctx->pc = 0x197F88u;
    {
        const bool branch_taken_0x197f88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 19));
        if (branch_taken_0x197f88) {
            ctx->pc = 0x197F48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197f48;
        }
    }
    ctx->pc = 0x197F90u;
label_197f90:
    // 0x197f90: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x197F90u;
    {
        const bool branch_taken_0x197f90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x197F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197F90u;
        // 0x197f94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197f90) {
            ctx->pc = 0x197FE0u;
            goto label_197fe0;
        }
    }
    ctx->pc = 0x197F98u;
    // 0x197f98: 0xc0c49b7  jal         func_3126DC
    ctx->pc = 0x197F98u;
    SET_GPR_U32(ctx, 31, 0x197FA0u);
    ctx->pc = 0x197F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197F98u;
    // 0x197f9c: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3126DCu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3126DCu, 0x197F98u, 0x197FA0u)) {
        return;
    }
    ctx->pc = 0x197FA0u;
label_197fa0:
    // 0x197fa0: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x197fa0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x197fa4: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x197FA4u;
    {
        const bool branch_taken_0x197fa4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x197FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197FA4u;
        // 0x197fa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197fa4) {
            ctx->pc = 0x197FE0u;
            goto label_197fe0;
        }
    }
    ctx->pc = 0x197FACu;
    // 0x197fac: 0xc0c49b7  jal         func_3126DC
    ctx->pc = 0x197FACu;
    SET_GPR_U32(ctx, 31, 0x197FB4u);
    ctx->pc = 0x197FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197FACu;
    // 0x197fb0: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3126DCu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3126DCu, 0x197FACu, 0x197FB4u)) {
        return;
    }
    ctx->pc = 0x197FB4u;
label_197fb4:
    // 0x197fb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x197fb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197fb8: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x197FB8u;
    {
        const bool branch_taken_0x197fb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x197fb8) {
            ctx->pc = 0x197FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x197FB8u;
            // 0x197fbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x197FE4u;
            goto label_197fe4;
        }
    }
    ctx->pc = 0x197FC0u;
    // 0x197fc0: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x197fc0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x197fc4: 0xc0c53de  jal         func_314F78
    ctx->pc = 0x197FC4u;
    SET_GPR_U32(ctx, 31, 0x197FCCu);
    ctx->pc = 0x197FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197FC4u;
    // 0x197fc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314F78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314F78u, 0x197FC4u, 0x197FCCu)) {
        return;
    }
    ctx->pc = 0x197FCCu;
label_197fcc:
    // 0x197fcc: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x197fccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x197fd0: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x197fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x197fd4: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x197fd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x197fd8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x197FD8u;
    {
        const bool branch_taken_0x197fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197FD8u;
        // 0x197fdc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197fd8) {
            ctx->pc = 0x197FE4u;
            goto label_197fe4;
        }
    }
    ctx->pc = 0x197FE0u;
label_197fe0:
    // 0x197fe0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x197fe0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197fe4:
    // 0x197fe4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x197fe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197fe8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x197fe8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x197fec: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x197fecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x197ff0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x197ff0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x197ff4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x197ff4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197ff8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x197ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197ffc: 0x3e00008  jr          $ra
    ctx->pc = 0x197FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197FFCu;
        // 0x198000: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197FFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198004u;
    // 0x198004: 0x0  nop
    ctx->pc = 0x198004u;
    // NOP
    ctx->pc = 0x198008u;
}
