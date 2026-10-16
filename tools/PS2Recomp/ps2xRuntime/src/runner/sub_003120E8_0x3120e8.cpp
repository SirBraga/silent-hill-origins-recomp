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

// Function: sub_003120E8
// Address: 0x3120e8 - 0x3121c8
void sub_003120E8_0x3120e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003120E8_0x3120e8");
#endif

    switch (ctx->pc) {
        case 0x312128u: goto label_312128;
        case 0x31217cu: goto label_31217c;
        case 0x31219cu: goto label_31219c;
        default: break;
    }

    ctx->pc = 0x3120e8u;

    // 0x3120e8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3120e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3120ec: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3120ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x3120f0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3120f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x3120f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3120f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3120f8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3120f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x3120fc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x3120fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312100: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x312100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x312104: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x312104u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312108: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x312108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x31210c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x31210cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x312110: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x312110u;
    {
        const bool branch_taken_0x312110 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x312114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312110u;
        // 0x312114: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312110) {
            ctx->pc = 0x312138u;
            goto label_312138;
        }
    }
    ctx->pc = 0x312118u;
    // 0x312118: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x312118u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x31211c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31211cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312120: 0xc0b7096  jal         func_2DC258
    ctx->pc = 0x312120u;
    SET_GPR_U32(ctx, 31, 0x312128u);
    ctx->pc = 0x312124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312120u;
    // 0x312124: 0x34a50800  ori         $a1, $a1, 0x800 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2048);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC258u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC258u, 0x312120u, 0x312128u)) {
        return;
    }
    ctx->pc = 0x312128u;
label_312128:
    // 0x312128: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x312128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x31212c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x31212cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x312130: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x312130u;
    {
        const bool branch_taken_0x312130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312130u;
        // 0x312134: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312130) {
            ctx->pc = 0x312144u;
            goto label_312144;
        }
    }
    ctx->pc = 0x312138u;
label_312138:
    // 0x312138: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x312138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31213c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x31213cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x312140: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x312140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_312144:
    // 0x312144: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x312144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x312148: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x312148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x31214c: 0x2463b070  addiu       $v1, $v1, -0x4F90
    ctx->pc = 0x31214cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946928));
    // 0x312150: 0x24422208  addiu       $v0, $v0, 0x2208
    ctx->pc = 0x312150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8712));
    // 0x312154: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x312154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x312158: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x312158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x31215c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x31215cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x312160: 0xafb20014  sw          $s2, 0x14($sp)
    ctx->pc = 0x312160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 18));
    // 0x312164: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x312164u;
    {
        const bool branch_taken_0x312164 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x312168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312164u;
        // 0x312168: 0xafb1000c  sw          $s1, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312164) {
            ctx->pc = 0x312174u;
            goto label_312174;
        }
    }
    ctx->pc = 0x31216Cu;
    // 0x31216c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x31216Cu;
    {
        const bool branch_taken_0x31216c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31216Cu;
        // 0x312170: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31216c) {
            ctx->pc = 0x3121A8u;
            goto label_3121a8;
        }
    }
    ctx->pc = 0x312174u;
label_312174:
    // 0x312174: 0xc0c8448  jal         func_321120
    ctx->pc = 0x312174u;
    SET_GPR_U32(ctx, 31, 0x31217Cu);
    ctx->pc = 0x312178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312174u;
    // 0x312178: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321120u, 0x312174u, 0x31217Cu)) {
        return;
    }
    ctx->pc = 0x31217Cu;
label_31217c:
    // 0x31217c: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x31217cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
    // 0x312180: 0x1c400008  bgtz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x312180u;
    {
        const bool branch_taken_0x312180 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x312184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312180u;
        // 0x312184: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312180) {
            ctx->pc = 0x3121A4u;
            goto label_3121a4;
        }
    }
    ctx->pc = 0x312188u;
    // 0x312188: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x312188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x31218c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31218Cu;
    {
        const bool branch_taken_0x31218c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x312190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31218Cu;
        // 0x312190: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31218c) {
            ctx->pc = 0x3121A8u;
            goto label_3121a8;
        }
    }
    ctx->pc = 0x312194u;
    // 0x312194: 0xc0b7080  jal         func_2DC200
    ctx->pc = 0x312194u;
    SET_GPR_U32(ctx, 31, 0x31219Cu);
    ctx->pc = 0x312198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312194u;
    // 0x312198: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC200u, 0x312194u, 0x31219Cu)) {
        return;
    }
    ctx->pc = 0x31219Cu;
label_31219c:
    // 0x31219c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31219Cu;
    {
        const bool branch_taken_0x31219c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3121A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31219Cu;
        // 0x3121a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31219c) {
            ctx->pc = 0x3121A8u;
            goto label_3121a8;
        }
    }
    ctx->pc = 0x3121A4u;
label_3121a4:
    // 0x3121a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3121a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3121a8:
    // 0x3121a8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3121a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3121ac: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3121acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3121b0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3121b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3121b4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3121b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3121b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3121b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3121bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3121BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3121C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3121BCu;
        // 0x3121c0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3121BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3121C4u;
    // 0x3121c4: 0x0  nop
    ctx->pc = 0x3121c4u;
    // NOP
    ctx->pc = 0x3121c8u;
}
