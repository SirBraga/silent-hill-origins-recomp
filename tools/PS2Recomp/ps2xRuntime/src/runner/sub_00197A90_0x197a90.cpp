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

// Function: sub_00197A90
// Address: 0x197a90 - 0x197ba0
void sub_00197A90_0x197a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197A90_0x197a90");
#endif

    switch (ctx->pc) {
        case 0x197ac0u: goto label_197ac0;
        case 0x197ad8u: goto label_197ad8;
        case 0x197ae0u: goto label_197ae0;
        case 0x197af4u: goto label_197af4;
        case 0x197b30u: goto label_197b30;
        case 0x197b44u: goto label_197b44;
        case 0x197b60u: goto label_197b60;
        default: break;
    }

    ctx->pc = 0x197a90u;

    // 0x197a90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x197a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x197a94: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x197a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x197a98: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x197a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x197a9c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x197a9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197aa0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x197aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x197aa4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x197aa4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197aa8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x197aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x197aac: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x197aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x197ab0: 0x12200031  beqz        $s1, . + 4 + (0x31 << 2)
    ctx->pc = 0x197AB0u;
    {
        const bool branch_taken_0x197ab0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x197AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197AB0u;
        // 0x197ab4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197ab0) {
            ctx->pc = 0x197B78u;
            goto label_197b78;
        }
    }
    ctx->pc = 0x197AB8u;
    // 0x197ab8: 0xc0c5d1c  jal         func_317470
    ctx->pc = 0x197AB8u;
    SET_GPR_U32(ctx, 31, 0x197AC0u);
    ctx->pc = 0x197ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197AB8u;
    // 0x197abc: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317470u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317470u, 0x197AB8u, 0x197AC0u)) {
        return;
    }
    ctx->pc = 0x197AC0u;
label_197ac0:
    // 0x197ac0: 0x2413005f  addiu       $s3, $zero, 0x5F
    ctx->pc = 0x197ac0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x197ac4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x197ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x197ac8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x197ac8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197acc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x197ACCu;
    {
        const bool branch_taken_0x197acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197ACCu;
        // 0x197ad0: 0x247211d1  addiu       $s2, $v1, 0x11D1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4561));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197acc) {
            ctx->pc = 0x197AE4u;
            goto label_197ae4;
        }
    }
    ctx->pc = 0x197AD4u;
    // 0x197ad4: 0x0  nop
    ctx->pc = 0x197ad4u;
    // NOP
label_197ad8:
    // 0x197ad8: 0xc0c5d1c  jal         func_317470
    ctx->pc = 0x197AD8u;
    SET_GPR_U32(ctx, 31, 0x197AE0u);
    ctx->pc = 0x197ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197AD8u;
    // 0x197adc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317470u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317470u, 0x197AD8u, 0x197AE0u)) {
        return;
    }
    ctx->pc = 0x197AE0u;
label_197ae0:
    // 0x197ae0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x197ae0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_197ae4:
    // 0x197ae4: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x197AE4u;
    {
        const bool branch_taken_0x197ae4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x197AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197AE4u;
        // 0x197ae8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197ae4) {
            ctx->pc = 0x197B78u;
            goto label_197b78;
        }
    }
    ctx->pc = 0x197AECu;
    // 0x197aec: 0xc0c4ab8  jal         func_312AE0
    ctx->pc = 0x197AECu;
    SET_GPR_U32(ctx, 31, 0x197AF4u);
    ctx->pc = 0x197AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197AECu;
    // 0x197af0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x197AECu, 0x197AF4u)) {
        return;
    }
    ctx->pc = 0x197AF4u;
label_197af4:
    // 0x197af4: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x197af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x197af8: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x197AF8u;
    {
        const bool branch_taken_0x197af8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x197af8) {
            ctx->pc = 0x197B20u;
            goto label_197b20;
        }
    }
    ctx->pc = 0x197B00u;
    // 0x197b00: 0x80850000  lb          $a1, 0x0($a0)
    ctx->pc = 0x197b00u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x197b04: 0xb21821  addu        $v1, $a1, $s2
    ctx->pc = 0x197b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x197b08: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x197b08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x197b0c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x197b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x197b10: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x197B10u;
    {
        const bool branch_taken_0x197b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x197b10) {
            ctx->pc = 0x197AD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197ad8;
        }
    }
    ctx->pc = 0x197B18u;
    // 0x197b18: 0x10b3ffef  beq         $a1, $s3, . + 4 + (-0x11 << 2)
    ctx->pc = 0x197B18u;
    {
        const bool branch_taken_0x197b18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 19));
        if (branch_taken_0x197b18) {
            ctx->pc = 0x197AD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197ad8;
        }
    }
    ctx->pc = 0x197B20u;
label_197b20:
    // 0x197b20: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x197B20u;
    {
        const bool branch_taken_0x197b20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x197B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B20u;
        // 0x197b24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197b20) {
            ctx->pc = 0x197B78u;
            goto label_197b78;
        }
    }
    ctx->pc = 0x197B28u;
    // 0x197b28: 0xc0c49b7  jal         func_3126DC
    ctx->pc = 0x197B28u;
    SET_GPR_U32(ctx, 31, 0x197B30u);
    ctx->pc = 0x197B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197B28u;
    // 0x197b2c: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3126DCu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3126DCu, 0x197B28u, 0x197B30u)) {
        return;
    }
    ctx->pc = 0x197B30u;
label_197b30:
    // 0x197b30: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x197b30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x197b34: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x197B34u;
    {
        const bool branch_taken_0x197b34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x197B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B34u;
        // 0x197b38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197b34) {
            ctx->pc = 0x197B78u;
            goto label_197b78;
        }
    }
    ctx->pc = 0x197B3Cu;
    // 0x197b3c: 0xc0c49b7  jal         func_3126DC
    ctx->pc = 0x197B3Cu;
    SET_GPR_U32(ctx, 31, 0x197B44u);
    ctx->pc = 0x197B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197B3Cu;
    // 0x197b40: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3126DCu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3126DCu, 0x197B3Cu, 0x197B44u)) {
        return;
    }
    ctx->pc = 0x197B44u;
label_197b44:
    // 0x197b44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x197b44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197b48: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x197B48u;
    {
        const bool branch_taken_0x197b48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x197B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B48u;
        // 0x197b4c: 0x3c05006a  lui         $a1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197b48) {
            ctx->pc = 0x197B78u;
            goto label_197b78;
        }
    }
    ctx->pc = 0x197B50u;
    // 0x197b50: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x197b50u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x197b54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x197b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197b58: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x197B58u;
    SET_GPR_U32(ctx, 31, 0x197B60u);
    ctx->pc = 0x197B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197B58u;
    // 0x197b5c: 0x24a59cf0  addiu       $a1, $a1, -0x6310 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x197B58u, 0x197B60u)) {
        return;
    }
    ctx->pc = 0x197B60u;
label_197b60:
    // 0x197b60: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x197b60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x197b64: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x197b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x197b68: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x197b68u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x197b6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x197b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197b70: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x197B70u;
    {
        const bool branch_taken_0x197b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B70u;
        // 0x197b74: 0xa2230000  sb          $v1, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197b70) {
            ctx->pc = 0x197B7Cu;
            goto label_197b7c;
        }
    }
    ctx->pc = 0x197B78u;
label_197b78:
    // 0x197b78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x197b78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197b7c:
    // 0x197b7c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x197b7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197b80: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x197b80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x197b84: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x197b84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x197b88: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x197b88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x197b8c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x197b8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197b90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x197b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197b94: 0x3e00008  jr          $ra
    ctx->pc = 0x197B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B94u;
        // 0x197b98: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197B94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197B9Cu;
    // 0x197b9c: 0x0  nop
    ctx->pc = 0x197b9cu;
    // NOP
    ctx->pc = 0x197ba0u;
}
