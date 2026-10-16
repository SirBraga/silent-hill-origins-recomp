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

// Function: sub_00161010
// Address: 0x161010 - 0x161368
void sub_00161010_0x161010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161010_0x161010");
#endif

    switch (ctx->pc) {
        case 0x161010u: goto label_161010;
        case 0x161014u: goto label_161014;
        case 0x161018u: goto label_161018;
        case 0x16101cu: goto label_16101c;
        case 0x161020u: goto label_161020;
        case 0x161024u: goto label_161024;
        case 0x161028u: goto label_161028;
        case 0x16102cu: goto label_16102c;
        case 0x161030u: goto label_161030;
        case 0x161034u: goto label_161034;
        case 0x161038u: goto label_161038;
        case 0x16103cu: goto label_16103c;
        case 0x161040u: goto label_161040;
        case 0x161044u: goto label_161044;
        case 0x161048u: goto label_161048;
        case 0x16104cu: goto label_16104c;
        case 0x161050u: goto label_161050;
        case 0x161054u: goto label_161054;
        case 0x161058u: goto label_161058;
        case 0x16105cu: goto label_16105c;
        case 0x161060u: goto label_161060;
        case 0x161064u: goto label_161064;
        case 0x161068u: goto label_161068;
        case 0x16106cu: goto label_16106c;
        case 0x161070u: goto label_161070;
        case 0x161074u: goto label_161074;
        case 0x161078u: goto label_161078;
        case 0x16107cu: goto label_16107c;
        case 0x161080u: goto label_161080;
        case 0x161084u: goto label_161084;
        case 0x161088u: goto label_161088;
        case 0x16108cu: goto label_16108c;
        case 0x161090u: goto label_161090;
        case 0x161094u: goto label_161094;
        case 0x161098u: goto label_161098;
        case 0x16109cu: goto label_16109c;
        case 0x1610a0u: goto label_1610a0;
        case 0x1610a4u: goto label_1610a4;
        case 0x1610a8u: goto label_1610a8;
        case 0x1610acu: goto label_1610ac;
        case 0x1610b0u: goto label_1610b0;
        case 0x1610b4u: goto label_1610b4;
        case 0x1610b8u: goto label_1610b8;
        case 0x1610bcu: goto label_1610bc;
        case 0x1610c0u: goto label_1610c0;
        case 0x1610c4u: goto label_1610c4;
        case 0x1610c8u: goto label_1610c8;
        case 0x1610ccu: goto label_1610cc;
        case 0x1610d0u: goto label_1610d0;
        case 0x1610d4u: goto label_1610d4;
        case 0x1610d8u: goto label_1610d8;
        case 0x1610dcu: goto label_1610dc;
        case 0x1610e0u: goto label_1610e0;
        case 0x1610e4u: goto label_1610e4;
        case 0x1610e8u: goto label_1610e8;
        case 0x1610ecu: goto label_1610ec;
        case 0x1610f0u: goto label_1610f0;
        case 0x1610f4u: goto label_1610f4;
        case 0x1610f8u: goto label_1610f8;
        case 0x1610fcu: goto label_1610fc;
        case 0x161100u: goto label_161100;
        case 0x161104u: goto label_161104;
        case 0x161108u: goto label_161108;
        case 0x16110cu: goto label_16110c;
        case 0x161110u: goto label_161110;
        case 0x161114u: goto label_161114;
        case 0x161118u: goto label_161118;
        case 0x16111cu: goto label_16111c;
        case 0x161120u: goto label_161120;
        case 0x161124u: goto label_161124;
        case 0x161128u: goto label_161128;
        case 0x16112cu: goto label_16112c;
        case 0x161130u: goto label_161130;
        case 0x161134u: goto label_161134;
        case 0x161138u: goto label_161138;
        case 0x16113cu: goto label_16113c;
        case 0x161140u: goto label_161140;
        case 0x161144u: goto label_161144;
        case 0x161148u: goto label_161148;
        case 0x16114cu: goto label_16114c;
        case 0x161150u: goto label_161150;
        case 0x161154u: goto label_161154;
        case 0x161158u: goto label_161158;
        case 0x16115cu: goto label_16115c;
        case 0x161160u: goto label_161160;
        case 0x161164u: goto label_161164;
        case 0x161168u: goto label_161168;
        case 0x16116cu: goto label_16116c;
        case 0x161170u: goto label_161170;
        case 0x161174u: goto label_161174;
        case 0x161178u: goto label_161178;
        case 0x16117cu: goto label_16117c;
        case 0x161180u: goto label_161180;
        case 0x161184u: goto label_161184;
        case 0x161188u: goto label_161188;
        case 0x16118cu: goto label_16118c;
        case 0x161190u: goto label_161190;
        case 0x161194u: goto label_161194;
        case 0x161198u: goto label_161198;
        case 0x16119cu: goto label_16119c;
        case 0x1611a0u: goto label_1611a0;
        case 0x1611a4u: goto label_1611a4;
        case 0x1611a8u: goto label_1611a8;
        case 0x1611acu: goto label_1611ac;
        case 0x1611b0u: goto label_1611b0;
        case 0x1611b4u: goto label_1611b4;
        case 0x1611b8u: goto label_1611b8;
        case 0x1611bcu: goto label_1611bc;
        case 0x1611c0u: goto label_1611c0;
        case 0x1611c4u: goto label_1611c4;
        case 0x1611c8u: goto label_1611c8;
        case 0x1611ccu: goto label_1611cc;
        case 0x1611d0u: goto label_1611d0;
        case 0x1611d4u: goto label_1611d4;
        case 0x1611d8u: goto label_1611d8;
        case 0x1611dcu: goto label_1611dc;
        case 0x1611e0u: goto label_1611e0;
        case 0x1611e4u: goto label_1611e4;
        case 0x1611e8u: goto label_1611e8;
        case 0x1611ecu: goto label_1611ec;
        case 0x1611f0u: goto label_1611f0;
        case 0x1611f4u: goto label_1611f4;
        case 0x1611f8u: goto label_1611f8;
        case 0x1611fcu: goto label_1611fc;
        case 0x161200u: goto label_161200;
        case 0x161204u: goto label_161204;
        case 0x161208u: goto label_161208;
        case 0x16120cu: goto label_16120c;
        case 0x161210u: goto label_161210;
        case 0x161214u: goto label_161214;
        case 0x161218u: goto label_161218;
        case 0x16121cu: goto label_16121c;
        case 0x161220u: goto label_161220;
        case 0x161224u: goto label_161224;
        case 0x161228u: goto label_161228;
        case 0x16122cu: goto label_16122c;
        case 0x161230u: goto label_161230;
        case 0x161234u: goto label_161234;
        case 0x161238u: goto label_161238;
        case 0x16123cu: goto label_16123c;
        case 0x161240u: goto label_161240;
        case 0x161244u: goto label_161244;
        case 0x161248u: goto label_161248;
        case 0x16124cu: goto label_16124c;
        case 0x161250u: goto label_161250;
        case 0x161254u: goto label_161254;
        case 0x161258u: goto label_161258;
        case 0x16125cu: goto label_16125c;
        case 0x161260u: goto label_161260;
        case 0x161264u: goto label_161264;
        case 0x161268u: goto label_161268;
        case 0x16126cu: goto label_16126c;
        case 0x161270u: goto label_161270;
        case 0x161274u: goto label_161274;
        case 0x161278u: goto label_161278;
        case 0x16127cu: goto label_16127c;
        case 0x161280u: goto label_161280;
        case 0x161284u: goto label_161284;
        case 0x161288u: goto label_161288;
        case 0x16128cu: goto label_16128c;
        case 0x161290u: goto label_161290;
        case 0x161294u: goto label_161294;
        case 0x161298u: goto label_161298;
        case 0x16129cu: goto label_16129c;
        case 0x1612a0u: goto label_1612a0;
        case 0x1612a4u: goto label_1612a4;
        case 0x1612a8u: goto label_1612a8;
        case 0x1612acu: goto label_1612ac;
        case 0x1612b0u: goto label_1612b0;
        case 0x1612b4u: goto label_1612b4;
        case 0x1612b8u: goto label_1612b8;
        case 0x1612bcu: goto label_1612bc;
        case 0x1612c0u: goto label_1612c0;
        case 0x1612c4u: goto label_1612c4;
        case 0x1612c8u: goto label_1612c8;
        case 0x1612ccu: goto label_1612cc;
        case 0x1612d0u: goto label_1612d0;
        case 0x1612d4u: goto label_1612d4;
        case 0x1612d8u: goto label_1612d8;
        case 0x1612dcu: goto label_1612dc;
        case 0x1612e0u: goto label_1612e0;
        case 0x1612e4u: goto label_1612e4;
        case 0x1612e8u: goto label_1612e8;
        case 0x1612ecu: goto label_1612ec;
        case 0x1612f0u: goto label_1612f0;
        case 0x1612f4u: goto label_1612f4;
        case 0x1612f8u: goto label_1612f8;
        case 0x1612fcu: goto label_1612fc;
        case 0x161300u: goto label_161300;
        case 0x161304u: goto label_161304;
        case 0x161308u: goto label_161308;
        case 0x16130cu: goto label_16130c;
        case 0x161310u: goto label_161310;
        case 0x161314u: goto label_161314;
        case 0x161318u: goto label_161318;
        case 0x16131cu: goto label_16131c;
        case 0x161320u: goto label_161320;
        case 0x161324u: goto label_161324;
        case 0x161328u: goto label_161328;
        case 0x16132cu: goto label_16132c;
        case 0x161330u: goto label_161330;
        case 0x161334u: goto label_161334;
        case 0x161338u: goto label_161338;
        case 0x16133cu: goto label_16133c;
        case 0x161340u: goto label_161340;
        case 0x161344u: goto label_161344;
        case 0x161348u: goto label_161348;
        case 0x16134cu: goto label_16134c;
        case 0x161350u: goto label_161350;
        case 0x161354u: goto label_161354;
        case 0x161358u: goto label_161358;
        case 0x16135cu: goto label_16135c;
        case 0x161360u: goto label_161360;
        case 0x161364u: goto label_161364;
        default: break;
    }

    ctx->pc = 0x161010u;

label_161010:
    // 0x161010: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x161010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_161014:
    // 0x161014: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x161014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
label_161018:
    // 0x161018: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x161018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
label_16101c:
    // 0x16101c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16101cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_161020:
    // 0x161020: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x161020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
label_161024:
    // 0x161024: 0x92220017  lbu         $v0, 0x17($s1)
    ctx->pc = 0x161024u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 23)));
label_161028:
    // 0x161028: 0x104000c9  beqz        $v0, . + 4 + (0xC9 << 2)
label_16102c:
    if (ctx->pc == 0x16102Cu) {
        ctx->pc = 0x16102Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161028u;
        // 0x16102c: 0x3c100073  lui         $s0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161030u;
        goto label_161030;
    }
    ctx->pc = 0x161028u;
    {
        const bool branch_taken_0x161028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16102Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161028u;
        // 0x16102c: 0x3c100073  lui         $s0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161028) {
            ctx->pc = 0x161350u;
            goto label_161350;
        }
    }
    ctx->pc = 0x161030u;
label_161030:
    // 0x161030: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x161030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
label_161034:
    // 0x161034: 0x26100fd8  addiu       $s0, $s0, 0xFD8
    ctx->pc = 0x161034u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4056));
label_161038:
    // 0x161038: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x161038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_16103c:
    // 0x16103c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x16103cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_161040:
    // 0x161040: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x161040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_161044:
    // 0x161044: 0xafa00104  sw          $zero, 0x104($sp)
    ctx->pc = 0x161044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
label_161048:
    // 0x161048: 0xafa00108  sw          $zero, 0x108($sp)
    ctx->pc = 0x161048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 0));
label_16104c:
    // 0x16104c: 0xafa0010c  sw          $zero, 0x10C($sp)
    ctx->pc = 0x16104cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 0));
label_161050:
    // 0x161050: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x161050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
label_161054:
    // 0x161054: 0xafa00114  sw          $zero, 0x114($sp)
    ctx->pc = 0x161054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 0));
label_161058:
    // 0x161058: 0x40f809  jalr        $v0
label_16105c:
    if (ctx->pc == 0x16105Cu) {
        ctx->pc = 0x16105Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161058u;
        // 0x16105c: 0xafa00118  sw          $zero, 0x118($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161060u;
        goto label_161060;
    }
    ctx->pc = 0x161058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x161060u);
        ctx->pc = 0x16105Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161058u;
        // 0x16105c: 0xafa00118  sw          $zero, 0x118($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161058u, 0x161060u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x161060u;
label_161060:
    // 0x161060: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x161060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_161064:
    // 0x161064: 0x27a50104  addiu       $a1, $sp, 0x104
    ctx->pc = 0x161064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
label_161068:
    // 0x161068: 0x40f809  jalr        $v0
label_16106c:
    if (ctx->pc == 0x16106Cu) {
        ctx->pc = 0x16106Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161068u;
        // 0x16106c: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161070u;
        goto label_161070;
    }
    ctx->pc = 0x161068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x161070u);
        ctx->pc = 0x16106Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161068u;
        // 0x16106c: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161068u, 0x161070u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x161070u;
label_161070:
    // 0x161070: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x161070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_161074:
    // 0x161074: 0x27a50108  addiu       $a1, $sp, 0x108
    ctx->pc = 0x161074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_161078:
    // 0x161078: 0x40f809  jalr        $v0
label_16107c:
    if (ctx->pc == 0x16107Cu) {
        ctx->pc = 0x16107Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161078u;
        // 0x16107c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161080u;
        goto label_161080;
    }
    ctx->pc = 0x161078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x161080u);
        ctx->pc = 0x16107Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161078u;
        // 0x16107c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161078u, 0x161080u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x161080u;
label_161080:
    // 0x161080: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x161080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_161084:
    // 0x161084: 0x27a5010c  addiu       $a1, $sp, 0x10C
    ctx->pc = 0x161084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
label_161088:
    // 0x161088: 0x40f809  jalr        $v0
label_16108c:
    if (ctx->pc == 0x16108Cu) {
        ctx->pc = 0x16108Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161088u;
        // 0x16108c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161090u;
        goto label_161090;
    }
    ctx->pc = 0x161088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x161090u);
        ctx->pc = 0x16108Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161088u;
        // 0x16108c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161088u, 0x161090u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x161090u;
label_161090:
    // 0x161090: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x161090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_161094:
    // 0x161094: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x161094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_161098:
    // 0x161098: 0x40f809  jalr        $v0
label_16109c:
    if (ctx->pc == 0x16109Cu) {
        ctx->pc = 0x16109Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161098u;
        // 0x16109c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1610A0u;
        goto label_1610a0;
    }
    ctx->pc = 0x161098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1610A0u);
        ctx->pc = 0x16109Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161098u;
        // 0x16109c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161098u, 0x1610A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1610A0u;
label_1610a0:
    // 0x1610a0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1610a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1610a4:
    // 0x1610a4: 0x27a50114  addiu       $a1, $sp, 0x114
    ctx->pc = 0x1610a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
label_1610a8:
    // 0x1610a8: 0x40f809  jalr        $v0
label_1610ac:
    if (ctx->pc == 0x1610ACu) {
        ctx->pc = 0x1610ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1610A8u;
        // 0x1610ac: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1610B0u;
        goto label_1610b0;
    }
    ctx->pc = 0x1610A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1610B0u);
        ctx->pc = 0x1610ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1610A8u;
        // 0x1610ac: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1610A8u, 0x1610B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1610B0u;
label_1610b0:
    // 0x1610b0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1610b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1610b4:
    // 0x1610b4: 0x27a50118  addiu       $a1, $sp, 0x118
    ctx->pc = 0x1610b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_1610b8:
    // 0x1610b8: 0x40f809  jalr        $v0
label_1610bc:
    if (ctx->pc == 0x1610BCu) {
        ctx->pc = 0x1610BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1610B8u;
        // 0x1610bc: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1610C0u;
        goto label_1610c0;
    }
    ctx->pc = 0x1610B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1610C0u);
        ctx->pc = 0x1610BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1610B8u;
        // 0x1610bc: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1610B8u, 0x1610C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1610C0u;
label_1610c0:
    // 0x1610c0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1610c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1610c4:
    // 0x1610c4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1610c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1610c8:
    // 0x1610c8: 0x40f809  jalr        $v0
label_1610cc:
    if (ctx->pc == 0x1610CCu) {
        ctx->pc = 0x1610CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1610C8u;
        // 0x1610cc: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1610D0u;
        goto label_1610d0;
    }
    ctx->pc = 0x1610C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1610D0u);
        ctx->pc = 0x1610CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1610C8u;
        // 0x1610cc: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1610C8u, 0x1610D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1610D0u;
label_1610d0:
    // 0x1610d0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1610d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1610d4:
    // 0x1610d4: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x1610d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1610d8:
    // 0x1610d8: 0x40f809  jalr        $v0
label_1610dc:
    if (ctx->pc == 0x1610DCu) {
        ctx->pc = 0x1610DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1610D8u;
        // 0x1610dc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1610E0u;
        goto label_1610e0;
    }
    ctx->pc = 0x1610D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1610E0u);
        ctx->pc = 0x1610DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1610D8u;
        // 0x1610dc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1610D8u, 0x1610E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1610E0u;
label_1610e0:
    // 0x1610e0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1610e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1610e4:
    // 0x1610e4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1610e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1610e8:
    // 0x1610e8: 0x40f809  jalr        $v0
label_1610ec:
    if (ctx->pc == 0x1610ECu) {
        ctx->pc = 0x1610ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1610E8u;
        // 0x1610ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1610F0u;
        goto label_1610f0;
    }
    ctx->pc = 0x1610E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1610F0u);
        ctx->pc = 0x1610ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1610E8u;
        // 0x1610ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1610E8u, 0x1610F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1610F0u;
label_1610f0:
    // 0x1610f0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1610f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1610f4:
    // 0x1610f4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1610f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1610f8:
    // 0x1610f8: 0x40f809  jalr        $v0
label_1610fc:
    if (ctx->pc == 0x1610FCu) {
        ctx->pc = 0x1610FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1610F8u;
        // 0x1610fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161100u;
        goto label_161100;
    }
    ctx->pc = 0x1610F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x161100u);
        ctx->pc = 0x1610FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1610F8u;
        // 0x1610fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1610F8u, 0x161100u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x161100u;
label_161100:
    // 0x161100: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x161100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_161104:
    // 0x161104: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x161104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_161108:
    // 0x161108: 0x40f809  jalr        $v0
label_16110c:
    if (ctx->pc == 0x16110Cu) {
        ctx->pc = 0x16110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161108u;
        // 0x16110c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161110u;
        goto label_161110;
    }
    ctx->pc = 0x161108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x161110u);
        ctx->pc = 0x16110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161108u;
        // 0x16110c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161108u, 0x161110u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x161110u;
label_161110:
    // 0x161110: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x161110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_161114:
    // 0x161114: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x161114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_161118:
    // 0x161118: 0x40f809  jalr        $v0
label_16111c:
    if (ctx->pc == 0x16111Cu) {
        ctx->pc = 0x16111Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161118u;
        // 0x16111c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161120u;
        goto label_161120;
    }
    ctx->pc = 0x161118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x161120u);
        ctx->pc = 0x16111Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161118u;
        // 0x16111c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161118u, 0x161120u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x161120u;
label_161120:
    // 0x161120: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x161120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_161124:
    // 0x161124: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x161124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_161128:
    // 0x161128: 0x40f809  jalr        $v0
label_16112c:
    if (ctx->pc == 0x16112Cu) {
        ctx->pc = 0x16112Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161128u;
        // 0x16112c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161130u;
        goto label_161130;
    }
    ctx->pc = 0x161128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x161130u);
        ctx->pc = 0x16112Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161128u;
        // 0x16112c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161128u, 0x161130u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x161130u;
label_161130:
    // 0x161130: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x161130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_161134:
    // 0x161134: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x161134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_161138:
    // 0x161138: 0x40f809  jalr        $v0
label_16113c:
    if (ctx->pc == 0x16113Cu) {
        ctx->pc = 0x16113Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161138u;
        // 0x16113c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161140u;
        goto label_161140;
    }
    ctx->pc = 0x161138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x161140u);
        ctx->pc = 0x16113Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161138u;
        // 0x16113c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161138u, 0x161140u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x161140u;
label_161140:
    // 0x161140: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x161140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_161144:
    // 0x161144: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x161144u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_161148:
    // 0x161148: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x161148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_16114c:
    // 0x16114c: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x16114cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_161150:
    // 0x161150: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x161150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_161154:
    // 0x161154: 0x92220014  lbu         $v0, 0x14($s1)
    ctx->pc = 0x161154u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 20)));
label_161158:
    // 0x161158: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x161158u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_16115c:
    // 0x16115c: 0x0  nop
    ctx->pc = 0x16115cu;
    // NOP
label_161160:
    // 0x161160: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x161160u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_161164:
    // 0x161164: 0x92240015  lbu         $a0, 0x15($s1)
    ctx->pc = 0x161164u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 21)));
label_161168:
    // 0x161168: 0x92230016  lbu         $v1, 0x16($s1)
    ctx->pc = 0x161168u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 22)));
label_16116c:
    // 0x16116c: 0x92220017  lbu         $v0, 0x17($s1)
    ctx->pc = 0x16116cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 23)));
label_161170:
    // 0x161170: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x161170u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_161174:
    // 0x161174: 0x0  nop
    ctx->pc = 0x161174u;
    // NOP
label_161178:
    // 0x161178: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x161178u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_16117c:
    // 0x16117c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x16117cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_161180:
    // 0x161180: 0x0  nop
    ctx->pc = 0x161180u;
    // NOP
label_161184:
    // 0x161184: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x161184u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_161188:
    // 0x161188: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x161188u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_16118c:
    // 0x16118c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16118cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_161190:
    // 0x161190: 0x0  nop
    ctx->pc = 0x161190u;
    // NOP
label_161194:
    // 0x161194: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x161194u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_161198:
    // 0x161198: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x161198u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_16119c:
    // 0x16119c: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x16119cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1611a0:
    // 0x1611a0: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1611a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_1611a4:
    // 0x1611a4: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x1611a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_1611a8:
    // 0x1611a8: 0xc6260020  lwc1        $f6, 0x20($s1)
    ctx->pc = 0x1611a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1611ac:
    // 0x1611ac: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x1611acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
label_1611b0:
    // 0x1611b0: 0xe7a40048  swc1        $f4, 0x48($sp)
    ctx->pc = 0x1611b0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1611b4:
    // 0x1611b4: 0xe7a60044  swc1        $f6, 0x44($sp)
    ctx->pc = 0x1611b4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1611b8:
    // 0x1611b8: 0x92220014  lbu         $v0, 0x14($s1)
    ctx->pc = 0x1611b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 20)));
label_1611bc:
    // 0x1611bc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1611bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1611c0:
    // 0x1611c0: 0x0  nop
    ctx->pc = 0x1611c0u;
    // NOP
label_1611c4:
    // 0x1611c4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1611c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_1611c8:
    // 0x1611c8: 0x92240015  lbu         $a0, 0x15($s1)
    ctx->pc = 0x1611c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 21)));
label_1611cc:
    // 0x1611cc: 0x92230016  lbu         $v1, 0x16($s1)
    ctx->pc = 0x1611ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 22)));
label_1611d0:
    // 0x1611d0: 0x92220017  lbu         $v0, 0x17($s1)
    ctx->pc = 0x1611d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 23)));
label_1611d4:
    // 0x1611d4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1611d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1611d8:
    // 0x1611d8: 0x0  nop
    ctx->pc = 0x1611d8u;
    // NOP
label_1611dc:
    // 0x1611dc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1611dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1611e0:
    // 0x1611e0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1611e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1611e4:
    // 0x1611e4: 0x0  nop
    ctx->pc = 0x1611e4u;
    // NOP
label_1611e8:
    // 0x1611e8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1611e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1611ec:
    // 0x1611ec: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x1611ecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_1611f0:
    // 0x1611f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1611f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1611f4:
    // 0x1611f4: 0x0  nop
    ctx->pc = 0x1611f4u;
    // NOP
label_1611f8:
    // 0x1611f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1611f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1611fc:
    // 0x1611fc: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x1611fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_161200:
    // 0x161200: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x161200u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_161204:
    // 0x161204: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x161204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_161208:
    // 0x161208: 0xc625001c  lwc1        $f5, 0x1C($s1)
    ctx->pc = 0x161208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_16120c:
    // 0x16120c: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x16120cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
label_161210:
    // 0x161210: 0xe7a50080  swc1        $f5, 0x80($sp)
    ctx->pc = 0x161210u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_161214:
    // 0x161214: 0xe7a40088  swc1        $f4, 0x88($sp)
    ctx->pc = 0x161214u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_161218:
    // 0x161218: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x161218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
label_16121c:
    // 0x16121c: 0x92220014  lbu         $v0, 0x14($s1)
    ctx->pc = 0x16121cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 20)));
label_161220:
    // 0x161220: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x161220u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_161224:
    // 0x161224: 0x0  nop
    ctx->pc = 0x161224u;
    // NOP
label_161228:
    // 0x161228: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x161228u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_16122c:
    // 0x16122c: 0x92240015  lbu         $a0, 0x15($s1)
    ctx->pc = 0x16122cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 21)));
label_161230:
    // 0x161230: 0x92230016  lbu         $v1, 0x16($s1)
    ctx->pc = 0x161230u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 22)));
label_161234:
    // 0x161234: 0x92220017  lbu         $v0, 0x17($s1)
    ctx->pc = 0x161234u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 23)));
label_161238:
    // 0x161238: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x161238u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16123c:
    // 0x16123c: 0x0  nop
    ctx->pc = 0x16123cu;
    // NOP
label_161240:
    // 0x161240: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x161240u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_161244:
    // 0x161244: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x161244u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_161248:
    // 0x161248: 0x0  nop
    ctx->pc = 0x161248u;
    // NOP
label_16124c:
    // 0x16124c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x16124cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_161250:
    // 0x161250: 0xe7a300a0  swc1        $f3, 0xA0($sp)
    ctx->pc = 0x161250u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_161254:
    // 0x161254: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161254u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_161258:
    // 0x161258: 0x0  nop
    ctx->pc = 0x161258u;
    // NOP
label_16125c:
    // 0x16125c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16125cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_161260:
    // 0x161260: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x161260u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_161264:
    // 0x161264: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x161264u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_161268:
    // 0x161268: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x161268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_16126c:
    // 0x16126c: 0xe7a500c0  swc1        $f5, 0xC0($sp)
    ctx->pc = 0x16126cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_161270:
    // 0x161270: 0xe7a600c4  swc1        $f6, 0xC4($sp)
    ctx->pc = 0x161270u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_161274:
    // 0x161274: 0xe7a400c8  swc1        $f4, 0xC8($sp)
    ctx->pc = 0x161274u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_161278:
    // 0x161278: 0x92220014  lbu         $v0, 0x14($s1)
    ctx->pc = 0x161278u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 20)));
label_16127c:
    // 0x16127c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x16127cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_161280:
    // 0x161280: 0x0  nop
    ctx->pc = 0x161280u;
    // NOP
label_161284:
    // 0x161284: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x161284u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_161288:
    // 0x161288: 0x92240017  lbu         $a0, 0x17($s1)
    ctx->pc = 0x161288u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 23)));
label_16128c:
    // 0x16128c: 0x92230015  lbu         $v1, 0x15($s1)
    ctx->pc = 0x16128cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 21)));
label_161290:
    // 0x161290: 0x92220016  lbu         $v0, 0x16($s1)
    ctx->pc = 0x161290u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 22)));
label_161294:
    // 0x161294: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x161294u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_161298:
    // 0x161298: 0x0  nop
    ctx->pc = 0x161298u;
    // NOP
label_16129c:
    // 0x16129c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x16129cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1612a0:
    // 0x1612a0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1612a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1612a4:
    // 0x1612a4: 0x0  nop
    ctx->pc = 0x1612a4u;
    // NOP
label_1612a8:
    // 0x1612a8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1612a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1612ac:
    // 0x1612ac: 0xe7a300e0  swc1        $f3, 0xE0($sp)
    ctx->pc = 0x1612acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1612b0:
    // 0x1612b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1612b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1612b4:
    // 0x1612b4: 0x0  nop
    ctx->pc = 0x1612b4u;
    // NOP
label_1612b8:
    // 0x1612b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1612b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1612bc:
    // 0x1612bc: 0xe7a100ec  swc1        $f1, 0xEC($sp)
    ctx->pc = 0x1612bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_1612c0:
    // 0x1612c0: 0xe7a200e4  swc1        $f2, 0xE4($sp)
    ctx->pc = 0x1612c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_1612c4:
    // 0x1612c4: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x1612c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_1612c8:
    // 0x1612c8: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1612c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1612cc:
    // 0x1612cc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1612ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1612d0:
    // 0x1612d0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1612d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1612d4:
    // 0x1612d4: 0x40f809  jalr        $v0
label_1612d8:
    if (ctx->pc == 0x1612D8u) {
        ctx->pc = 0x1612D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1612D4u;
        // 0x1612d8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1612DCu;
        goto label_1612dc;
    }
    ctx->pc = 0x1612D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1612DCu);
        ctx->pc = 0x1612D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1612D4u;
        // 0x1612d8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1612D4u, 0x1612DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1612DCu;
label_1612dc:
    // 0x1612dc: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x1612dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_1612e0:
    // 0x1612e0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1612e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1612e4:
    // 0x1612e4: 0x40f809  jalr        $v0
label_1612e8:
    if (ctx->pc == 0x1612E8u) {
        ctx->pc = 0x1612E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1612E4u;
        // 0x1612e8: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1612ECu;
        goto label_1612ec;
    }
    ctx->pc = 0x1612E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1612ECu);
        ctx->pc = 0x1612E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1612E4u;
        // 0x1612e8: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1612E4u, 0x1612ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1612ECu;
label_1612ec:
    // 0x1612ec: 0x8fa50104  lw          $a1, 0x104($sp)
    ctx->pc = 0x1612ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
label_1612f0:
    // 0x1612f0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1612f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1612f4:
    // 0x1612f4: 0x40f809  jalr        $v0
label_1612f8:
    if (ctx->pc == 0x1612F8u) {
        ctx->pc = 0x1612F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1612F4u;
        // 0x1612f8: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1612FCu;
        goto label_1612fc;
    }
    ctx->pc = 0x1612F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1612FCu);
        ctx->pc = 0x1612F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1612F4u;
        // 0x1612f8: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1612F4u, 0x1612FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1612FCu;
label_1612fc:
    // 0x1612fc: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x1612fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_161300:
    // 0x161300: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x161300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_161304:
    // 0x161304: 0x40f809  jalr        $v0
label_161308:
    if (ctx->pc == 0x161308u) {
        ctx->pc = 0x161308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161304u;
        // 0x161308: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16130Cu;
        goto label_16130c;
    }
    ctx->pc = 0x161304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16130Cu);
        ctx->pc = 0x161308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161304u;
        // 0x161308: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161304u, 0x16130Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16130Cu;
label_16130c:
    // 0x16130c: 0x8fa5010c  lw          $a1, 0x10C($sp)
    ctx->pc = 0x16130cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
label_161310:
    // 0x161310: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x161310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_161314:
    // 0x161314: 0x40f809  jalr        $v0
label_161318:
    if (ctx->pc == 0x161318u) {
        ctx->pc = 0x161318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161314u;
        // 0x161318: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16131Cu;
        goto label_16131c;
    }
    ctx->pc = 0x161314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16131Cu);
        ctx->pc = 0x161318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161314u;
        // 0x161318: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161314u, 0x16131Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16131Cu;
label_16131c:
    // 0x16131c: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x16131cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_161320:
    // 0x161320: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x161320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_161324:
    // 0x161324: 0x40f809  jalr        $v0
label_161328:
    if (ctx->pc == 0x161328u) {
        ctx->pc = 0x161328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161324u;
        // 0x161328: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16132Cu;
        goto label_16132c;
    }
    ctx->pc = 0x161324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16132Cu);
        ctx->pc = 0x161328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161324u;
        // 0x161328: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161324u, 0x16132Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16132Cu;
label_16132c:
    // 0x16132c: 0x8fa50114  lw          $a1, 0x114($sp)
    ctx->pc = 0x16132cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
label_161330:
    // 0x161330: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x161330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_161334:
    // 0x161334: 0x40f809  jalr        $v0
label_161338:
    if (ctx->pc == 0x161338u) {
        ctx->pc = 0x161338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161334u;
        // 0x161338: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16133Cu;
        goto label_16133c;
    }
    ctx->pc = 0x161334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16133Cu);
        ctx->pc = 0x161338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161334u;
        // 0x161338: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161334u, 0x16133Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16133Cu;
label_16133c:
    // 0x16133c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x16133cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_161340:
    // 0x161340: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x161340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_161344:
    // 0x161344: 0x40f809  jalr        $v0
label_161348:
    if (ctx->pc == 0x161348u) {
        ctx->pc = 0x161348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161344u;
        // 0x161348: 0x8fa50118  lw          $a1, 0x118($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16134Cu;
        goto label_16134c;
    }
    ctx->pc = 0x161344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16134Cu);
        ctx->pc = 0x161348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161344u;
        // 0x161348: 0x8fa50118  lw          $a1, 0x118($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161344u, 0x16134Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16134Cu;
label_16134c:
    // 0x16134c: 0x0  nop
    ctx->pc = 0x16134cu;
    // NOP
label_161350:
    // 0x161350: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x161350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_161354:
    // 0x161354: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x161354u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_161358:
    // 0x161358: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x161358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_16135c:
    // 0x16135c: 0x3e00008  jr          $ra
label_161360:
    if (ctx->pc == 0x161360u) {
        ctx->pc = 0x161360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16135Cu;
        // 0x161360: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161364u;
        goto label_161364;
    }
    ctx->pc = 0x16135Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16135Cu;
        // 0x161360: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16135Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161364u;
label_161364:
    // 0x161364: 0x0  nop
    ctx->pc = 0x161364u;
    // NOP
    ctx->pc = 0x161368u;
}
