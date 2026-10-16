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

// Function: sub_0027F108
// Address: 0x27f108 - 0x27f1c0
void sub_0027F108_0x27f108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027F108_0x27f108");
#endif

    switch (ctx->pc) {
        case 0x27f108u: goto label_27f108;
        case 0x27f10cu: goto label_27f10c;
        case 0x27f110u: goto label_27f110;
        case 0x27f114u: goto label_27f114;
        case 0x27f118u: goto label_27f118;
        case 0x27f11cu: goto label_27f11c;
        case 0x27f120u: goto label_27f120;
        case 0x27f124u: goto label_27f124;
        case 0x27f128u: goto label_27f128;
        case 0x27f12cu: goto label_27f12c;
        case 0x27f130u: goto label_27f130;
        case 0x27f134u: goto label_27f134;
        case 0x27f138u: goto label_27f138;
        case 0x27f13cu: goto label_27f13c;
        case 0x27f140u: goto label_27f140;
        case 0x27f144u: goto label_27f144;
        case 0x27f148u: goto label_27f148;
        case 0x27f14cu: goto label_27f14c;
        case 0x27f150u: goto label_27f150;
        case 0x27f154u: goto label_27f154;
        case 0x27f158u: goto label_27f158;
        case 0x27f15cu: goto label_27f15c;
        case 0x27f160u: goto label_27f160;
        case 0x27f164u: goto label_27f164;
        case 0x27f168u: goto label_27f168;
        case 0x27f16cu: goto label_27f16c;
        case 0x27f170u: goto label_27f170;
        case 0x27f174u: goto label_27f174;
        case 0x27f178u: goto label_27f178;
        case 0x27f17cu: goto label_27f17c;
        case 0x27f180u: goto label_27f180;
        case 0x27f184u: goto label_27f184;
        case 0x27f188u: goto label_27f188;
        case 0x27f18cu: goto label_27f18c;
        case 0x27f190u: goto label_27f190;
        case 0x27f194u: goto label_27f194;
        case 0x27f198u: goto label_27f198;
        case 0x27f19cu: goto label_27f19c;
        case 0x27f1a0u: goto label_27f1a0;
        case 0x27f1a4u: goto label_27f1a4;
        case 0x27f1a8u: goto label_27f1a8;
        case 0x27f1acu: goto label_27f1ac;
        case 0x27f1b0u: goto label_27f1b0;
        case 0x27f1b4u: goto label_27f1b4;
        case 0x27f1b8u: goto label_27f1b8;
        case 0x27f1bcu: goto label_27f1bc;
        default: break;
    }

    ctx->pc = 0x27f108u;

label_27f108:
    // 0x27f108: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27f108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_27f10c:
    // 0x27f10c: 0x8f8387fc  lw          $v1, -0x7804($gp)
    ctx->pc = 0x27f10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936572)));
label_27f110:
    // 0x27f110: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x27f110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_27f114:
    // 0x27f114: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x27f114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_27f118:
    // 0x27f118: 0x838821  addu        $s1, $a0, $v1
    ctx->pc = 0x27f118u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_27f11c:
    // 0x27f11c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27f11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_27f120:
    // 0x27f120: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x27f120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_27f124:
    // 0x27f124: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_27f128:
    if (ctx->pc == 0x27F128u) {
        ctx->pc = 0x27F128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F124u;
        // 0x27f128: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F12Cu;
        goto label_27f12c;
    }
    ctx->pc = 0x27F124u;
    {
        const bool branch_taken_0x27f124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F124u;
        // 0x27f128: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f124) {
            ctx->pc = 0x27F1A0u;
            goto label_27f1a0;
        }
    }
    ctx->pc = 0x27F12Cu;
label_27f12c:
    // 0x27f12c: 0xc09f90a  jal         func_27E428
label_27f130:
    if (ctx->pc == 0x27F130u) {
        ctx->pc = 0x27F130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F12Cu;
        // 0x27f130: 0x8c840018  lw          $a0, 0x18($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F134u;
        goto label_27f134;
    }
    ctx->pc = 0x27F12Cu;
    SET_GPR_U32(ctx, 31, 0x27F134u);
    ctx->pc = 0x27F130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F12Cu;
    // 0x27f130: 0x8c840018  lw          $a0, 0x18($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x27E428u, 0x27F12Cu, 0x27F134u)) {
        return;
    }
    ctx->pc = 0x27F134u;
label_27f134:
    // 0x27f134: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x27f134u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_27f138:
    // 0x27f138: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x27f138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_27f13c:
    // 0x27f13c: 0x8c6210d0  lw          $v0, 0x10D0($v1)
    ctx->pc = 0x27f13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4304)));
label_27f140:
    // 0x27f140: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x27f140u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_27f144:
    // 0x27f144: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27f144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27f148:
    // 0x27f148: 0x40f809  jalr        $v0
label_27f14c:
    if (ctx->pc == 0x27F14Cu) {
        ctx->pc = 0x27F14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F148u;
        // 0x27f14c: 0x34a50122  ori         $a1, $a1, 0x122 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)290);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F150u;
        goto label_27f150;
    }
    ctx->pc = 0x27F148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27F150u);
        ctx->pc = 0x27F14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F148u;
        // 0x27f14c: 0x34a50122  ori         $a1, $a1, 0x122 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)290);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F148u, 0x27F150u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27F150u;
label_27f150:
    // 0x27f150: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_27f154:
    if (ctx->pc == 0x27F154u) {
        ctx->pc = 0x27F154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F150u;
        // 0x27f154: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F158u;
        goto label_27f158;
    }
    ctx->pc = 0x27F150u;
    {
        const bool branch_taken_0x27f150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F150u;
        // 0x27f154: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f150) {
            ctx->pc = 0x27F188u;
            goto label_27f188;
        }
    }
    ctx->pc = 0x27F158u;
label_27f158:
    // 0x27f158: 0x24020122  addiu       $v0, $zero, 0x122
    ctx->pc = 0x27f158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
label_27f15c:
    // 0x27f15c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x27f15cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_27f160:
    // 0x27f160: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x27f160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_27f164:
    // 0x27f164: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27f164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27f168:
    // 0x27f168: 0xc092848  jal         func_24A120
label_27f16c:
    if (ctx->pc == 0x27F16Cu) {
        ctx->pc = 0x27F16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F168u;
        // 0x27f16c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F170u;
        goto label_27f170;
    }
    ctx->pc = 0x27F168u;
    SET_GPR_U32(ctx, 31, 0x27F170u);
    ctx->pc = 0x27F16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F168u;
    // 0x27f16c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x27F168u, 0x27F170u)) {
        return;
    }
    ctx->pc = 0x27F170u;
label_27f170:
    // 0x27f170: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27f170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_27f174:
    // 0x27f174: 0xc09281a  jal         func_24A068
label_27f178:
    if (ctx->pc == 0x27F178u) {
        ctx->pc = 0x27F178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F174u;
        // 0x27f178: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F17Cu;
        goto label_27f17c;
    }
    ctx->pc = 0x27F174u;
    SET_GPR_U32(ctx, 31, 0x27F17Cu);
    ctx->pc = 0x27F178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F174u;
    // 0x27f178: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x27F174u, 0x27F17Cu)) {
        return;
    }
    ctx->pc = 0x27F17Cu;
label_27f17c:
    // 0x27f17c: 0x10000007  b           . + 4 + (0x7 << 2)
label_27f180:
    if (ctx->pc == 0x27F180u) {
        ctx->pc = 0x27F180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F17Cu;
        // 0x27f180: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F184u;
        goto label_27f184;
    }
    ctx->pc = 0x27F17Cu;
    {
        const bool branch_taken_0x27f17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F17Cu;
        // 0x27f180: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f17c) {
            ctx->pc = 0x27F19Cu;
            goto label_27f19c;
        }
    }
    ctx->pc = 0x27F184u;
label_27f184:
    // 0x27f184: 0x0  nop
    ctx->pc = 0x27f184u;
    // NOP
label_27f188:
    // 0x27f188: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27f188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27f18c:
    // 0x27f18c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27f18cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27f190:
    // 0x27f190: 0xc0c493d  jal         func_3124F4
label_27f194:
    if (ctx->pc == 0x27F194u) {
        ctx->pc = 0x27F194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F190u;
        // 0x27f194: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F198u;
        goto label_27f198;
    }
    ctx->pc = 0x27F190u;
    SET_GPR_U32(ctx, 31, 0x27F198u);
    ctx->pc = 0x27F194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F190u;
    // 0x27f194: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x27F190u, 0x27F198u)) {
        return;
    }
    ctx->pc = 0x27F198u;
label_27f198:
    // 0x27f198: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x27f198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_27f19c:
    // 0x27f19c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x27f19cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_27f1a0:
    // 0x27f1a0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x27f1a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27f1a4:
    // 0x27f1a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27f1a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_27f1a8:
    // 0x27f1a8: 0x3e00008  jr          $ra
label_27f1ac:
    if (ctx->pc == 0x27F1ACu) {
        ctx->pc = 0x27F1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F1A8u;
        // 0x27f1ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F1B0u;
        goto label_27f1b0;
    }
    ctx->pc = 0x27F1A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F1A8u;
        // 0x27f1ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F1A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F1B0u;
label_27f1b0:
    // 0x27f1b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27f1b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27f1b4:
    // 0x27f1b4: 0x0  nop
    ctx->pc = 0x27f1b4u;
    // NOP
label_27f1b8:
    // 0x27f1b8: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x27f1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27f1bc:
    // 0x27f1bc: 0x0  nop
    ctx->pc = 0x27f1bcu;
    // NOP
    ctx->pc = 0x27f1c0u;
}
