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

// Function: sub_00164FF8
// Address: 0x164ff8 - 0x165090
void sub_00164FF8_0x164ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00164FF8_0x164ff8");
#endif

    switch (ctx->pc) {
        case 0x165028u: goto label_165028;
        case 0x165038u: goto label_165038;
        case 0x165048u: goto label_165048;
        case 0x165058u: goto label_165058;
        case 0x165064u: goto label_165064;
        case 0x165070u: goto label_165070;
        default: break;
    }

    ctx->pc = 0x164ff8u;

    // 0x164ff8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x164ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x164ffc: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x164ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x165000: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x165000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x165004: 0x24423eb0  addiu       $v0, $v0, 0x3EB0
    ctx->pc = 0x165004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16048));
    // 0x165008: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x165008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x16500c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x16500cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165010: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x165010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x165014: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x165014u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165018: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x165018u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x16501c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x16501cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x165020: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x165020u;
    SET_GPR_U32(ctx, 31, 0x165028u);
    ctx->pc = 0x165024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165020u;
    // 0x165024: 0x24a5f880  addiu       $a1, $a1, -0x780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x165020u, 0x165028u)) {
        return;
    }
    ctx->pc = 0x165028u;
label_165028:
    // 0x165028: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x165028u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x16502c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16502cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165030: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x165030u;
    SET_GPR_U32(ctx, 31, 0x165038u);
    ctx->pc = 0x165034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165030u;
    // 0x165034: 0x24a5f888  addiu       $a1, $a1, -0x778 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x165030u, 0x165038u)) {
        return;
    }
    ctx->pc = 0x165038u;
label_165038:
    // 0x165038: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x165038u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x16503c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16503cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165040: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x165040u;
    SET_GPR_U32(ctx, 31, 0x165048u);
    ctx->pc = 0x165044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165040u;
    // 0x165044: 0x24a5f890  addiu       $a1, $a1, -0x770 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x165040u, 0x165048u)) {
        return;
    }
    ctx->pc = 0x165048u;
label_165048:
    // 0x165048: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x165048u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x16504c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16504cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165050: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x165050u;
    SET_GPR_U32(ctx, 31, 0x165058u);
    ctx->pc = 0x165054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165050u;
    // 0x165054: 0x24a58888  addiu       $a1, $a1, -0x7778 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x165050u, 0x165058u)) {
        return;
    }
    ctx->pc = 0x165058u;
label_165058:
    // 0x165058: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x165058u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x16505c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x16505Cu;
    SET_GPR_U32(ctx, 31, 0x165064u);
    ctx->pc = 0x165060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16505Cu;
    // 0x165060: 0x2484f5e0  addiu       $a0, $a0, -0xA20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x16505Cu, 0x165064u)) {
        return;
    }
    ctx->pc = 0x165064u;
label_165064:
    // 0x165064: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x165064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165068: 0xc07fc62  jal         func_1FF188
    ctx->pc = 0x165068u;
    SET_GPR_U32(ctx, 31, 0x165070u);
    ctx->pc = 0x16506Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165068u;
    // 0x16506c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF188u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF188u, 0x165068u, 0x165070u)) {
        return;
    }
    ctx->pc = 0x165070u;
label_165070:
    // 0x165070: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x165070u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165074: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x165074u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165078: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x165078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16507c: 0x3e00008  jr          $ra
    ctx->pc = 0x16507Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16507Cu;
        // 0x165080: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16507Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165084u;
    // 0x165084: 0x0  nop
    ctx->pc = 0x165084u;
    // NOP
    // 0x165088: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x165088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x16508c: 0x0  nop
    ctx->pc = 0x16508cu;
    // NOP
    ctx->pc = 0x165090u;
}
