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

// Function: sub_0020AA10
// Address: 0x20aa10 - 0x20aee8
void sub_0020AA10_0x20aa10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020AA10_0x20aa10");
#endif

    switch (ctx->pc) {
        case 0x20aa10u: goto label_20aa10;
        case 0x20aa14u: goto label_20aa14;
        case 0x20aa18u: goto label_20aa18;
        case 0x20aa1cu: goto label_20aa1c;
        case 0x20aa20u: goto label_20aa20;
        case 0x20aa24u: goto label_20aa24;
        case 0x20aa28u: goto label_20aa28;
        case 0x20aa2cu: goto label_20aa2c;
        case 0x20aa30u: goto label_20aa30;
        case 0x20aa34u: goto label_20aa34;
        case 0x20aa38u: goto label_20aa38;
        case 0x20aa3cu: goto label_20aa3c;
        case 0x20aa40u: goto label_20aa40;
        case 0x20aa44u: goto label_20aa44;
        case 0x20aa48u: goto label_20aa48;
        case 0x20aa4cu: goto label_20aa4c;
        case 0x20aa50u: goto label_20aa50;
        case 0x20aa54u: goto label_20aa54;
        case 0x20aa58u: goto label_20aa58;
        case 0x20aa5cu: goto label_20aa5c;
        case 0x20aa60u: goto label_20aa60;
        case 0x20aa64u: goto label_20aa64;
        case 0x20aa68u: goto label_20aa68;
        case 0x20aa6cu: goto label_20aa6c;
        case 0x20aa70u: goto label_20aa70;
        case 0x20aa74u: goto label_20aa74;
        case 0x20aa78u: goto label_20aa78;
        case 0x20aa7cu: goto label_20aa7c;
        case 0x20aa80u: goto label_20aa80;
        case 0x20aa84u: goto label_20aa84;
        case 0x20aa88u: goto label_20aa88;
        case 0x20aa8cu: goto label_20aa8c;
        case 0x20aa90u: goto label_20aa90;
        case 0x20aa94u: goto label_20aa94;
        case 0x20aa98u: goto label_20aa98;
        case 0x20aa9cu: goto label_20aa9c;
        case 0x20aaa0u: goto label_20aaa0;
        case 0x20aaa4u: goto label_20aaa4;
        case 0x20aaa8u: goto label_20aaa8;
        case 0x20aaacu: goto label_20aaac;
        case 0x20aab0u: goto label_20aab0;
        case 0x20aab4u: goto label_20aab4;
        case 0x20aab8u: goto label_20aab8;
        case 0x20aabcu: goto label_20aabc;
        case 0x20aac0u: goto label_20aac0;
        case 0x20aac4u: goto label_20aac4;
        case 0x20aac8u: goto label_20aac8;
        case 0x20aaccu: goto label_20aacc;
        case 0x20aad0u: goto label_20aad0;
        case 0x20aad4u: goto label_20aad4;
        case 0x20aad8u: goto label_20aad8;
        case 0x20aadcu: goto label_20aadc;
        case 0x20aae0u: goto label_20aae0;
        case 0x20aae4u: goto label_20aae4;
        case 0x20aae8u: goto label_20aae8;
        case 0x20aaecu: goto label_20aaec;
        case 0x20aaf0u: goto label_20aaf0;
        case 0x20aaf4u: goto label_20aaf4;
        case 0x20aaf8u: goto label_20aaf8;
        case 0x20aafcu: goto label_20aafc;
        case 0x20ab00u: goto label_20ab00;
        case 0x20ab04u: goto label_20ab04;
        case 0x20ab08u: goto label_20ab08;
        case 0x20ab0cu: goto label_20ab0c;
        case 0x20ab10u: goto label_20ab10;
        case 0x20ab14u: goto label_20ab14;
        case 0x20ab18u: goto label_20ab18;
        case 0x20ab1cu: goto label_20ab1c;
        case 0x20ab20u: goto label_20ab20;
        case 0x20ab24u: goto label_20ab24;
        case 0x20ab28u: goto label_20ab28;
        case 0x20ab2cu: goto label_20ab2c;
        case 0x20ab30u: goto label_20ab30;
        case 0x20ab34u: goto label_20ab34;
        case 0x20ab38u: goto label_20ab38;
        case 0x20ab3cu: goto label_20ab3c;
        case 0x20ab40u: goto label_20ab40;
        case 0x20ab44u: goto label_20ab44;
        case 0x20ab48u: goto label_20ab48;
        case 0x20ab4cu: goto label_20ab4c;
        case 0x20ab50u: goto label_20ab50;
        case 0x20ab54u: goto label_20ab54;
        case 0x20ab58u: goto label_20ab58;
        case 0x20ab5cu: goto label_20ab5c;
        case 0x20ab60u: goto label_20ab60;
        case 0x20ab64u: goto label_20ab64;
        case 0x20ab68u: goto label_20ab68;
        case 0x20ab6cu: goto label_20ab6c;
        case 0x20ab70u: goto label_20ab70;
        case 0x20ab74u: goto label_20ab74;
        case 0x20ab78u: goto label_20ab78;
        case 0x20ab7cu: goto label_20ab7c;
        case 0x20ab80u: goto label_20ab80;
        case 0x20ab84u: goto label_20ab84;
        case 0x20ab88u: goto label_20ab88;
        case 0x20ab8cu: goto label_20ab8c;
        case 0x20ab90u: goto label_20ab90;
        case 0x20ab94u: goto label_20ab94;
        case 0x20ab98u: goto label_20ab98;
        case 0x20ab9cu: goto label_20ab9c;
        case 0x20aba0u: goto label_20aba0;
        case 0x20aba4u: goto label_20aba4;
        case 0x20aba8u: goto label_20aba8;
        case 0x20abacu: goto label_20abac;
        case 0x20abb0u: goto label_20abb0;
        case 0x20abb4u: goto label_20abb4;
        case 0x20abb8u: goto label_20abb8;
        case 0x20abbcu: goto label_20abbc;
        case 0x20abc0u: goto label_20abc0;
        case 0x20abc4u: goto label_20abc4;
        case 0x20abc8u: goto label_20abc8;
        case 0x20abccu: goto label_20abcc;
        case 0x20abd0u: goto label_20abd0;
        case 0x20abd4u: goto label_20abd4;
        case 0x20abd8u: goto label_20abd8;
        case 0x20abdcu: goto label_20abdc;
        case 0x20abe0u: goto label_20abe0;
        case 0x20abe4u: goto label_20abe4;
        case 0x20abe8u: goto label_20abe8;
        case 0x20abecu: goto label_20abec;
        case 0x20abf0u: goto label_20abf0;
        case 0x20abf4u: goto label_20abf4;
        case 0x20abf8u: goto label_20abf8;
        case 0x20abfcu: goto label_20abfc;
        case 0x20ac00u: goto label_20ac00;
        case 0x20ac04u: goto label_20ac04;
        case 0x20ac08u: goto label_20ac08;
        case 0x20ac0cu: goto label_20ac0c;
        case 0x20ac10u: goto label_20ac10;
        case 0x20ac14u: goto label_20ac14;
        case 0x20ac18u: goto label_20ac18;
        case 0x20ac1cu: goto label_20ac1c;
        case 0x20ac20u: goto label_20ac20;
        case 0x20ac24u: goto label_20ac24;
        case 0x20ac28u: goto label_20ac28;
        case 0x20ac2cu: goto label_20ac2c;
        case 0x20ac30u: goto label_20ac30;
        case 0x20ac34u: goto label_20ac34;
        case 0x20ac38u: goto label_20ac38;
        case 0x20ac3cu: goto label_20ac3c;
        case 0x20ac40u: goto label_20ac40;
        case 0x20ac44u: goto label_20ac44;
        case 0x20ac48u: goto label_20ac48;
        case 0x20ac4cu: goto label_20ac4c;
        case 0x20ac50u: goto label_20ac50;
        case 0x20ac54u: goto label_20ac54;
        case 0x20ac58u: goto label_20ac58;
        case 0x20ac5cu: goto label_20ac5c;
        case 0x20ac60u: goto label_20ac60;
        case 0x20ac64u: goto label_20ac64;
        case 0x20ac68u: goto label_20ac68;
        case 0x20ac6cu: goto label_20ac6c;
        case 0x20ac70u: goto label_20ac70;
        case 0x20ac74u: goto label_20ac74;
        case 0x20ac78u: goto label_20ac78;
        case 0x20ac7cu: goto label_20ac7c;
        case 0x20ac80u: goto label_20ac80;
        case 0x20ac84u: goto label_20ac84;
        case 0x20ac88u: goto label_20ac88;
        case 0x20ac8cu: goto label_20ac8c;
        case 0x20ac90u: goto label_20ac90;
        case 0x20ac94u: goto label_20ac94;
        case 0x20ac98u: goto label_20ac98;
        case 0x20ac9cu: goto label_20ac9c;
        case 0x20aca0u: goto label_20aca0;
        case 0x20aca4u: goto label_20aca4;
        case 0x20aca8u: goto label_20aca8;
        case 0x20acacu: goto label_20acac;
        case 0x20acb0u: goto label_20acb0;
        case 0x20acb4u: goto label_20acb4;
        case 0x20acb8u: goto label_20acb8;
        case 0x20acbcu: goto label_20acbc;
        case 0x20acc0u: goto label_20acc0;
        case 0x20acc4u: goto label_20acc4;
        case 0x20acc8u: goto label_20acc8;
        case 0x20acccu: goto label_20accc;
        case 0x20acd0u: goto label_20acd0;
        case 0x20acd4u: goto label_20acd4;
        case 0x20acd8u: goto label_20acd8;
        case 0x20acdcu: goto label_20acdc;
        case 0x20ace0u: goto label_20ace0;
        case 0x20ace4u: goto label_20ace4;
        case 0x20ace8u: goto label_20ace8;
        case 0x20acecu: goto label_20acec;
        case 0x20acf0u: goto label_20acf0;
        case 0x20acf4u: goto label_20acf4;
        case 0x20acf8u: goto label_20acf8;
        case 0x20acfcu: goto label_20acfc;
        case 0x20ad00u: goto label_20ad00;
        case 0x20ad04u: goto label_20ad04;
        case 0x20ad08u: goto label_20ad08;
        case 0x20ad0cu: goto label_20ad0c;
        case 0x20ad10u: goto label_20ad10;
        case 0x20ad14u: goto label_20ad14;
        case 0x20ad18u: goto label_20ad18;
        case 0x20ad1cu: goto label_20ad1c;
        case 0x20ad20u: goto label_20ad20;
        case 0x20ad24u: goto label_20ad24;
        case 0x20ad28u: goto label_20ad28;
        case 0x20ad2cu: goto label_20ad2c;
        case 0x20ad30u: goto label_20ad30;
        case 0x20ad34u: goto label_20ad34;
        case 0x20ad38u: goto label_20ad38;
        case 0x20ad3cu: goto label_20ad3c;
        case 0x20ad40u: goto label_20ad40;
        case 0x20ad44u: goto label_20ad44;
        case 0x20ad48u: goto label_20ad48;
        case 0x20ad4cu: goto label_20ad4c;
        case 0x20ad50u: goto label_20ad50;
        case 0x20ad54u: goto label_20ad54;
        case 0x20ad58u: goto label_20ad58;
        case 0x20ad5cu: goto label_20ad5c;
        case 0x20ad60u: goto label_20ad60;
        case 0x20ad64u: goto label_20ad64;
        case 0x20ad68u: goto label_20ad68;
        case 0x20ad6cu: goto label_20ad6c;
        case 0x20ad70u: goto label_20ad70;
        case 0x20ad74u: goto label_20ad74;
        case 0x20ad78u: goto label_20ad78;
        case 0x20ad7cu: goto label_20ad7c;
        case 0x20ad80u: goto label_20ad80;
        case 0x20ad84u: goto label_20ad84;
        case 0x20ad88u: goto label_20ad88;
        case 0x20ad8cu: goto label_20ad8c;
        case 0x20ad90u: goto label_20ad90;
        case 0x20ad94u: goto label_20ad94;
        case 0x20ad98u: goto label_20ad98;
        case 0x20ad9cu: goto label_20ad9c;
        case 0x20ada0u: goto label_20ada0;
        case 0x20ada4u: goto label_20ada4;
        case 0x20ada8u: goto label_20ada8;
        case 0x20adacu: goto label_20adac;
        case 0x20adb0u: goto label_20adb0;
        case 0x20adb4u: goto label_20adb4;
        case 0x20adb8u: goto label_20adb8;
        case 0x20adbcu: goto label_20adbc;
        case 0x20adc0u: goto label_20adc0;
        case 0x20adc4u: goto label_20adc4;
        case 0x20adc8u: goto label_20adc8;
        case 0x20adccu: goto label_20adcc;
        case 0x20add0u: goto label_20add0;
        case 0x20add4u: goto label_20add4;
        case 0x20add8u: goto label_20add8;
        case 0x20addcu: goto label_20addc;
        case 0x20ade0u: goto label_20ade0;
        case 0x20ade4u: goto label_20ade4;
        case 0x20ade8u: goto label_20ade8;
        case 0x20adecu: goto label_20adec;
        case 0x20adf0u: goto label_20adf0;
        case 0x20adf4u: goto label_20adf4;
        case 0x20adf8u: goto label_20adf8;
        case 0x20adfcu: goto label_20adfc;
        case 0x20ae00u: goto label_20ae00;
        case 0x20ae04u: goto label_20ae04;
        case 0x20ae08u: goto label_20ae08;
        case 0x20ae0cu: goto label_20ae0c;
        case 0x20ae10u: goto label_20ae10;
        case 0x20ae14u: goto label_20ae14;
        case 0x20ae18u: goto label_20ae18;
        case 0x20ae1cu: goto label_20ae1c;
        case 0x20ae20u: goto label_20ae20;
        case 0x20ae24u: goto label_20ae24;
        case 0x20ae28u: goto label_20ae28;
        case 0x20ae2cu: goto label_20ae2c;
        case 0x20ae30u: goto label_20ae30;
        case 0x20ae34u: goto label_20ae34;
        case 0x20ae38u: goto label_20ae38;
        case 0x20ae3cu: goto label_20ae3c;
        case 0x20ae40u: goto label_20ae40;
        case 0x20ae44u: goto label_20ae44;
        case 0x20ae48u: goto label_20ae48;
        case 0x20ae4cu: goto label_20ae4c;
        case 0x20ae50u: goto label_20ae50;
        case 0x20ae54u: goto label_20ae54;
        case 0x20ae58u: goto label_20ae58;
        case 0x20ae5cu: goto label_20ae5c;
        case 0x20ae60u: goto label_20ae60;
        case 0x20ae64u: goto label_20ae64;
        case 0x20ae68u: goto label_20ae68;
        case 0x20ae6cu: goto label_20ae6c;
        case 0x20ae70u: goto label_20ae70;
        case 0x20ae74u: goto label_20ae74;
        case 0x20ae78u: goto label_20ae78;
        case 0x20ae7cu: goto label_20ae7c;
        case 0x20ae80u: goto label_20ae80;
        case 0x20ae84u: goto label_20ae84;
        case 0x20ae88u: goto label_20ae88;
        case 0x20ae8cu: goto label_20ae8c;
        case 0x20ae90u: goto label_20ae90;
        case 0x20ae94u: goto label_20ae94;
        case 0x20ae98u: goto label_20ae98;
        case 0x20ae9cu: goto label_20ae9c;
        case 0x20aea0u: goto label_20aea0;
        case 0x20aea4u: goto label_20aea4;
        case 0x20aea8u: goto label_20aea8;
        case 0x20aeacu: goto label_20aeac;
        case 0x20aeb0u: goto label_20aeb0;
        case 0x20aeb4u: goto label_20aeb4;
        case 0x20aeb8u: goto label_20aeb8;
        case 0x20aebcu: goto label_20aebc;
        case 0x20aec0u: goto label_20aec0;
        case 0x20aec4u: goto label_20aec4;
        case 0x20aec8u: goto label_20aec8;
        case 0x20aeccu: goto label_20aecc;
        case 0x20aed0u: goto label_20aed0;
        case 0x20aed4u: goto label_20aed4;
        case 0x20aed8u: goto label_20aed8;
        case 0x20aedcu: goto label_20aedc;
        case 0x20aee0u: goto label_20aee0;
        case 0x20aee4u: goto label_20aee4;
        default: break;
    }

    ctx->pc = 0x20aa10u;

label_20aa10:
    // 0x20aa10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20aa10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_20aa14:
    // 0x20aa14: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x20aa14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_20aa18:
    // 0x20aa18: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x20aa18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_20aa1c:
    // 0x20aa1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20aa1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20aa20:
    // 0x20aa20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20aa20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20aa24:
    // 0x20aa24: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x20aa24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_20aa28:
    // 0x20aa28: 0xc082990  jal         func_20A640
label_20aa2c:
    if (ctx->pc == 0x20AA2Cu) {
        ctx->pc = 0x20AA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AA28u;
        // 0x20aa2c: 0x8e3201a4  lw          $s2, 0x1A4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 420)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AA30u;
        goto label_20aa30;
    }
    ctx->pc = 0x20AA28u;
    SET_GPR_U32(ctx, 31, 0x20AA30u);
    ctx->pc = 0x20AA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AA28u;
    // 0x20aa2c: 0x8e3201a4  lw          $s2, 0x1A4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 420)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A640u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x20A640u, 0x20AA28u, 0x20AA30u)) {
        return;
    }
    ctx->pc = 0x20AA30u;
label_20aa30:
    // 0x20aa30: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x20aa30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_20aa34:
    // 0x20aa34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20aa34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20aa38:
    // 0x20aa38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20aa38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20aa3c:
    // 0x20aa3c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20aa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20aa40:
    // 0x20aa40: 0x40f809  jalr        $v0
label_20aa44:
    if (ctx->pc == 0x20AA44u) {
        ctx->pc = 0x20AA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AA40u;
        // 0x20aa44: 0x24060580  addiu       $a2, $zero, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AA48u;
        goto label_20aa48;
    }
    ctx->pc = 0x20AA40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20AA48u);
        ctx->pc = 0x20AA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AA40u;
        // 0x20aa44: 0x24060580  addiu       $a2, $zero, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1408));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AA40u, 0x20AA48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20AA48u;
label_20aa48:
    // 0x20aa48: 0x24500100  addiu       $s0, $v0, 0x100
    ctx->pc = 0x20aa48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
label_20aa4c:
    // 0x20aa4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20aa4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20aa50:
    // 0x20aa50: 0xae300144  sw          $s0, 0x144($s1)
    ctx->pc = 0x20aa50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 324), GPR_U32(ctx, 16));
label_20aa54:
    // 0x20aa54: 0x2604ff00  addiu       $a0, $s0, -0x100
    ctx->pc = 0x20aa54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967040));
label_20aa58:
    // 0x20aa58: 0xc0c493d  jal         func_3124F4
label_20aa5c:
    if (ctx->pc == 0x20AA5Cu) {
        ctx->pc = 0x20AA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AA58u;
        // 0x20aa5c: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AA60u;
        goto label_20aa60;
    }
    ctx->pc = 0x20AA58u;
    SET_GPR_U32(ctx, 31, 0x20AA60u);
    ctx->pc = 0x20AA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AA58u;
    // 0x20aa5c: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x20AA58u, 0x20AA60u)) {
        return;
    }
    ctx->pc = 0x20AA60u;
label_20aa60:
    // 0x20aa60: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x20aa60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_20aa64:
    // 0x20aa64: 0x260200ff  addiu       $v0, $s0, 0xFF
    ctx->pc = 0x20aa64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 255));
label_20aa68:
    // 0x20aa68: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x20aa68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
label_20aa6c:
    // 0x20aa6c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x20aa6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_20aa70:
    // 0x20aa70: 0x0  nop
    ctx->pc = 0x20aa70u;
    // NOP
label_20aa74:
    // 0x20aa74: 0x0  nop
    ctx->pc = 0x20aa74u;
    // NOP
label_20aa78:
    // 0x20aa78: 0x481fffb  bgez        $a0, . + 4 + (-0x5 << 2)
label_20aa7c:
    if (ctx->pc == 0x20AA7Cu) {
        ctx->pc = 0x20AA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AA78u;
        // 0x20aa7c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AA80u;
        goto label_20aa80;
    }
    ctx->pc = 0x20AA78u;
    {
        const bool branch_taken_0x20aa78 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x20AA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AA78u;
        // 0x20aa7c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aa78) {
            ctx->pc = 0x20AA68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20aa68;
        }
    }
    ctx->pc = 0x20AA80u;
label_20aa80:
    // 0x20aa80: 0x26100080  addiu       $s0, $s0, 0x80
    ctx->pc = 0x20aa80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_20aa84:
    // 0x20aa84: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x20aa84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_20aa88:
    // 0x20aa88: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x20aa88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_20aa8c:
    // 0x20aa8c: 0x0  nop
    ctx->pc = 0x20aa8cu;
    // NOP
label_20aa90:
    // 0x20aa90: 0x2041821  addu        $v1, $s0, $a0
    ctx->pc = 0x20aa90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_20aa94:
    // 0x20aa94: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x20aa94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_20aa98:
    // 0x20aa98: 0x28820200  slti        $v0, $a0, 0x200
    ctx->pc = 0x20aa98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)512) ? 1 : 0);
label_20aa9c:
    // 0x20aa9c: 0x0  nop
    ctx->pc = 0x20aa9cu;
    // NOP
label_20aaa0:
    // 0x20aaa0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_20aaa4:
    if (ctx->pc == 0x20AAA4u) {
        ctx->pc = 0x20AAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AAA0u;
        // 0x20aaa4: 0xa0650000  sb          $a1, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AAA8u;
        goto label_20aaa8;
    }
    ctx->pc = 0x20AAA0u;
    {
        const bool branch_taken_0x20aaa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20AAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AAA0u;
        // 0x20aaa4: 0xa0650000  sb          $a1, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aaa0) {
            ctx->pc = 0x20AA90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20aa90;
        }
    }
    ctx->pc = 0x20AAA8u;
label_20aaa8:
    // 0x20aaa8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20aaa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20aaac:
    // 0x20aaac: 0x26040200  addiu       $a0, $s0, 0x200
    ctx->pc = 0x20aaacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
label_20aab0:
    // 0x20aab0: 0xc0c493d  jal         func_3124F4
label_20aab4:
    if (ctx->pc == 0x20AAB4u) {
        ctx->pc = 0x20AAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AAB0u;
        // 0x20aab4: 0x24060180  addiu       $a2, $zero, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AAB8u;
        goto label_20aab8;
    }
    ctx->pc = 0x20AAB0u;
    SET_GPR_U32(ctx, 31, 0x20AAB8u);
    ctx->pc = 0x20AAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AAB0u;
    // 0x20aab4: 0x24060180  addiu       $a2, $zero, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x20AAB0u, 0x20AAB8u)) {
        return;
    }
    ctx->pc = 0x20AAB8u;
label_20aab8:
    // 0x20aab8: 0x8e250144  lw          $a1, 0x144($s1)
    ctx->pc = 0x20aab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
label_20aabc:
    // 0x20aabc: 0x26030380  addiu       $v1, $s0, 0x380
    ctx->pc = 0x20aabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 896));
label_20aac0:
    // 0x20aac0: 0xa31025  or          $v0, $a1, $v1
    ctx->pc = 0x20aac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_20aac4:
    // 0x20aac4: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x20aac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_20aac8:
    // 0x20aac8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_20aacc:
    if (ctx->pc == 0x20AACCu) {
        ctx->pc = 0x20AACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AAC8u;
        // 0x20aacc: 0x24a20080  addiu       $v0, $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AAD0u;
        goto label_20aad0;
    }
    ctx->pc = 0x20AAC8u;
    {
        const bool branch_taken_0x20aac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AAC8u;
        // 0x20aacc: 0x24a20080  addiu       $v0, $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aac8) {
            ctx->pc = 0x20AB24u;
            goto label_20ab24;
        }
    }
    ctx->pc = 0x20AAD0u;
label_20aad0:
    // 0x20aad0: 0x68a40007  ldl         $a0, 0x7($a1)
    ctx->pc = 0x20aad0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_20aad4:
    // 0x20aad4: 0x6ca40000  ldr         $a0, 0x0($a1)
    ctx->pc = 0x20aad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_20aad8:
    // 0x20aad8: 0x68a6000f  ldl         $a2, 0xF($a1)
    ctx->pc = 0x20aad8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_20aadc:
    // 0x20aadc: 0x6ca60008  ldr         $a2, 0x8($a1)
    ctx->pc = 0x20aadcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_20aae0:
    // 0x20aae0: 0x68a70017  ldl         $a3, 0x17($a1)
    ctx->pc = 0x20aae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_20aae4:
    // 0x20aae4: 0x6ca70010  ldr         $a3, 0x10($a1)
    ctx->pc = 0x20aae4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_20aae8:
    // 0x20aae8: 0x68a8001f  ldl         $t0, 0x1F($a1)
    ctx->pc = 0x20aae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_20aaec:
    // 0x20aaec: 0x6ca80018  ldr         $t0, 0x18($a1)
    ctx->pc = 0x20aaecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_20aaf0:
    // 0x20aaf0: 0xb0640007  sdl         $a0, 0x7($v1)
    ctx->pc = 0x20aaf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_20aaf4:
    // 0x20aaf4: 0xb4640000  sdr         $a0, 0x0($v1)
    ctx->pc = 0x20aaf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_20aaf8:
    // 0x20aaf8: 0xb066000f  sdl         $a2, 0xF($v1)
    ctx->pc = 0x20aaf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_20aafc:
    // 0x20aafc: 0xb4660008  sdr         $a2, 0x8($v1)
    ctx->pc = 0x20aafcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_20ab00:
    // 0x20ab00: 0xb0670017  sdl         $a3, 0x17($v1)
    ctx->pc = 0x20ab00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_20ab04:
    // 0x20ab04: 0xb4670010  sdr         $a3, 0x10($v1)
    ctx->pc = 0x20ab04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_20ab08:
    // 0x20ab08: 0xb068001f  sdl         $t0, 0x1F($v1)
    ctx->pc = 0x20ab08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_20ab0c:
    // 0x20ab0c: 0xb4680018  sdr         $t0, 0x18($v1)
    ctx->pc = 0x20ab0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_20ab10:
    // 0x20ab10: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x20ab10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_20ab14:
    // 0x20ab14: 0x14a2ffee  bne         $a1, $v0, . + 4 + (-0x12 << 2)
label_20ab18:
    if (ctx->pc == 0x20AB18u) {
        ctx->pc = 0x20AB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AB14u;
        // 0x20ab18: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AB1Cu;
        goto label_20ab1c;
    }
    ctx->pc = 0x20AB14u;
    {
        const bool branch_taken_0x20ab14 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x20AB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AB14u;
        // 0x20ab18: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ab14) {
            ctx->pc = 0x20AAD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20aad0;
        }
    }
    ctx->pc = 0x20AB1Cu;
label_20ab1c:
    // 0x20ab1c: 0x1000000d  b           . + 4 + (0xD << 2)
label_20ab20:
    if (ctx->pc == 0x20AB20u) {
        ctx->pc = 0x20AB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AB1Cu;
        // 0x20ab20: 0x9e240070  lwu         $a0, 0x70($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AB24u;
        goto label_20ab24;
    }
    ctx->pc = 0x20AB1Cu;
    {
        const bool branch_taken_0x20ab1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AB1Cu;
        // 0x20ab20: 0x9e240070  lwu         $a0, 0x70($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ab1c) {
            ctx->pc = 0x20AB54u;
            goto label_20ab54;
        }
    }
    ctx->pc = 0x20AB24u;
label_20ab24:
    // 0x20ab24: 0xdca40000  ld          $a0, 0x0($a1)
    ctx->pc = 0x20ab24u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_20ab28:
    // 0x20ab28: 0xdca60008  ld          $a2, 0x8($a1)
    ctx->pc = 0x20ab28u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 5), 8)));
label_20ab2c:
    // 0x20ab2c: 0xdca70010  ld          $a3, 0x10($a1)
    ctx->pc = 0x20ab2cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 16)));
label_20ab30:
    // 0x20ab30: 0xdca80018  ld          $t0, 0x18($a1)
    ctx->pc = 0x20ab30u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 24)));
label_20ab34:
    // 0x20ab34: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x20ab34u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
label_20ab38:
    // 0x20ab38: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x20ab38u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
label_20ab3c:
    // 0x20ab3c: 0xfc670010  sd          $a3, 0x10($v1)
    ctx->pc = 0x20ab3cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 7));
label_20ab40:
    // 0x20ab40: 0xfc680018  sd          $t0, 0x18($v1)
    ctx->pc = 0x20ab40u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 8));
label_20ab44:
    // 0x20ab44: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x20ab44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_20ab48:
    // 0x20ab48: 0x14a2fff6  bne         $a1, $v0, . + 4 + (-0xA << 2)
label_20ab4c:
    if (ctx->pc == 0x20AB4Cu) {
        ctx->pc = 0x20AB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AB48u;
        // 0x20ab4c: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AB50u;
        goto label_20ab50;
    }
    ctx->pc = 0x20AB48u;
    {
        const bool branch_taken_0x20ab48 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x20AB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AB48u;
        // 0x20ab4c: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ab48) {
            ctx->pc = 0x20AB24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20ab24;
        }
    }
    ctx->pc = 0x20AB50u;
label_20ab50:
    // 0x20ab50: 0x9e240070  lwu         $a0, 0x70($s1)
    ctx->pc = 0x20ab50u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_20ab54:
    // 0x20ab54: 0xc07e4e4  jal         func_1F9390
label_20ab58:
    if (ctx->pc == 0x20AB58u) {
        ctx->pc = 0x20AB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AB54u;
        // 0x20ab58: 0x8e250078  lw          $a1, 0x78($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AB5Cu;
        goto label_20ab5c;
    }
    ctx->pc = 0x20AB54u;
    SET_GPR_U32(ctx, 31, 0x20AB5Cu);
    ctx->pc = 0x20AB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AB54u;
    // 0x20ab58: 0x8e250078  lw          $a1, 0x78($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x20AB54u, 0x20AB5Cu)) {
        return;
    }
    ctx->pc = 0x20AB5Cu;
label_20ab5c:
    // 0x20ab5c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x20ab5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_20ab60:
    // 0x20ab60: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x20ab60u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_20ab64:
    // 0x20ab64: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x20ab64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_20ab68:
    // 0x20ab68: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x20ab68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_20ab6c:
    // 0x20ab6c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_20ab70:
    if (ctx->pc == 0x20AB70u) {
        ctx->pc = 0x20AB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AB6Cu;
        // 0x20ab70: 0x24030046  addiu       $v1, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AB74u;
        goto label_20ab74;
    }
    ctx->pc = 0x20AB6Cu;
    {
        const bool branch_taken_0x20ab6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20AB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AB6Cu;
        // 0x20ab70: 0x24030046  addiu       $v1, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ab6c) {
            ctx->pc = 0x20AB8Cu;
            goto label_20ab8c;
        }
    }
    ctx->pc = 0x20AB74u;
label_20ab74:
    // 0x20ab74: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x20ab74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20ab78:
    // 0x20ab78: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x20ab78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_20ab7c:
    // 0x20ab7c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x20ab7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20ab80:
    // 0x20ab80: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20ab80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20ab84:
    // 0x20ab84: 0x60f809  jalr        $v1
label_20ab88:
    if (ctx->pc == 0x20AB88u) {
        ctx->pc = 0x20AB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AB84u;
        // 0x20ab88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AB8Cu;
        goto label_20ab8c;
    }
    ctx->pc = 0x20AB84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20AB8Cu);
        ctx->pc = 0x20AB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AB84u;
        // 0x20ab88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AB84u, 0x20AB8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20AB8Cu;
label_20ab8c:
    // 0x20ab8c: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x20ab8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_20ab90:
    // 0x20ab90: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x20ab90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_20ab94:
    // 0x20ab94: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
label_20ab98:
    if (ctx->pc == 0x20AB98u) {
        ctx->pc = 0x20AB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AB94u;
        // 0x20ab98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AB9Cu;
        goto label_20ab9c;
    }
    ctx->pc = 0x20AB94u;
    {
        const bool branch_taken_0x20ab94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20AB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AB94u;
        // 0x20ab98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ab94) {
            ctx->pc = 0x20AC64u;
            goto label_20ac64;
        }
    }
    ctx->pc = 0x20AB9Cu;
label_20ab9c:
    // 0x20ab9c: 0x8e22012c  lw          $v0, 0x12C($s1)
    ctx->pc = 0x20ab9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 300)));
label_20aba0:
    // 0x20aba0: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
label_20aba4:
    if (ctx->pc == 0x20ABA4u) {
        ctx->pc = 0x20ABA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ABA0u;
        // 0x20aba4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ABA8u;
        goto label_20aba8;
    }
    ctx->pc = 0x20ABA0u;
    {
        const bool branch_taken_0x20aba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20ABA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ABA0u;
        // 0x20aba4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aba0) {
            ctx->pc = 0x20AC64u;
            goto label_20ac64;
        }
    }
    ctx->pc = 0x20ABA8u;
label_20aba8:
    // 0x20aba8: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x20aba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_20abac:
    // 0x20abac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x20abacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20abb0:
    // 0x20abb0: 0x1462002c  bne         $v1, $v0, . + 4 + (0x2C << 2)
label_20abb4:
    if (ctx->pc == 0x20ABB4u) {
        ctx->pc = 0x20ABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ABB0u;
        // 0x20abb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ABB8u;
        goto label_20abb8;
    }
    ctx->pc = 0x20ABB0u;
    {
        const bool branch_taken_0x20abb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20ABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ABB0u;
        // 0x20abb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20abb0) {
            ctx->pc = 0x20AC64u;
            goto label_20ac64;
        }
    }
    ctx->pc = 0x20ABB8u;
label_20abb8:
    // 0x20abb8: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x20abb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_20abbc:
    // 0x20abbc: 0x14430029  bne         $v0, $v1, . + 4 + (0x29 << 2)
label_20abc0:
    if (ctx->pc == 0x20ABC0u) {
        ctx->pc = 0x20ABC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ABBCu;
        // 0x20abc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ABC4u;
        goto label_20abc4;
    }
    ctx->pc = 0x20ABBCu;
    {
        const bool branch_taken_0x20abbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x20ABC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ABBCu;
        // 0x20abc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20abbc) {
            ctx->pc = 0x20AC64u;
            goto label_20ac64;
        }
    }
    ctx->pc = 0x20ABC4u;
label_20abc4:
    // 0x20abc4: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x20abc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_20abc8:
    // 0x20abc8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20abc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20abcc:
    // 0x20abcc: 0x14820025  bne         $a0, $v0, . + 4 + (0x25 << 2)
label_20abd0:
    if (ctx->pc == 0x20ABD0u) {
        ctx->pc = 0x20ABD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ABCCu;
        // 0x20abd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ABD4u;
        goto label_20abd4;
    }
    ctx->pc = 0x20ABCCu;
    {
        const bool branch_taken_0x20abcc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x20ABD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ABCCu;
        // 0x20abd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20abcc) {
            ctx->pc = 0x20AC64u;
            goto label_20ac64;
        }
    }
    ctx->pc = 0x20ABD4u;
label_20abd4:
    // 0x20abd4: 0x8e230078  lw          $v1, 0x78($s1)
    ctx->pc = 0x20abd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_20abd8:
    // 0x20abd8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x20abd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20abdc:
    // 0x20abdc: 0x14620021  bne         $v1, $v0, . + 4 + (0x21 << 2)
label_20abe0:
    if (ctx->pc == 0x20ABE0u) {
        ctx->pc = 0x20ABE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ABDCu;
        // 0x20abe0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ABE4u;
        goto label_20abe4;
    }
    ctx->pc = 0x20ABDCu;
    {
        const bool branch_taken_0x20abdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20ABE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ABDCu;
        // 0x20abe0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20abdc) {
            ctx->pc = 0x20AC64u;
            goto label_20ac64;
        }
    }
    ctx->pc = 0x20ABE4u;
label_20abe4:
    // 0x20abe4: 0x8e2300d8  lw          $v1, 0xD8($s1)
    ctx->pc = 0x20abe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_20abe8:
    // 0x20abe8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x20abe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_20abec:
    // 0x20abec: 0x1444001d  bne         $v0, $a0, . + 4 + (0x1D << 2)
label_20abf0:
    if (ctx->pc == 0x20ABF0u) {
        ctx->pc = 0x20ABF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ABECu;
        // 0x20abf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ABF4u;
        goto label_20abf4;
    }
    ctx->pc = 0x20ABECu;
    {
        const bool branch_taken_0x20abec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x20ABF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ABECu;
        // 0x20abf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20abec) {
            ctx->pc = 0x20AC64u;
            goto label_20ac64;
        }
    }
    ctx->pc = 0x20ABF4u;
label_20abf4:
    // 0x20abf4: 0x8c64005c  lw          $a0, 0x5C($v1)
    ctx->pc = 0x20abf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_20abf8:
    // 0x20abf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20abf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20abfc:
    // 0x20abfc: 0x14820019  bne         $a0, $v0, . + 4 + (0x19 << 2)
label_20ac00:
    if (ctx->pc == 0x20AC00u) {
        ctx->pc = 0x20AC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ABFCu;
        // 0x20ac00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AC04u;
        goto label_20ac04;
    }
    ctx->pc = 0x20ABFCu;
    {
        const bool branch_taken_0x20abfc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x20AC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ABFCu;
        // 0x20ac00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20abfc) {
            ctx->pc = 0x20AC64u;
            goto label_20ac64;
        }
    }
    ctx->pc = 0x20AC04u;
label_20ac04:
    // 0x20ac04: 0x8c6500b0  lw          $a1, 0xB0($v1)
    ctx->pc = 0x20ac04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
label_20ac08:
    // 0x20ac08: 0x54a40017  bnel        $a1, $a0, . + 4 + (0x17 << 2)
label_20ac0c:
    if (ctx->pc == 0x20AC0Cu) {
        ctx->pc = 0x20AC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC08u;
        // 0x20ac0c: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AC10u;
        goto label_20ac10;
    }
    ctx->pc = 0x20AC08u;
    {
        const bool branch_taken_0x20ac08 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x20ac08) {
            ctx->pc = 0x20AC0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AC08u;
            // 0x20ac0c: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AC68u;
            goto label_20ac68;
        }
    }
    ctx->pc = 0x20AC10u;
label_20ac10:
    // 0x20ac10: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x20ac10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_20ac14:
    // 0x20ac14: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x20ac14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_20ac18:
    // 0x20ac18: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_20ac1c:
    if (ctx->pc == 0x20AC1Cu) {
        ctx->pc = 0x20AC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC18u;
        // 0x20ac1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AC20u;
        goto label_20ac20;
    }
    ctx->pc = 0x20AC18u;
    {
        const bool branch_taken_0x20ac18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC18u;
        // 0x20ac1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ac18) {
            ctx->pc = 0x20AC64u;
            goto label_20ac64;
        }
    }
    ctx->pc = 0x20AC20u;
label_20ac20:
    // 0x20ac20: 0x8c640060  lw          $a0, 0x60($v1)
    ctx->pc = 0x20ac20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_20ac24:
    // 0x20ac24: 0x54850010  bnel        $a0, $a1, . + 4 + (0x10 << 2)
label_20ac28:
    if (ctx->pc == 0x20AC28u) {
        ctx->pc = 0x20AC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC24u;
        // 0x20ac28: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AC2Cu;
        goto label_20ac2c;
    }
    ctx->pc = 0x20AC24u;
    {
        const bool branch_taken_0x20ac24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x20ac24) {
            ctx->pc = 0x20AC28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AC24u;
            // 0x20ac28: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AC68u;
            goto label_20ac68;
        }
    }
    ctx->pc = 0x20AC2Cu;
label_20ac2c:
    // 0x20ac2c: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x20ac2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_20ac30:
    // 0x20ac30: 0x1444000c  bne         $v0, $a0, . + 4 + (0xC << 2)
label_20ac34:
    if (ctx->pc == 0x20AC34u) {
        ctx->pc = 0x20AC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC30u;
        // 0x20ac34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AC38u;
        goto label_20ac38;
    }
    ctx->pc = 0x20AC30u;
    {
        const bool branch_taken_0x20ac30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x20AC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC30u;
        // 0x20ac34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ac30) {
            ctx->pc = 0x20AC64u;
            goto label_20ac64;
        }
    }
    ctx->pc = 0x20AC38u;
label_20ac38:
    // 0x20ac38: 0x8c650024  lw          $a1, 0x24($v1)
    ctx->pc = 0x20ac38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_20ac3c:
    // 0x20ac3c: 0x8e22013c  lw          $v0, 0x13C($s1)
    ctx->pc = 0x20ac3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
label_20ac40:
    // 0x20ac40: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
label_20ac44:
    if (ctx->pc == 0x20AC44u) {
        ctx->pc = 0x20AC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC40u;
        // 0x20ac44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AC48u;
        goto label_20ac48;
    }
    ctx->pc = 0x20AC40u;
    {
        const bool branch_taken_0x20ac40 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x20AC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC40u;
        // 0x20ac44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ac40) {
            ctx->pc = 0x20AC64u;
            goto label_20ac64;
        }
    }
    ctx->pc = 0x20AC48u;
label_20ac48:
    // 0x20ac48: 0x8c640078  lw          $a0, 0x78($v1)
    ctx->pc = 0x20ac48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
label_20ac4c:
    // 0x20ac4c: 0x54850006  bnel        $a0, $a1, . + 4 + (0x6 << 2)
label_20ac50:
    if (ctx->pc == 0x20AC50u) {
        ctx->pc = 0x20AC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC4Cu;
        // 0x20ac50: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AC54u;
        goto label_20ac54;
    }
    ctx->pc = 0x20AC4Cu;
    {
        const bool branch_taken_0x20ac4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x20ac4c) {
            ctx->pc = 0x20AC50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AC4Cu;
            // 0x20ac50: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AC68u;
            goto label_20ac68;
        }
    }
    ctx->pc = 0x20AC54u;
label_20ac54:
    // 0x20ac54: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x20ac54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_20ac58:
    // 0x20ac58: 0x14440002  bne         $v0, $a0, . + 4 + (0x2 << 2)
label_20ac5c:
    if (ctx->pc == 0x20AC5Cu) {
        ctx->pc = 0x20AC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC58u;
        // 0x20ac5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AC60u;
        goto label_20ac60;
    }
    ctx->pc = 0x20AC58u;
    {
        const bool branch_taken_0x20ac58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x20AC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC58u;
        // 0x20ac5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ac58) {
            ctx->pc = 0x20AC64u;
            goto label_20ac64;
        }
    }
    ctx->pc = 0x20AC60u;
label_20ac60:
    // 0x20ac60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20ac60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20ac64:
    // 0x20ac64: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x20ac64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_20ac68:
    // 0x20ac68: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x20ac68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_20ac6c:
    // 0x20ac6c: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x20ac6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
label_20ac70:
    // 0x20ac70: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x20ac70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_20ac74:
    // 0x20ac74: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_20ac78:
    if (ctx->pc == 0x20AC78u) {
        ctx->pc = 0x20AC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC74u;
        // 0x20ac78: 0xae200064  sw          $zero, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AC7Cu;
        goto label_20ac7c;
    }
    ctx->pc = 0x20AC74u;
    {
        const bool branch_taken_0x20ac74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ac74) {
            ctx->pc = 0x20AC78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AC74u;
            // 0x20ac78: 0xae200064  sw          $zero, 0x64($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AC8Cu;
            goto label_20ac8c;
        }
    }
    ctx->pc = 0x20AC7Cu;
label_20ac7c:
    // 0x20ac7c: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x20ac7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_20ac80:
    // 0x20ac80: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_20ac84:
    if (ctx->pc == 0x20AC84u) {
        ctx->pc = 0x20AC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC80u;
        // 0x20ac84: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AC88u;
        goto label_20ac88;
    }
    ctx->pc = 0x20AC80u;
    {
        const bool branch_taken_0x20ac80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20ac80) {
            ctx->pc = 0x20AC84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AC80u;
            // 0x20ac84: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AC98u;
            goto label_20ac98;
        }
    }
    ctx->pc = 0x20AC88u;
label_20ac88:
    // 0x20ac88: 0xae200064  sw          $zero, 0x64($s1)
    ctx->pc = 0x20ac88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 0));
label_20ac8c:
    // 0x20ac8c: 0xae200068  sw          $zero, 0x68($s1)
    ctx->pc = 0x20ac8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
label_20ac90:
    // 0x20ac90: 0xae20006c  sw          $zero, 0x6C($s1)
    ctx->pc = 0x20ac90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 0));
label_20ac94:
    // 0x20ac94: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x20ac94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_20ac98:
    // 0x20ac98: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_20ac9c:
    if (ctx->pc == 0x20AC9Cu) {
        ctx->pc = 0x20AC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC98u;
        // 0x20ac9c: 0x8e220044  lw          $v0, 0x44($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ACA0u;
        goto label_20aca0;
    }
    ctx->pc = 0x20AC98u;
    {
        const bool branch_taken_0x20ac98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC98u;
        // 0x20ac9c: 0x8e220044  lw          $v0, 0x44($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ac98) {
            ctx->pc = 0x20AD4Cu;
            goto label_20ad4c;
        }
    }
    ctx->pc = 0x20ACA0u;
label_20aca0:
    // 0x20aca0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_20aca4:
    if (ctx->pc == 0x20ACA4u) {
        ctx->pc = 0x20ACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ACA0u;
        // 0x20aca4: 0x2403002f  addiu       $v1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ACA8u;
        goto label_20aca8;
    }
    ctx->pc = 0x20ACA0u;
    {
        const bool branch_taken_0x20aca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ACA0u;
        // 0x20aca4: 0x2403002f  addiu       $v1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aca0) {
            ctx->pc = 0x20ACC0u;
            goto label_20acc0;
        }
    }
    ctx->pc = 0x20ACA8u;
label_20aca8:
    // 0x20aca8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x20aca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20acac:
    // 0x20acac: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x20acacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_20acb0:
    // 0x20acb0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x20acb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20acb4:
    // 0x20acb4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20acb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20acb8:
    // 0x20acb8: 0x60f809  jalr        $v1
label_20acbc:
    if (ctx->pc == 0x20ACBCu) {
        ctx->pc = 0x20ACBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ACB8u;
        // 0x20acbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ACC0u;
        goto label_20acc0;
    }
    ctx->pc = 0x20ACB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20ACC0u);
        ctx->pc = 0x20ACBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ACB8u;
        // 0x20acbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20ACB8u, 0x20ACC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20ACC0u;
label_20acc0:
    // 0x20acc0: 0x8e230078  lw          $v1, 0x78($s1)
    ctx->pc = 0x20acc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_20acc4:
    // 0x20acc4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x20acc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20acc8:
    // 0x20acc8: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_20accc:
    if (ctx->pc == 0x20ACCCu) {
        ctx->pc = 0x20ACCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ACC8u;
        // 0x20accc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ACD0u;
        goto label_20acd0;
    }
    ctx->pc = 0x20ACC8u;
    {
        const bool branch_taken_0x20acc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20ACCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ACC8u;
        // 0x20accc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20acc8) {
            ctx->pc = 0x20ACE4u;
            goto label_20ace4;
        }
    }
    ctx->pc = 0x20ACD0u;
label_20acd0:
    // 0x20acd0: 0xae200068  sw          $zero, 0x68($s1)
    ctx->pc = 0x20acd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
label_20acd4:
    // 0x20acd4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x20acd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_20acd8:
    // 0x20acd8: 0xae20006c  sw          $zero, 0x6C($s1)
    ctx->pc = 0x20acd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 0));
label_20acdc:
    // 0x20acdc: 0x1000000c  b           . + 4 + (0xC << 2)
label_20ace0:
    if (ctx->pc == 0x20ACE0u) {
        ctx->pc = 0x20ACE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ACDCu;
        // 0x20ace0: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ACE4u;
        goto label_20ace4;
    }
    ctx->pc = 0x20ACDCu;
    {
        const bool branch_taken_0x20acdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ACE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ACDCu;
        // 0x20ace0: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20acdc) {
            ctx->pc = 0x20AD10u;
            goto label_20ad10;
        }
    }
    ctx->pc = 0x20ACE4u;
label_20ace4:
    // 0x20ace4: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x20ace4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_20ace8:
    // 0x20ace8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_20acec:
    if (ctx->pc == 0x20ACECu) {
        ctx->pc = 0x20ACECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ACE8u;
        // 0x20acec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ACF0u;
        goto label_20acf0;
    }
    ctx->pc = 0x20ACE8u;
    {
        const bool branch_taken_0x20ace8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ACECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ACE8u;
        // 0x20acec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ace8) {
            ctx->pc = 0x20ACF8u;
            goto label_20acf8;
        }
    }
    ctx->pc = 0x20ACF0u;
label_20acf0:
    // 0x20acf0: 0x10000007  b           . + 4 + (0x7 << 2)
label_20acf4:
    if (ctx->pc == 0x20ACF4u) {
        ctx->pc = 0x20ACF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ACF0u;
        // 0x20acf4: 0xae220068  sw          $v0, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ACF8u;
        goto label_20acf8;
    }
    ctx->pc = 0x20ACF0u;
    {
        const bool branch_taken_0x20acf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ACF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ACF0u;
        // 0x20acf4: 0xae220068  sw          $v0, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20acf0) {
            ctx->pc = 0x20AD10u;
            goto label_20ad10;
        }
    }
    ctx->pc = 0x20ACF8u;
label_20acf8:
    // 0x20acf8: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x20acf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_20acfc:
    // 0x20acfc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_20ad00:
    if (ctx->pc == 0x20AD00u) {
        ctx->pc = 0x20AD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ACFCu;
        // 0x20ad00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AD04u;
        goto label_20ad04;
    }
    ctx->pc = 0x20ACFCu;
    {
        const bool branch_taken_0x20acfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ACFCu;
        // 0x20ad00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20acfc) {
            ctx->pc = 0x20AD0Cu;
            goto label_20ad0c;
        }
    }
    ctx->pc = 0x20AD04u;
label_20ad04:
    // 0x20ad04: 0x10000002  b           . + 4 + (0x2 << 2)
label_20ad08:
    if (ctx->pc == 0x20AD08u) {
        ctx->pc = 0x20AD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD04u;
        // 0x20ad08: 0xae22006c  sw          $v0, 0x6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AD0Cu;
        goto label_20ad0c;
    }
    ctx->pc = 0x20AD04u;
    {
        const bool branch_taken_0x20ad04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD04u;
        // 0x20ad08: 0xae22006c  sw          $v0, 0x6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ad04) {
            ctx->pc = 0x20AD10u;
            goto label_20ad10;
        }
    }
    ctx->pc = 0x20AD0Cu;
label_20ad0c:
    // 0x20ad0c: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x20ad0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_20ad10:
    // 0x20ad10: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x20ad10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_20ad14:
    // 0x20ad14: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_20ad18:
    if (ctx->pc == 0x20AD18u) {
        ctx->pc = 0x20AD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD14u;
        // 0x20ad18: 0xde220068  ld          $v0, 0x68($s1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AD1Cu;
        goto label_20ad1c;
    }
    ctx->pc = 0x20AD14u;
    {
        const bool branch_taken_0x20ad14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ad14) {
            ctx->pc = 0x20AD18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AD14u;
            // 0x20ad18: 0xde220068  ld          $v0, 0x68($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AD30u;
            goto label_20ad30;
        }
    }
    ctx->pc = 0x20AD1Cu;
label_20ad1c:
    // 0x20ad1c: 0xc084034  jal         func_2100D0
label_20ad20:
    if (ctx->pc == 0x20AD20u) {
        ctx->pc = 0x20AD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD1Cu;
        // 0x20ad20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AD24u;
        goto label_20ad24;
    }
    ctx->pc = 0x20AD1Cu;
    SET_GPR_U32(ctx, 31, 0x20AD24u);
    ctx->pc = 0x20AD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AD1Cu;
    // 0x20ad20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2100D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2100D0u, 0x20AD1Cu, 0x20AD24u)) {
        return;
    }
    ctx->pc = 0x20AD24u;
label_20ad24:
    // 0x20ad24: 0x8e2201cc  lw          $v0, 0x1CC($s1)
    ctx->pc = 0x20ad24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 460)));
label_20ad28:
    // 0x20ad28: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x20ad28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_20ad2c:
    // 0x20ad2c: 0xde220068  ld          $v0, 0x68($s1)
    ctx->pc = 0x20ad2cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 104)));
label_20ad30:
    // 0x20ad30: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_20ad34:
    if (ctx->pc == 0x20AD34u) {
        ctx->pc = 0x20AD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD30u;
        // 0x20ad34: 0x8e220044  lw          $v0, 0x44($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AD38u;
        goto label_20ad38;
    }
    ctx->pc = 0x20AD30u;
    {
        const bool branch_taken_0x20ad30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ad30) {
            ctx->pc = 0x20AD34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AD30u;
            // 0x20ad34: 0x8e220044  lw          $v0, 0x44($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AD4Cu;
            goto label_20ad4c;
        }
    }
    ctx->pc = 0x20AD38u;
label_20ad38:
    // 0x20ad38: 0xc0846f4  jal         func_211BD0
label_20ad3c:
    if (ctx->pc == 0x20AD3Cu) {
        ctx->pc = 0x20AD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD38u;
        // 0x20ad3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AD40u;
        goto label_20ad40;
    }
    ctx->pc = 0x20AD38u;
    SET_GPR_U32(ctx, 31, 0x20AD40u);
    ctx->pc = 0x20AD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AD38u;
    // 0x20ad3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211BD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x211BD0u, 0x20AD38u, 0x20AD40u)) {
        return;
    }
    ctx->pc = 0x20AD40u;
label_20ad40:
    // 0x20ad40: 0x8e2201cc  lw          $v0, 0x1CC($s1)
    ctx->pc = 0x20ad40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 460)));
label_20ad44:
    // 0x20ad44: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x20ad44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
label_20ad48:
    // 0x20ad48: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x20ad48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_20ad4c:
    // 0x20ad4c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_20ad50:
    if (ctx->pc == 0x20AD50u) {
        ctx->pc = 0x20AD54u;
        goto label_20ad54;
    }
    ctx->pc = 0x20AD4Cu;
    {
        const bool branch_taken_0x20ad4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20ad4c) {
            ctx->pc = 0x20AD8Cu;
            goto label_20ad8c;
        }
    }
    ctx->pc = 0x20AD54u;
label_20ad54:
    // 0x20ad54: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x20ad54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_20ad58:
    // 0x20ad58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_20ad5c:
    if (ctx->pc == 0x20AD5Cu) {
        ctx->pc = 0x20AD60u;
        goto label_20ad60;
    }
    ctx->pc = 0x20AD58u;
    {
        const bool branch_taken_0x20ad58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ad58) {
            ctx->pc = 0x20AD70u;
            goto label_20ad70;
        }
    }
    ctx->pc = 0x20AD60u;
label_20ad60:
    // 0x20ad60: 0xc082dc8  jal         func_20B720
label_20ad64:
    if (ctx->pc == 0x20AD64u) {
        ctx->pc = 0x20AD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD60u;
        // 0x20ad64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AD68u;
        goto label_20ad68;
    }
    ctx->pc = 0x20AD60u;
    SET_GPR_U32(ctx, 31, 0x20AD68u);
    ctx->pc = 0x20AD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AD60u;
    // 0x20ad64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B720u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x20B720u, 0x20AD60u, 0x20AD68u)) {
        return;
    }
    ctx->pc = 0x20AD68u;
label_20ad68:
    // 0x20ad68: 0x10000006  b           . + 4 + (0x6 << 2)
label_20ad6c:
    if (ctx->pc == 0x20AD6Cu) {
        ctx->pc = 0x20AD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD68u;
        // 0x20ad6c: 0x8e25006c  lw          $a1, 0x6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AD70u;
        goto label_20ad70;
    }
    ctx->pc = 0x20AD68u;
    {
        const bool branch_taken_0x20ad68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD68u;
        // 0x20ad6c: 0x8e25006c  lw          $a1, 0x6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ad68) {
            ctx->pc = 0x20AD84u;
            goto label_20ad84;
        }
    }
    ctx->pc = 0x20AD70u;
label_20ad70:
    // 0x20ad70: 0xc087594  jal         func_21D650
label_20ad74:
    if (ctx->pc == 0x20AD74u) {
        ctx->pc = 0x20AD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD70u;
        // 0x20ad74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AD78u;
        goto label_20ad78;
    }
    ctx->pc = 0x20AD70u;
    SET_GPR_U32(ctx, 31, 0x20AD78u);
    ctx->pc = 0x20AD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AD70u;
    // 0x20ad74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21D650u, 0x20AD70u, 0x20AD78u)) {
        return;
    }
    ctx->pc = 0x20AD78u;
label_20ad78:
    // 0x20ad78: 0xc083480  jal         func_20D200
label_20ad7c:
    if (ctx->pc == 0x20AD7Cu) {
        ctx->pc = 0x20AD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD78u;
        // 0x20ad7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AD80u;
        goto label_20ad80;
    }
    ctx->pc = 0x20AD78u;
    SET_GPR_U32(ctx, 31, 0x20AD80u);
    ctx->pc = 0x20AD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AD78u;
    // 0x20ad7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x20D200u, 0x20AD78u, 0x20AD80u)) {
        return;
    }
    ctx->pc = 0x20AD80u;
label_20ad80:
    // 0x20ad80: 0x8e25006c  lw          $a1, 0x6C($s1)
    ctx->pc = 0x20ad80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_20ad84:
    // 0x20ad84: 0xc0832d8  jal         func_20CB60
label_20ad88:
    if (ctx->pc == 0x20AD88u) {
        ctx->pc = 0x20AD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD84u;
        // 0x20ad88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AD8Cu;
        goto label_20ad8c;
    }
    ctx->pc = 0x20AD84u;
    SET_GPR_U32(ctx, 31, 0x20AD8Cu);
    ctx->pc = 0x20AD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AD84u;
    // 0x20ad88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20CB60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x20CB60u, 0x20AD84u, 0x20AD8Cu)) {
        return;
    }
    ctx->pc = 0x20AD8Cu;
label_20ad8c:
    // 0x20ad8c: 0xc087822  jal         func_21E088
label_20ad90:
    if (ctx->pc == 0x20AD90u) {
        ctx->pc = 0x20AD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD8Cu;
        // 0x20ad90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AD94u;
        goto label_20ad94;
    }
    ctx->pc = 0x20AD8Cu;
    SET_GPR_U32(ctx, 31, 0x20AD94u);
    ctx->pc = 0x20AD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AD8Cu;
    // 0x20ad90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E088u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21E088u, 0x20AD8Cu, 0x20AD94u)) {
        return;
    }
    ctx->pc = 0x20AD94u;
label_20ad94:
    // 0x20ad94: 0x8e2200e0  lw          $v0, 0xE0($s1)
    ctx->pc = 0x20ad94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
label_20ad98:
    // 0x20ad98: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_20ad9c:
    if (ctx->pc == 0x20AD9Cu) {
        ctx->pc = 0x20AD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD98u;
        // 0x20ad9c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ADA0u;
        goto label_20ada0;
    }
    ctx->pc = 0x20AD98u;
    {
        const bool branch_taken_0x20ad98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD98u;
        // 0x20ad9c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ad98) {
            ctx->pc = 0x20ADC0u;
            goto label_20adc0;
        }
    }
    ctx->pc = 0x20ADA0u;
label_20ada0:
    // 0x20ada0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x20ada0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20ada4:
    // 0x20ada4: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x20ada4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_20ada8:
    // 0x20ada8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x20ada8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20adac:
    // 0x20adac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20adacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20adb0:
    // 0x20adb0: 0x60f809  jalr        $v1
label_20adb4:
    if (ctx->pc == 0x20ADB4u) {
        ctx->pc = 0x20ADB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ADB0u;
        // 0x20adb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ADB8u;
        goto label_20adb8;
    }
    ctx->pc = 0x20ADB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20ADB8u);
        ctx->pc = 0x20ADB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ADB0u;
        // 0x20adb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20ADB0u, 0x20ADB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20ADB8u;
label_20adb8:
    // 0x20adb8: 0x1000000b  b           . + 4 + (0xB << 2)
label_20adbc:
    if (ctx->pc == 0x20ADBCu) {
        ctx->pc = 0x20ADBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ADB8u;
        // 0x20adbc: 0x8e2301b4  lw          $v1, 0x1B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ADC0u;
        goto label_20adc0;
    }
    ctx->pc = 0x20ADB8u;
    {
        const bool branch_taken_0x20adb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ADBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ADB8u;
        // 0x20adbc: 0x8e2301b4  lw          $v1, 0x1B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20adb8) {
            ctx->pc = 0x20ADE8u;
            goto label_20ade8;
        }
    }
    ctx->pc = 0x20ADC0u;
label_20adc0:
    // 0x20adc0: 0x8e2200dc  lw          $v0, 0xDC($s1)
    ctx->pc = 0x20adc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_20adc4:
    // 0x20adc4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_20adc8:
    if (ctx->pc == 0x20ADC8u) {
        ctx->pc = 0x20ADCCu;
        goto label_20adcc;
    }
    ctx->pc = 0x20ADC4u;
    {
        const bool branch_taken_0x20adc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20adc4) {
            ctx->pc = 0x20ADDCu;
            goto label_20addc;
        }
    }
    ctx->pc = 0x20ADCCu;
label_20adcc:
    // 0x20adcc: 0xc0832a4  jal         func_20CA90
label_20add0:
    if (ctx->pc == 0x20ADD0u) {
        ctx->pc = 0x20ADD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ADCCu;
        // 0x20add0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ADD4u;
        goto label_20add4;
    }
    ctx->pc = 0x20ADCCu;
    SET_GPR_U32(ctx, 31, 0x20ADD4u);
    ctx->pc = 0x20ADD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ADCCu;
    // 0x20add0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20CA90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x20CA90u, 0x20ADCCu, 0x20ADD4u)) {
        return;
    }
    ctx->pc = 0x20ADD4u;
label_20add4:
    // 0x20add4: 0x10000004  b           . + 4 + (0x4 << 2)
label_20add8:
    if (ctx->pc == 0x20ADD8u) {
        ctx->pc = 0x20ADD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ADD4u;
        // 0x20add8: 0x8e2301b4  lw          $v1, 0x1B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ADDCu;
        goto label_20addc;
    }
    ctx->pc = 0x20ADD4u;
    {
        const bool branch_taken_0x20add4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ADD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ADD4u;
        // 0x20add8: 0x8e2301b4  lw          $v1, 0x1B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20add4) {
            ctx->pc = 0x20ADE8u;
            goto label_20ade8;
        }
    }
    ctx->pc = 0x20ADDCu;
label_20addc:
    // 0x20addc: 0xc087dfc  jal         func_21F7F0
label_20ade0:
    if (ctx->pc == 0x20ADE0u) {
        ctx->pc = 0x20ADE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ADDCu;
        // 0x20ade0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ADE4u;
        goto label_20ade4;
    }
    ctx->pc = 0x20ADDCu;
    SET_GPR_U32(ctx, 31, 0x20ADE4u);
    ctx->pc = 0x20ADE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ADDCu;
    // 0x20ade0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F7F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21F7F0u, 0x20ADDCu, 0x20ADE4u)) {
        return;
    }
    ctx->pc = 0x20ADE4u;
label_20ade4:
    // 0x20ade4: 0x8e2301b4  lw          $v1, 0x1B4($s1)
    ctx->pc = 0x20ade4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
label_20ade8:
    // 0x20ade8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x20ade8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_20adec:
    // 0x20adec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_20adf0:
    if (ctx->pc == 0x20ADF0u) {
        ctx->pc = 0x20ADF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ADECu;
        // 0x20adf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ADF4u;
        goto label_20adf4;
    }
    ctx->pc = 0x20ADECu;
    {
        const bool branch_taken_0x20adec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20ADF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ADECu;
        // 0x20adf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20adec) {
            ctx->pc = 0x20AE00u;
            goto label_20ae00;
        }
    }
    ctx->pc = 0x20ADF4u;
label_20adf4:
    // 0x20adf4: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x20adf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_20adf8:
    // 0x20adf8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_20adfc:
    if (ctx->pc == 0x20ADFCu) {
        ctx->pc = 0x20AE00u;
        goto label_20ae00;
    }
    ctx->pc = 0x20ADF8u;
    {
        const bool branch_taken_0x20adf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20adf8) {
            ctx->pc = 0x20AE04u;
            goto label_20ae04;
        }
    }
    ctx->pc = 0x20AE00u;
label_20ae00:
    // 0x20ae00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20ae00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20ae04:
    // 0x20ae04: 0xc0874a8  jal         func_21D2A0
label_20ae08:
    if (ctx->pc == 0x20AE08u) {
        ctx->pc = 0x20AE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE04u;
        // 0x20ae08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AE0Cu;
        goto label_20ae0c;
    }
    ctx->pc = 0x20AE04u;
    SET_GPR_U32(ctx, 31, 0x20AE0Cu);
    ctx->pc = 0x20AE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AE04u;
    // 0x20ae08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D2A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21D2A0u, 0x20AE04u, 0x20AE0Cu)) {
        return;
    }
    ctx->pc = 0x20AE0Cu;
label_20ae0c:
    // 0x20ae0c: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x20ae0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_20ae10:
    // 0x20ae10: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_20ae14:
    if (ctx->pc == 0x20AE14u) {
        ctx->pc = 0x20AE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE10u;
        // 0x20ae14: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AE18u;
        goto label_20ae18;
    }
    ctx->pc = 0x20AE10u;
    {
        const bool branch_taken_0x20ae10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20ae10) {
            ctx->pc = 0x20AE14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AE10u;
            // 0x20ae14: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AE28u;
            goto label_20ae28;
        }
    }
    ctx->pc = 0x20AE18u;
label_20ae18:
    // 0x20ae18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20ae18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20ae1c:
    // 0x20ae1c: 0xc087fd4  jal         func_21FF50
label_20ae20:
    if (ctx->pc == 0x20AE20u) {
        ctx->pc = 0x20AE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE1Cu;
        // 0x20ae20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AE24u;
        goto label_20ae24;
    }
    ctx->pc = 0x20AE1Cu;
    SET_GPR_U32(ctx, 31, 0x20AE24u);
    ctx->pc = 0x20AE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AE1Cu;
    // 0x20ae20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FF50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21FF50u, 0x20AE1Cu, 0x20AE24u)) {
        return;
    }
    ctx->pc = 0x20AE24u;
label_20ae24:
    // 0x20ae24: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x20ae24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_20ae28:
    // 0x20ae28: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x20ae28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_20ae2c:
    // 0x20ae2c: 0x40f809  jalr        $v0
label_20ae30:
    if (ctx->pc == 0x20AE30u) {
        ctx->pc = 0x20AE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE2Cu;
        // 0x20ae30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AE34u;
        goto label_20ae34;
    }
    ctx->pc = 0x20AE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20AE34u);
        ctx->pc = 0x20AE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE2Cu;
        // 0x20ae30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AE2Cu, 0x20AE34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20AE34u;
label_20ae34:
    // 0x20ae34: 0x8e2301b4  lw          $v1, 0x1B4($s1)
    ctx->pc = 0x20ae34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
label_20ae38:
    // 0x20ae38: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x20ae38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_20ae3c:
    // 0x20ae3c: 0x40f809  jalr        $v0
label_20ae40:
    if (ctx->pc == 0x20AE40u) {
        ctx->pc = 0x20AE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE3Cu;
        // 0x20ae40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AE44u;
        goto label_20ae44;
    }
    ctx->pc = 0x20AE3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20AE44u);
        ctx->pc = 0x20AE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE3Cu;
        // 0x20ae40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AE3Cu, 0x20AE44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20AE44u;
label_20ae44:
    // 0x20ae44: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x20ae44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_20ae48:
    // 0x20ae48: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
label_20ae4c:
    if (ctx->pc == 0x20AE4Cu) {
        ctx->pc = 0x20AE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE48u;
        // 0x20ae4c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AE50u;
        goto label_20ae50;
    }
    ctx->pc = 0x20AE48u;
    {
        const bool branch_taken_0x20ae48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE48u;
        // 0x20ae4c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ae48) {
            ctx->pc = 0x20AED0u;
            goto label_20aed0;
        }
    }
    ctx->pc = 0x20AE50u;
label_20ae50:
    // 0x20ae50: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x20ae50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_20ae54:
    // 0x20ae54: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
label_20ae58:
    if (ctx->pc == 0x20AE58u) {
        ctx->pc = 0x20AE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE54u;
        // 0x20ae58: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AE5Cu;
        goto label_20ae5c;
    }
    ctx->pc = 0x20AE54u;
    {
        const bool branch_taken_0x20ae54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20ae54) {
            ctx->pc = 0x20AE58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AE54u;
            // 0x20ae58: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AED4u;
            goto label_20aed4;
        }
    }
    ctx->pc = 0x20AE5Cu;
label_20ae5c:
    // 0x20ae5c: 0x8e2201b4  lw          $v0, 0x1B4($s1)
    ctx->pc = 0x20ae5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
label_20ae60:
    // 0x20ae60: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x20ae60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_20ae64:
    // 0x20ae64: 0x5060001b  beql        $v1, $zero, . + 4 + (0x1B << 2)
label_20ae68:
    if (ctx->pc == 0x20AE68u) {
        ctx->pc = 0x20AE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE64u;
        // 0x20ae68: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AE6Cu;
        goto label_20ae6c;
    }
    ctx->pc = 0x20AE64u;
    {
        const bool branch_taken_0x20ae64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ae64) {
            ctx->pc = 0x20AE68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AE64u;
            // 0x20ae68: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AED4u;
            goto label_20aed4;
        }
    }
    ctx->pc = 0x20AE6Cu;
label_20ae6c:
    // 0x20ae6c: 0x8e2200dc  lw          $v0, 0xDC($s1)
    ctx->pc = 0x20ae6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_20ae70:
    // 0x20ae70: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_20ae74:
    if (ctx->pc == 0x20AE74u) {
        ctx->pc = 0x20AE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE70u;
        // 0x20ae74: 0x8e250024  lw          $a1, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AE78u;
        goto label_20ae78;
    }
    ctx->pc = 0x20AE70u;
    {
        const bool branch_taken_0x20ae70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ae70) {
            ctx->pc = 0x20AE74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AE70u;
            // 0x20ae74: 0x8e250024  lw          $a1, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AE88u;
            goto label_20ae88;
        }
    }
    ctx->pc = 0x20AE78u;
label_20ae78:
    // 0x20ae78: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x20ae78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_20ae7c:
    // 0x20ae7c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x20ae7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_20ae80:
    // 0x20ae80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20ae80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20ae84:
    // 0x20ae84: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x20ae84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_20ae88:
    // 0x20ae88: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x20ae88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_20ae8c:
    // 0x20ae8c: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x20ae8cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
label_20ae90:
    // 0x20ae90: 0x9e240140  lwu         $a0, 0x140($s1)
    ctx->pc = 0x20ae90u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 320)));
label_20ae94:
    // 0x20ae94: 0xc07e4e4  jal         func_1F9390
label_20ae98:
    if (ctx->pc == 0x20AE98u) {
        ctx->pc = 0x20AE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE94u;
        // 0x20ae98: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AE9Cu;
        goto label_20ae9c;
    }
    ctx->pc = 0x20AE94u;
    SET_GPR_U32(ctx, 31, 0x20AE9Cu);
    ctx->pc = 0x20AE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AE94u;
    // 0x20ae98: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x20AE94u, 0x20AE9Cu)) {
        return;
    }
    ctx->pc = 0x20AE9Cu;
label_20ae9c:
    // 0x20ae9c: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x20ae9cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
label_20aea0:
    // 0x20aea0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20aea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20aea4:
    // 0x20aea4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x20aea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20aea8:
    // 0x20aea8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x20aea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_20aeac:
    // 0x20aeac: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x20aeacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_20aeb0:
    // 0x20aeb0: 0x8e24006c  lw          $a0, 0x6C($s1)
    ctx->pc = 0x20aeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_20aeb4:
    // 0x20aeb4: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x20aeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_20aeb8:
    // 0x20aeb8: 0xc4180b  movn        $v1, $a2, $a0
    ctx->pc = 0x20aeb8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6));
label_20aebc:
    // 0x20aebc: 0xaca3001c  sw          $v1, 0x1C($a1)
    ctx->pc = 0x20aebcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
label_20aec0:
    // 0x20aec0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x20aec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_20aec4:
    // 0x20aec4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20aec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20aec8:
    // 0x20aec8: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x20aec8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_20aecc:
    // 0x20aecc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x20aeccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20aed0:
    // 0x20aed0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x20aed0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20aed4:
    // 0x20aed4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x20aed4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20aed8:
    // 0x20aed8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20aed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20aedc:
    // 0x20aedc: 0x3e00008  jr          $ra
label_20aee0:
    if (ctx->pc == 0x20AEE0u) {
        ctx->pc = 0x20AEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AEDCu;
        // 0x20aee0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AEE4u;
        goto label_20aee4;
    }
    ctx->pc = 0x20AEDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20AEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AEDCu;
        // 0x20aee0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AEDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20AEE4u;
label_20aee4:
    // 0x20aee4: 0x0  nop
    ctx->pc = 0x20aee4u;
    // NOP
    ctx->pc = 0x20aee8u;
}
