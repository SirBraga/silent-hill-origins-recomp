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

// Function: sub_00125910
// Address: 0x125910 - 0x1259d8
void sub_00125910_0x125910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125910_0x125910");
#endif

    switch (ctx->pc) {
        case 0x125958u: goto label_125958;
        case 0x125988u: goto label_125988;
        case 0x1259b4u: goto label_1259b4;
        default: break;
    }

    ctx->pc = 0x125910u;

    // 0x125910: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x125910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x125914: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x125914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x125918: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x125918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x12591c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x12591cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125920: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x125920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x125924: 0x26a40320  addiu       $a0, $s5, 0x320
    ctx->pc = 0x125924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 800));
    // 0x125928: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x125928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x12592c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x12592cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x125930: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x125930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x125934: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x125934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x125938: 0x8c820804  lw          $v0, 0x804($a0)
    ctx->pc = 0x125938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2052)));
    // 0x12593c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x12593cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x125940: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x125940u;
    {
        const bool branch_taken_0x125940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x125944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125940u;
        // 0x125944: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125940) {
            ctx->pc = 0x1259ACu;
            goto label_1259ac;
        }
    }
    ctx->pc = 0x125948u;
    // 0x125948: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x125948u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x12594c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12594cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125950: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x125950u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x125954: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x125954u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125958:
    // 0x125958: 0x8e020848  lw          $v0, 0x848($s0)
    ctx->pc = 0x125958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2120)));
    // 0x12595c: 0x128880  sll         $s1, $s2, 2
    ctx->pc = 0x12595cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x125960: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x125960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x125964: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x125964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x125968: 0x5473000b  bnel        $v1, $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x125968u;
    {
        const bool branch_taken_0x125968 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x125968) {
            ctx->pc = 0x12596Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125968u;
            // 0x12596c: 0x8e030804  lw          $v1, 0x804($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2052)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125998u;
            goto label_125998;
        }
    }
    ctx->pc = 0x125970u;
    // 0x125970: 0x8e020804  lw          $v0, 0x804($s0)
    ctx->pc = 0x125970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2052)));
    // 0x125974: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x125974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125978: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x125978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x12597c: 0xb42821  addu        $a1, $a1, $s4
    ctx->pc = 0x12597cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x125980: 0xc0406e8  jal         func_101BA0
    ctx->pc = 0x125980u;
    SET_GPR_U32(ctx, 31, 0x125988u);
    ctx->pc = 0x125984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125980u;
    // 0x125984: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101BA0u, 0x125980u, 0x125988u)) {
        return;
    }
    ctx->pc = 0x125988u;
label_125988:
    // 0x125988: 0x8e030848  lw          $v1, 0x848($s0)
    ctx->pc = 0x125988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2120)));
    // 0x12598c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x12598cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x125990: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x125990u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x125994: 0x8e030804  lw          $v1, 0x804($s0)
    ctx->pc = 0x125994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2052)));
label_125998:
    // 0x125998: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x125998u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x12599c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12599cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1259a0: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x1259a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1259a4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1259A4u;
    {
        const bool branch_taken_0x1259a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1259A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1259A4u;
        // 0x1259a8: 0x26940098  addiu       $s4, $s4, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1259a4) {
            ctx->pc = 0x125958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_125958;
        }
    }
    ctx->pc = 0x1259ACu;
label_1259ac:
    // 0x1259ac: 0xc049676  jal         func_1259D8
    ctx->pc = 0x1259ACu;
    SET_GPR_U32(ctx, 31, 0x1259B4u);
    ctx->pc = 0x1259B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1259ACu;
    // 0x1259b0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1259D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1259D8u, 0x1259ACu, 0x1259B4u)) {
        return;
    }
    ctx->pc = 0x1259B4u;
label_1259b4:
    // 0x1259b4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1259b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1259b8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1259b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1259bc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1259bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1259c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1259c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1259c4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1259c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1259c8: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x1259c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1259cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1259ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1259d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1259D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1259D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1259D0u;
        // 0x1259d4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1259D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1259D8u;
}
