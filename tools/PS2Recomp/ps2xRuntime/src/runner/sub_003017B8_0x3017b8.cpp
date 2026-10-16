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

// Function: sub_003017B8
// Address: 0x3017b8 - 0x301858
void sub_003017B8_0x3017b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003017B8_0x3017b8");
#endif

    switch (ctx->pc) {
        case 0x3017d4u: goto label_3017d4;
        default: break;
    }

    ctx->pc = 0x3017b8u;

    // 0x3017b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3017b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3017bc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3017bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3017c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3017c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3017c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3017c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3017c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3017c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3017cc: 0xc0c9ba4  jal         func_326E90
    ctx->pc = 0x3017CCu;
    SET_GPR_U32(ctx, 31, 0x3017D4u);
    ctx->pc = 0x3017D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3017CCu;
    // 0x3017d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326E90u, 0x3017CCu, 0x3017D4u)) {
        return;
    }
    ctx->pc = 0x3017D4u;
label_3017d4:
    // 0x3017d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3017d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3017d8: 0x101f02  srl         $v1, $s0, 28
    ctx->pc = 0x3017d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 28));
    // 0x3017dc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3017dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3017e0: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3017E0u;
    {
        const bool branch_taken_0x3017e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3017E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3017E0u;
        // 0x3017e4: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3017e0) {
            ctx->pc = 0x3017FCu;
            goto label_3017fc;
        }
    }
    ctx->pc = 0x3017E8u;
    // 0x3017e8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3017e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3017ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3017ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3017f0: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x3017f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x3017f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3017F4u;
    {
        const bool branch_taken_0x3017f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3017F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3017F4u;
        // 0x3017f8: 0x2038025  or          $s0, $s0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3017f4) {
            ctx->pc = 0x301804u;
            goto label_301804;
        }
    }
    ctx->pc = 0x3017FCu;
label_3017fc:
    // 0x3017fc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3017fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x301800: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x301800u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_301804:
    // 0x301804: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x301804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x301808: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x301808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x30180c: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x30180cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
    // 0x301810: 0x3463b020  ori         $v1, $v1, 0xB020
    ctx->pc = 0x301810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45088);
    // 0x301814: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x301814u;
    runtime->Store32(rdram, ctx, 0x1000B010u, GPR_U32(ctx, 16)); // MMIO: 0x1000b010
    // 0x301818: 0x112103  sra         $a0, $s1, 4
    ctx->pc = 0x301818u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 17), 4));
    // 0x30181c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x30181cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x301820: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x301820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x301824: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x301824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x301828: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x301828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30182c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x30182cu;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 3)); // MMIO: 0x1000b000
    // 0x301830: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x301830u;
    {
        const bool branch_taken_0x301830 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x301834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301830u;
        // 0x301834: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301830) {
            ctx->pc = 0x301848u;
            goto label_301848;
        }
    }
    ctx->pc = 0x301838u;
    // 0x301838: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x301838u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30183c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30183cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x301840: 0x80c9bb8  j           func_326EE0
    ctx->pc = 0x301840u;
    ctx->pc = 0x301844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301840u;
    // 0x301844: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326EE0u;
    sub_00326EE0_0x326ee0(rdram, ctx, runtime); return;
    ctx->pc = 0x301848u;
label_301848:
    // 0x301848: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x301848u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30184c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30184cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x301850: 0x3e00008  jr          $ra
    ctx->pc = 0x301850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x301854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301850u;
        // 0x301854: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x301850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x301858u;
}
