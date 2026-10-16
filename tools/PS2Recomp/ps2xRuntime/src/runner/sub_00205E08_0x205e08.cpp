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

// Function: sub_00205E08
// Address: 0x205e08 - 0x205ed0
void sub_00205E08_0x205e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205E08_0x205e08");
#endif

    switch (ctx->pc) {
        case 0x205e64u: goto label_205e64;
        case 0x205e74u: goto label_205e74;
        case 0x205e84u: goto label_205e84;
        case 0x205e9cu: goto label_205e9c;
        case 0x205eacu: goto label_205eac;
        default: break;
    }

    ctx->pc = 0x205e08u;

    // 0x205e08: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x205e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x205e0c: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x205e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x205e10: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x205e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
    // 0x205e14: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x205e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x205e18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x205e18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205e1c: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x205e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
    // 0x205e20: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x205e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205e24: 0x8c430288  lw          $v1, 0x288($v0)
    ctx->pc = 0x205e24u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5C0288u));
    // 0x205e28: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x205e28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205e2c: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x205e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x205e30: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x205E30u;
    {
        const bool branch_taken_0x205e30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x205E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205E30u;
        // 0x205e34: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205e30) {
            ctx->pc = 0x205E40u;
            goto label_205e40;
        }
    }
    ctx->pc = 0x205E38u;
    // 0x205e38: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x205E38u;
    {
        const bool branch_taken_0x205e38 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x205e38) {
            ctx->pc = 0x205E84u;
            goto label_205e84;
        }
    }
    ctx->pc = 0x205E40u;
label_205e40:
    // 0x205e40: 0x5480000a  bnel        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x205E40u;
    {
        const bool branch_taken_0x205e40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x205e40) {
            ctx->pc = 0x205E44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205E40u;
            // 0x205e44: 0x3c05006a  lui         $a1, 0x6A (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205E6Cu;
            goto label_205e6c;
        }
    }
    ctx->pc = 0x205E48u;
    // 0x205e48: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x205e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x205e4c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x205e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x205e50: 0x8c46028c  lw          $a2, 0x28C($v0)
    ctx->pc = 0x205e50u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5C028Cu));
    // 0x205e54: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x205e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205e58: 0x24a53ea8  addiu       $a1, $a1, 0x3EA8
    ctx->pc = 0x205e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16040));
    // 0x205e5c: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x205E5Cu;
    SET_GPR_U32(ctx, 31, 0x205E64u);
    ctx->pc = 0x205E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205E5Cu;
    // 0x205e60: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x205E5Cu, 0x205E64u)) {
        return;
    }
    ctx->pc = 0x205E64u;
label_205e64:
    // 0x205e64: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x205e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205e68: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x205e68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_205e6c:
    // 0x205e6c: 0xc09cc68  jal         func_2731A0
    ctx->pc = 0x205E6Cu;
    SET_GPR_U32(ctx, 31, 0x205E74u);
    ctx->pc = 0x205E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205E6Cu;
    // 0x205e70: 0x24a53eb0  addiu       $a1, $a1, 0x3EB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2731A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2731A0u, 0x205E6Cu, 0x205E74u)) {
        return;
    }
    ctx->pc = 0x205E74u;
label_205e74:
    // 0x205e74: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x205E74u;
    {
        const bool branch_taken_0x205e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205E74u;
        // 0x205e78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205e74) {
            ctx->pc = 0x205E84u;
            goto label_205e84;
        }
    }
    ctx->pc = 0x205E7Cu;
    // 0x205e7c: 0xc09cca4  jal         func_273290
    ctx->pc = 0x205E7Cu;
    SET_GPR_U32(ctx, 31, 0x205E84u);
    ctx->pc = 0x205E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205E7Cu;
    // 0x205e80: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273290u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x273290u, 0x205E7Cu, 0x205E84u)) {
        return;
    }
    ctx->pc = 0x205E84u;
label_205e84:
    // 0x205e84: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x205E84u;
    {
        const bool branch_taken_0x205e84 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x205E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205E84u;
        // 0x205e88: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205e84) {
            ctx->pc = 0x205EB4u;
            goto label_205eb4;
        }
    }
    ctx->pc = 0x205E8Cu;
    // 0x205e8c: 0x5240000a  beql        $s2, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x205E8Cu;
    {
        const bool branch_taken_0x205e8c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x205e8c) {
            ctx->pc = 0x205E90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205E8Cu;
            // 0x205e90: 0x7bb10120  lq          $s1, 0x120($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205EB8u;
            goto label_205eb8;
        }
    }
    ctx->pc = 0x205E94u;
    // 0x205e94: 0xc0815b2  jal         func_2056C8
    ctx->pc = 0x205E94u;
    SET_GPR_U32(ctx, 31, 0x205E9Cu);
    ctx->pc = 0x2056C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2056C8u, 0x205E94u, 0x205E9Cu)) {
        return;
    }
    ctx->pc = 0x205E9Cu;
label_205e9c:
    // 0x205e9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x205e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205ea0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x205ea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205ea4: 0xc0813f2  jal         func_204FC8
    ctx->pc = 0x205EA4u;
    SET_GPR_U32(ctx, 31, 0x205EACu);
    ctx->pc = 0x205EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205EA4u;
    // 0x205ea8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204FC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x204FC8u, 0x205EA4u, 0x205EACu)) {
        return;
    }
    ctx->pc = 0x205EACu;
label_205eac:
    // 0x205eac: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x205eacu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x205eb0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x205eb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_205eb4:
    // 0x205eb4: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x205eb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_205eb8:
    // 0x205eb8: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x205eb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x205ebc: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x205ebcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x205ec0: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x205ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x205ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x205EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205EC4u;
        // 0x205ec8: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205EC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205ECCu;
    // 0x205ecc: 0x0  nop
    ctx->pc = 0x205eccu;
    // NOP
    ctx->pc = 0x205ed0u;
}
