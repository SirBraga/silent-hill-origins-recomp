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

// Function: sub_0017CEA8
// Address: 0x17cea8 - 0x17cfc0
void sub_0017CEA8_0x17cea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017CEA8_0x17cea8");
#endif

    switch (ctx->pc) {
        case 0x17ced8u: goto label_17ced8;
        case 0x17cee8u: goto label_17cee8;
        case 0x17cefcu: goto label_17cefc;
        case 0x17cf10u: goto label_17cf10;
        case 0x17cf1cu: goto label_17cf1c;
        case 0x17cf28u: goto label_17cf28;
        case 0x17cf34u: goto label_17cf34;
        case 0x17cf40u: goto label_17cf40;
        case 0x17cf4cu: goto label_17cf4c;
        case 0x17cf58u: goto label_17cf58;
        case 0x17cf64u: goto label_17cf64;
        case 0x17cf70u: goto label_17cf70;
        case 0x17cf78u: goto label_17cf78;
        case 0x17cf80u: goto label_17cf80;
        case 0x17cf88u: goto label_17cf88;
        case 0x17cf94u: goto label_17cf94;
        default: break;
    }

    ctx->pc = 0x17cea8u;

    // 0x17cea8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17cea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17ceac: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x17ceacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x17ceb0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x17ceb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x17ceb4: 0x24427358  addiu       $v0, $v0, 0x7358
    ctx->pc = 0x17ceb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29528));
    // 0x17ceb8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x17ceb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x17cebc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17cebcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cec0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17cec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17cec4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x17cec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x17cec8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17cec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17cecc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x17ceccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ced0: 0xc05f3f0  jal         func_17CFC0
    ctx->pc = 0x17CED0u;
    SET_GPR_U32(ctx, 31, 0x17CED8u);
    ctx->pc = 0x17CED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CED0u;
    // 0x17ced4: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CFC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17CFC0u, 0x17CED0u, 0x17CED8u)) {
        return;
    }
    ctx->pc = 0x17CED8u;
label_17ced8:
    // 0x17ced8: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x17ced8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x17cedc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17cedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cee0: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x17CEE0u;
    SET_GPR_U32(ctx, 31, 0x17CEE8u);
    ctx->pc = 0x17CEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CEE0u;
    // 0x17cee4: 0x24a5f880  addiu       $a1, $a1, -0x780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x17CEE0u, 0x17CEE8u)) {
        return;
    }
    ctx->pc = 0x17CEE8u;
label_17cee8:
    // 0x17cee8: 0x3c12006c  lui         $s2, 0x6C
    ctx->pc = 0x17cee8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)108 << 16));
    // 0x17ceec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17ceecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cef0: 0x2652f928  addiu       $s2, $s2, -0x6D8
    ctx->pc = 0x17cef0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965544));
    // 0x17cef4: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x17CEF4u;
    SET_GPR_U32(ctx, 31, 0x17CEFCu);
    ctx->pc = 0x17CEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CEF4u;
    // 0x17cef8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x17CEF4u, 0x17CEFCu)) {
        return;
    }
    ctx->pc = 0x17CEFCu;
label_17cefc:
    // 0x17cefc: 0x3c11006c  lui         $s1, 0x6C
    ctx->pc = 0x17cefcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)108 << 16));
    // 0x17cf00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17cf00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cf04: 0x2631f930  addiu       $s1, $s1, -0x6D0
    ctx->pc = 0x17cf04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294965552));
    // 0x17cf08: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x17CF08u;
    SET_GPR_U32(ctx, 31, 0x17CF10u);
    ctx->pc = 0x17CF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CF08u;
    // 0x17cf0c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x17CF08u, 0x17CF10u)) {
        return;
    }
    ctx->pc = 0x17CF10u;
label_17cf10:
    // 0x17cf10: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17cf10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17cf14: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x17CF14u;
    SET_GPR_U32(ctx, 31, 0x17CF1Cu);
    ctx->pc = 0x17CF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CF14u;
    // 0x17cf18: 0x2484f8e8  addiu       $a0, $a0, -0x718 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x17CF14u, 0x17CF1Cu)) {
        return;
    }
    ctx->pc = 0x17CF1Cu;
label_17cf1c:
    // 0x17cf1c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17cf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17cf20: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x17CF20u;
    SET_GPR_U32(ctx, 31, 0x17CF28u);
    ctx->pc = 0x17CF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CF20u;
    // 0x17cf24: 0x2484f8f0  addiu       $a0, $a0, -0x710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x17CF20u, 0x17CF28u)) {
        return;
    }
    ctx->pc = 0x17CF28u;
label_17cf28:
    // 0x17cf28: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17cf28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17cf2c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x17CF2Cu;
    SET_GPR_U32(ctx, 31, 0x17CF34u);
    ctx->pc = 0x17CF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CF2Cu;
    // 0x17cf30: 0x2484f8f8  addiu       $a0, $a0, -0x708 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x17CF2Cu, 0x17CF34u)) {
        return;
    }
    ctx->pc = 0x17CF34u;
label_17cf34:
    // 0x17cf34: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17cf34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17cf38: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x17CF38u;
    SET_GPR_U32(ctx, 31, 0x17CF40u);
    ctx->pc = 0x17CF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CF38u;
    // 0x17cf3c: 0x2484f900  addiu       $a0, $a0, -0x700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x17CF38u, 0x17CF40u)) {
        return;
    }
    ctx->pc = 0x17CF40u;
label_17cf40:
    // 0x17cf40: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17cf40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17cf44: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x17CF44u;
    SET_GPR_U32(ctx, 31, 0x17CF4Cu);
    ctx->pc = 0x17CF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CF44u;
    // 0x17cf48: 0x2484f908  addiu       $a0, $a0, -0x6F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x17CF44u, 0x17CF4Cu)) {
        return;
    }
    ctx->pc = 0x17CF4Cu;
label_17cf4c:
    // 0x17cf4c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17cf4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17cf50: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x17CF50u;
    SET_GPR_U32(ctx, 31, 0x17CF58u);
    ctx->pc = 0x17CF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CF50u;
    // 0x17cf54: 0x2484f910  addiu       $a0, $a0, -0x6F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x17CF50u, 0x17CF58u)) {
        return;
    }
    ctx->pc = 0x17CF58u;
label_17cf58:
    // 0x17cf58: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17cf58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17cf5c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x17CF5Cu;
    SET_GPR_U32(ctx, 31, 0x17CF64u);
    ctx->pc = 0x17CF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CF5Cu;
    // 0x17cf60: 0x2484f920  addiu       $a0, $a0, -0x6E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x17CF5Cu, 0x17CF64u)) {
        return;
    }
    ctx->pc = 0x17CF64u;
label_17cf64:
    // 0x17cf64: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17cf64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17cf68: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x17CF68u;
    SET_GPR_U32(ctx, 31, 0x17CF70u);
    ctx->pc = 0x17CF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CF68u;
    // 0x17cf6c: 0x2484f918  addiu       $a0, $a0, -0x6E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x17CF68u, 0x17CF70u)) {
        return;
    }
    ctx->pc = 0x17CF70u;
label_17cf70:
    // 0x17cf70: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x17CF70u;
    SET_GPR_U32(ctx, 31, 0x17CF78u);
    ctx->pc = 0x17CF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CF70u;
    // 0x17cf74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x17CF70u, 0x17CF78u)) {
        return;
    }
    ctx->pc = 0x17CF78u;
label_17cf78:
    // 0x17cf78: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x17CF78u;
    SET_GPR_U32(ctx, 31, 0x17CF80u);
    ctx->pc = 0x17CF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CF78u;
    // 0x17cf7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x17CF78u, 0x17CF80u)) {
        return;
    }
    ctx->pc = 0x17CF80u;
label_17cf80:
    // 0x17cf80: 0xc05f402  jal         func_17D008
    ctx->pc = 0x17CF80u;
    SET_GPR_U32(ctx, 31, 0x17CF88u);
    ctx->pc = 0x17CF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CF80u;
    // 0x17cf84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D008u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17D008u, 0x17CF80u, 0x17CF88u)) {
        return;
    }
    ctx->pc = 0x17CF88u;
label_17cf88:
    // 0x17cf88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17cf88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cf8c: 0xc07fc62  jal         func_1FF188
    ctx->pc = 0x17CF8Cu;
    SET_GPR_U32(ctx, 31, 0x17CF94u);
    ctx->pc = 0x17CF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CF8Cu;
    // 0x17cf90: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF188u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF188u, 0x17CF8Cu, 0x17CF94u)) {
        return;
    }
    ctx->pc = 0x17CF94u;
label_17cf94:
    // 0x17cf94: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x17cf94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17cf98: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x17cf98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17cf9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17cf9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17cfa0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x17cfa0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17cfa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17cfa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17cfa8: 0x3e00008  jr          $ra
    ctx->pc = 0x17CFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CFA8u;
        // 0x17cfac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17CFA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17CFB0u;
    // 0x17cfb0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17cfb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cfb4: 0x0  nop
    ctx->pc = 0x17cfb4u;
    // NOP
    // 0x17cfb8: 0x0  nop
    ctx->pc = 0x17cfb8u;
    // NOP
    // 0x17cfbc: 0x0  nop
    ctx->pc = 0x17cfbcu;
    // NOP
    ctx->pc = 0x17cfc0u;
}
