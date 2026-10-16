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

// Function: sub_001F6AA8
// Address: 0x1f6aa8 - 0x1f6b40
void sub_001F6AA8_0x1f6aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F6AA8_0x1f6aa8");
#endif

    switch (ctx->pc) {
        case 0x1f6ad0u: goto label_1f6ad0;
        case 0x1f6adcu: goto label_1f6adc;
        case 0x1f6ae8u: goto label_1f6ae8;
        case 0x1f6b08u: goto label_1f6b08;
        case 0x1f6b20u: goto label_1f6b20;
        case 0x1f6b2cu: goto label_1f6b2c;
        default: break;
    }

    ctx->pc = 0x1f6aa8u;

    // 0x1f6aa8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f6aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f6aac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f6aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f6ab0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f6ab0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6ab4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1f6ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1f6ab8: 0x341181e0  ori         $s1, $zero, 0x81E0
    ctx->pc = 0x1f6ab8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33248);
    // 0x1f6abc: 0x118bfc  dsll32      $s1, $s1, 15
    ctx->pc = 0x1f6abcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 15));
    // 0x1f6ac0: 0x10203f  dsra32      $a0, $s0, 0
    ctx->pc = 0x1f6ac0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x1f6ac4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f6ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f6ac8: 0xc07df10  jal         func_1F7C40
    ctx->pc = 0x1F6AC8u;
    SET_GPR_U32(ctx, 31, 0x1F6AD0u);
    ctx->pc = 0x1F7C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7C40u, 0x1F6AC8u, 0x1F6AD0u)) {
        return;
    }
    ctx->pc = 0x1F6AD0u;
label_1f6ad0:
    // 0x1f6ad0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f6ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6ad4: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x1F6AD4u;
    SET_GPR_U32(ctx, 31, 0x1F6ADCu);
    ctx->pc = 0x1F6AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6AD4u;
    // 0x1f6ad8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x1F6AD4u, 0x1F6ADCu)) {
        return;
    }
    ctx->pc = 0x1F6ADCu;
label_1f6adc:
    // 0x1f6adc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f6adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6ae0: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x1F6AE0u;
    SET_GPR_U32(ctx, 31, 0x1F6AE8u);
    ctx->pc = 0x1F6AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6AE0u;
    // 0x1f6ae4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x1F6AE0u, 0x1F6AE8u)) {
        return;
    }
    ctx->pc = 0x1F6AE8u;
label_1f6ae8:
    // 0x1f6ae8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f6ae8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6aec: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1f6aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1f6af0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1f6af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1f6af4: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x1f6af4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x1f6af8: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x1f6af8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1f6afc: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x1f6afcu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x1f6b00: 0xc07df10  jal         func_1F7C40
    ctx->pc = 0x1F6B00u;
    SET_GPR_U32(ctx, 31, 0x1F6B08u);
    ctx->pc = 0x1F6B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6B00u;
    // 0x1f6b04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7C40u, 0x1F6B00u, 0x1F6B08u)) {
        return;
    }
    ctx->pc = 0x1F6B08u;
label_1f6b08:
    // 0x1f6b08: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F6B08u;
    {
        const bool branch_taken_0x1f6b08 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x1F6B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6B08u;
        // 0x1f6b0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6b08) {
            ctx->pc = 0x1F6B24u;
            goto label_1f6b24;
        }
    }
    ctx->pc = 0x1F6B10u;
    // 0x1f6b10: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x1f6b10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x1f6b14: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1f6b14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1f6b18: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x1F6B18u;
    SET_GPR_U32(ctx, 31, 0x1F6B20u);
    ctx->pc = 0x1F6B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6B18u;
    // 0x1f6b1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x1F6B18u, 0x1F6B20u)) {
        return;
    }
    ctx->pc = 0x1F6B20u;
label_1f6b20:
    // 0x1f6b20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f6b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f6b24:
    // 0x1f6b24: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x1F6B24u;
    SET_GPR_U32(ctx, 31, 0x1F6B2Cu);
    ctx->pc = 0x1F6B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6B24u;
    // 0x1f6b28: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x1F6B24u, 0x1F6B2Cu)) {
        return;
    }
    ctx->pc = 0x1F6B2Cu;
label_1f6b2c:
    // 0x1f6b2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f6b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f6b30: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1f6b30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f6b34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f6b34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6b38: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6B38u;
        // 0x1f6b3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6B40u;
}
