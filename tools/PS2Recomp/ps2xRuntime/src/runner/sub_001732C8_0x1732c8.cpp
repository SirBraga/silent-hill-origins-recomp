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

// Function: sub_001732C8
// Address: 0x1732c8 - 0x1733a0
void sub_001732C8_0x1732c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001732C8_0x1732c8");
#endif

    switch (ctx->pc) {
        case 0x1732f8u: goto label_1732f8;
        case 0x173318u: goto label_173318;
        case 0x173324u: goto label_173324;
        case 0x173340u: goto label_173340;
        case 0x17334cu: goto label_17334c;
        case 0x173368u: goto label_173368;
        case 0x173378u: goto label_173378;
        default: break;
    }

    ctx->pc = 0x1732c8u;

    // 0x1732c8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1732c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1732cc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1732ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1732d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1732d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1732d4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1732d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1732d8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1732d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1732dc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1732dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1732e0: 0x26500070  addiu       $s0, $s2, 0x70
    ctx->pc = 0x1732e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x1732e4: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1732e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1732e8: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x1732e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1732ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1732ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1732f0: 0xc05d80c  jal         func_176030
    ctx->pc = 0x1732F0u;
    SET_GPR_U32(ctx, 31, 0x1732F8u);
    ctx->pc = 0x1732F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1732F0u;
    // 0x1732f4: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x176030u, 0x1732F0u, 0x1732F8u)) {
        return;
    }
    ctx->pc = 0x1732F8u;
label_1732f8:
    // 0x1732f8: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x1732f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x1732fc: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x1732fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x173300: 0x24425b00  addiu       $v0, $v0, 0x5B00
    ctx->pc = 0x173300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23296));
    // 0x173304: 0x24635b20  addiu       $v1, $v1, 0x5B20
    ctx->pc = 0x173304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23328));
    // 0x173308: 0xae42003c  sw          $v0, 0x3C($s2)
    ctx->pc = 0x173308u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    // 0x17330c: 0x26440068  addiu       $a0, $s2, 0x68
    ctx->pc = 0x17330cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 104));
    // 0x173310: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x173310u;
    SET_GPR_U32(ctx, 31, 0x173318u);
    ctx->pc = 0x173314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173310u;
    // 0x173314: 0xae430034  sw          $v1, 0x34($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x173310u, 0x173318u)) {
        return;
    }
    ctx->pc = 0x173318u;
label_173318:
    // 0x173318: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x173318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17331c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x17331Cu;
    SET_GPR_U32(ctx, 31, 0x173324u);
    ctx->pc = 0x173320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17331Cu;
    // 0x173320: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x17331Cu, 0x173324u)) {
        return;
    }
    ctx->pc = 0x173324u;
label_173324:
    // 0x173324: 0x0  nop
    ctx->pc = 0x173324u;
    // NOP
    // 0x173328: 0x1633fffb  bne         $s1, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x173328u;
    {
        const bool branch_taken_0x173328 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x17332Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173328u;
        // 0x17332c: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173328) {
            ctx->pc = 0x173318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_173318;
        }
    }
    ctx->pc = 0x173330u;
    // 0x173330: 0x265000a0  addiu       $s0, $s2, 0xA0
    ctx->pc = 0x173330u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
    // 0x173334: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x173334u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x173338: 0x2654005c  addiu       $s4, $s2, 0x5C
    ctx->pc = 0x173338u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 92));
    // 0x17333c: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x17333cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_173340:
    // 0x173340: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x173340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173344: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x173344u;
    SET_GPR_U32(ctx, 31, 0x17334Cu);
    ctx->pc = 0x173348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173344u;
    // 0x173348: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x173344u, 0x17334Cu)) {
        return;
    }
    ctx->pc = 0x17334Cu;
label_17334c:
    // 0x17334c: 0x0  nop
    ctx->pc = 0x17334cu;
    // NOP
    // 0x173350: 0x1633fffb  bne         $s1, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x173350u;
    {
        const bool branch_taken_0x173350 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x173354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173350u;
        // 0x173354: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173350) {
            ctx->pc = 0x173340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_173340;
        }
    }
    ctx->pc = 0x173358u;
    // 0x173358: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x173358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17335c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x17335cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x173360: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x173360u;
    SET_GPR_U32(ctx, 31, 0x173368u);
    ctx->pc = 0x173364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173360u;
    // 0x173364: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x173360u, 0x173368u)) {
        return;
    }
    ctx->pc = 0x173368u;
label_173368:
    // 0x173368: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x173368u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x17336c: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x17336cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x173370: 0xc06ca28  jal         func_1B28A0
    ctx->pc = 0x173370u;
    SET_GPR_U32(ctx, 31, 0x173378u);
    ctx->pc = 0x173374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173370u;
    // 0x173374: 0x8c649168  lw          $a0, -0x6E98($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294938984)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B28A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B28A0u, 0x173370u, 0x173378u)) {
        return;
    }
    ctx->pc = 0x173378u;
label_173378:
    // 0x173378: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x173378u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17337c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x17337cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x173380: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x173380u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x173384: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x173384u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173388: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x173388u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17338c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x17338cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173390: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x173390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173394: 0x3e00008  jr          $ra
    ctx->pc = 0x173394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173394u;
        // 0x173398: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17339Cu;
    // 0x17339c: 0x0  nop
    ctx->pc = 0x17339cu;
    // NOP
    ctx->pc = 0x1733a0u;
}
