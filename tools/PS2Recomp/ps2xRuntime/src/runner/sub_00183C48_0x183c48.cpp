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

// Function: sub_00183C48
// Address: 0x183c48 - 0x183d68
void sub_00183C48_0x183c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183C48_0x183c48");
#endif

    switch (ctx->pc) {
        case 0x183c7cu: goto label_183c7c;
        case 0x183cd0u: goto label_183cd0;
        case 0x183ce8u: goto label_183ce8;
        case 0x183d04u: goto label_183d04;
        case 0x183d18u: goto label_183d18;
        case 0x183d2cu: goto label_183d2c;
        case 0x183d38u: goto label_183d38;
        default: break;
    }

    ctx->pc = 0x183c48u;

    // 0x183c48: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x183c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x183c4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x183c4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183c50: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x183c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x183c54: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x183c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x183c58: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x183c58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183c5c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x183c5cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183c60: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x183c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x183c64: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x183c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x183c68: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x183c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x183c6c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x183c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x183c70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x183c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x183c74: 0xc044624  jal         func_111890
    ctx->pc = 0x183C74u;
    SET_GPR_U32(ctx, 31, 0x183C7Cu);
    ctx->pc = 0x183C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183C74u;
    // 0x183c78: 0x26340038  addiu       $s4, $s1, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111890u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x111890u, 0x183C74u, 0x183C7Cu)) {
        return;
    }
    ctx->pc = 0x183C7Cu;
label_183c7c:
    // 0x183c7c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x183c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x183c80: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x183c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x183c84: 0x3c13006d  lui         $s3, 0x6D
    ctx->pc = 0x183c84u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)109 << 16));
    // 0x183c88: 0x3c120069  lui         $s2, 0x69
    ctx->pc = 0x183c88u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)105 << 16));
    // 0x183c8c: 0x24637fd0  addiu       $v1, $v1, 0x7FD0
    ctx->pc = 0x183c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32720));
    // 0x183c90: 0x24427ff0  addiu       $v0, $v0, 0x7FF0
    ctx->pc = 0x183c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32752));
    // 0x183c94: 0x26527f98  addiu       $s2, $s2, 0x7F98
    ctx->pc = 0x183c94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32664));
    // 0x183c98: 0x2673bcf0  addiu       $s3, $s3, -0x4310
    ctx->pc = 0x183c98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294950128));
    // 0x183c9c: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x183c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
    // 0x183ca0: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x183ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x183ca4: 0xae2000a0  sw          $zero, 0xA0($s1)
    ctx->pc = 0x183ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
    // 0x183ca8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x183ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183cac: 0xae2000a4  sw          $zero, 0xA4($s1)
    ctx->pc = 0x183cacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 0));
    // 0x183cb0: 0x24a57f88  addiu       $a1, $a1, 0x7F88
    ctx->pc = 0x183cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32648));
    // 0x183cb4: 0xae2000ac  sw          $zero, 0xAC($s1)
    ctx->pc = 0x183cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 0));
    // 0x183cb8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x183cb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183cbc: 0xae2000b0  sw          $zero, 0xB0($s1)
    ctx->pc = 0x183cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 0));
    // 0x183cc0: 0xae2000b4  sw          $zero, 0xB4($s1)
    ctx->pc = 0x183cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
    // 0x183cc4: 0xae23003c  sw          $v1, 0x3C($s1)
    ctx->pc = 0x183cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
    // 0x183cc8: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x183CC8u;
    SET_GPR_U32(ctx, 31, 0x183CD0u);
    ctx->pc = 0x183CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183CC8u;
    // 0x183ccc: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x183CC8u, 0x183CD0u)) {
        return;
    }
    ctx->pc = 0x183CD0u;
label_183cd0:
    // 0x183cd0: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x183cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x183cd4: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x183cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x183cd8: 0x24a57fa8  addiu       $a1, $a1, 0x7FA8
    ctx->pc = 0x183cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32680));
    // 0x183cdc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x183cdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183ce0: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x183CE0u;
    SET_GPR_U32(ctx, 31, 0x183CE8u);
    ctx->pc = 0x183CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183CE0u;
    // 0x183ce4: 0x2484bcf8  addiu       $a0, $a0, -0x4308 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x183CE0u, 0x183CE8u)) {
        return;
    }
    ctx->pc = 0x183CE8u;
label_183ce8:
    // 0x183ce8: 0x3c10006d  lui         $s0, 0x6D
    ctx->pc = 0x183ce8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)109 << 16));
    // 0x183cec: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x183cecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x183cf0: 0x2610bd00  addiu       $s0, $s0, -0x4300
    ctx->pc = 0x183cf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950144));
    // 0x183cf4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x183cf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183cf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183cfc: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x183CFCu;
    SET_GPR_U32(ctx, 31, 0x183D04u);
    ctx->pc = 0x183D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183CFCu;
    // 0x183d00: 0x24a57fb0  addiu       $a1, $a1, 0x7FB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x183CFCu, 0x183D04u)) {
        return;
    }
    ctx->pc = 0x183D04u;
label_183d04:
    // 0x183d04: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x183d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183d08: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x183d08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183d0c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x183d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183d10: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x183D10u;
    SET_GPR_U32(ctx, 31, 0x183D18u);
    ctx->pc = 0x183D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183D10u;
    // 0x183d14: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x183D10u, 0x183D18u)) {
        return;
    }
    ctx->pc = 0x183D18u;
label_183d18:
    // 0x183d18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x183d18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183d1c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x183d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183d20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x183d20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183d24: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x183D24u;
    SET_GPR_U32(ctx, 31, 0x183D2Cu);
    ctx->pc = 0x183D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183D24u;
    // 0x183d28: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x183D24u, 0x183D2Cu)) {
        return;
    }
    ctx->pc = 0x183D2Cu;
label_183d2c:
    // 0x183d2c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x183d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183d30: 0xc0803dc  jal         func_200F70
    ctx->pc = 0x183D30u;
    SET_GPR_U32(ctx, 31, 0x183D38u);
    ctx->pc = 0x183D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183D30u;
    // 0x183d34: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200F70u, 0x183D30u, 0x183D38u)) {
        return;
    }
    ctx->pc = 0x183D38u;
label_183d38:
    // 0x183d38: 0xae2200a8  sw          $v0, 0xA8($s1)
    ctx->pc = 0x183d38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 2));
    // 0x183d3c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x183d3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183d40: 0xae20008c  sw          $zero, 0x8C($s1)
    ctx->pc = 0x183d40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
    // 0x183d44: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x183d44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x183d48: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x183d48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x183d4c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x183d4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x183d50: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x183d50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x183d54: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x183d54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183d58: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x183d58u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183d5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x183d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183d60: 0x3e00008  jr          $ra
    ctx->pc = 0x183D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183D60u;
        // 0x183d64: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183D68u;
}
