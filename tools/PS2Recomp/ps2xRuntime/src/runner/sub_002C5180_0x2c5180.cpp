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

// Function: sub_002C5180
// Address: 0x2c5180 - 0x2c5220
void sub_002C5180_0x2c5180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5180_0x2c5180");
#endif

    switch (ctx->pc) {
        case 0x2c5180u: goto label_2c5180;
        case 0x2c5184u: goto label_2c5184;
        case 0x2c5188u: goto label_2c5188;
        case 0x2c518cu: goto label_2c518c;
        case 0x2c5190u: goto label_2c5190;
        case 0x2c5194u: goto label_2c5194;
        case 0x2c5198u: goto label_2c5198;
        case 0x2c519cu: goto label_2c519c;
        case 0x2c51a0u: goto label_2c51a0;
        case 0x2c51a4u: goto label_2c51a4;
        case 0x2c51a8u: goto label_2c51a8;
        case 0x2c51acu: goto label_2c51ac;
        case 0x2c51b0u: goto label_2c51b0;
        case 0x2c51b4u: goto label_2c51b4;
        case 0x2c51b8u: goto label_2c51b8;
        case 0x2c51bcu: goto label_2c51bc;
        case 0x2c51c0u: goto label_2c51c0;
        case 0x2c51c4u: goto label_2c51c4;
        case 0x2c51c8u: goto label_2c51c8;
        case 0x2c51ccu: goto label_2c51cc;
        case 0x2c51d0u: goto label_2c51d0;
        case 0x2c51d4u: goto label_2c51d4;
        case 0x2c51d8u: goto label_2c51d8;
        case 0x2c51dcu: goto label_2c51dc;
        case 0x2c51e0u: goto label_2c51e0;
        case 0x2c51e4u: goto label_2c51e4;
        case 0x2c51e8u: goto label_2c51e8;
        case 0x2c51ecu: goto label_2c51ec;
        case 0x2c51f0u: goto label_2c51f0;
        case 0x2c51f4u: goto label_2c51f4;
        case 0x2c51f8u: goto label_2c51f8;
        case 0x2c51fcu: goto label_2c51fc;
        case 0x2c5200u: goto label_2c5200;
        case 0x2c5204u: goto label_2c5204;
        case 0x2c5208u: goto label_2c5208;
        case 0x2c520cu: goto label_2c520c;
        case 0x2c5210u: goto label_2c5210;
        case 0x2c5214u: goto label_2c5214;
        case 0x2c5218u: goto label_2c5218;
        case 0x2c521cu: goto label_2c521c;
        default: break;
    }

    ctx->pc = 0x2c5180u;

label_2c5180:
    // 0x2c5180: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c5180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c5184:
    // 0x2c5184: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2c5184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2c5188:
    // 0x2c5188: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c5188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c518c:
    // 0x2c518c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c518cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c5190:
    // 0x2c5190: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c5190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2c5194:
    // 0x2c5194: 0x3c117000  lui         $s1, 0x7000
    ctx->pc = 0x2c5194u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)28672 << 16));
label_2c5198:
    // 0x2c5198: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2c5198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2c519c:
    // 0x2c519c: 0x911024  and         $v0, $a0, $s1
    ctx->pc = 0x2c519cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 17));
label_2c51a0:
    // 0x2c51a0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_2c51a4:
    if (ctx->pc == 0x2C51A4u) {
        ctx->pc = 0x2C51A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C51A0u;
        // 0x2c51a4: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C51A8u;
        goto label_2c51a8;
    }
    ctx->pc = 0x2C51A0u;
    {
        const bool branch_taken_0x2c51a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c51a0) {
            ctx->pc = 0x2C51A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C51A0u;
            // 0x2c51a4: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C51BCu;
            goto label_2c51bc;
        }
    }
    ctx->pc = 0x2C51A8u;
label_2c51a8:
    // 0x2c51a8: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2c51a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_2c51ac:
    // 0x2c51ac: 0x8c6210d4  lw          $v0, 0x10D4($v1)
    ctx->pc = 0x2c51acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4308)));
label_2c51b0:
    // 0x2c51b0: 0x40f809  jalr        $v0
label_2c51b4:
    if (ctx->pc == 0x2C51B4u) {
        ctx->pc = 0x2C51B8u;
        goto label_2c51b8;
    }
    ctx->pc = 0x2C51B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C51B8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C51B0u, 0x2C51B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C51B8u;
label_2c51b8:
    // 0x2c51b8: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x2c51b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2c51bc:
    // 0x2c51bc: 0x911024  and         $v0, $a0, $s1
    ctx->pc = 0x2c51bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 17));
label_2c51c0:
    // 0x2c51c0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2c51c4:
    if (ctx->pc == 0x2C51C4u) {
        ctx->pc = 0x2C51C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C51C0u;
        // 0x2c51c4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C51C8u;
        goto label_2c51c8;
    }
    ctx->pc = 0x2C51C0u;
    {
        const bool branch_taken_0x2c51c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c51c0) {
            ctx->pc = 0x2C51C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C51C0u;
            // 0x2c51c4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C51D4u;
            goto label_2c51d4;
        }
    }
    ctx->pc = 0x2C51C8u;
label_2c51c8:
    // 0x2c51c8: 0xc0ad2d0  jal         func_2B4B40
label_2c51cc:
    if (ctx->pc == 0x2C51CCu) {
        ctx->pc = 0x2C51D0u;
        goto label_2c51d0;
    }
    ctx->pc = 0x2C51C8u;
    SET_GPR_U32(ctx, 31, 0x2C51D0u);
    ctx->pc = 0x2B4B40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4B40u, 0x2C51C8u, 0x2C51D0u)) {
        return;
    }
    ctx->pc = 0x2C51D0u;
label_2c51d0:
    // 0x2c51d0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2c51d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c51d4:
    // 0x2c51d4: 0x911024  and         $v0, $a0, $s1
    ctx->pc = 0x2c51d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 17));
label_2c51d8:
    // 0x2c51d8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_2c51dc:
    if (ctx->pc == 0x2C51DCu) {
        ctx->pc = 0x2C51DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C51D8u;
        // 0x2c51dc: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C51E0u;
        goto label_2c51e0;
    }
    ctx->pc = 0x2C51D8u;
    {
        const bool branch_taken_0x2c51d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c51d8) {
            ctx->pc = 0x2C51DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C51D8u;
            // 0x2c51dc: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C51F4u;
            goto label_2c51f4;
        }
    }
    ctx->pc = 0x2C51E0u;
label_2c51e0:
    // 0x2c51e0: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2c51e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_2c51e4:
    // 0x2c51e4: 0x8c6210d4  lw          $v0, 0x10D4($v1)
    ctx->pc = 0x2c51e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4308)));
label_2c51e8:
    // 0x2c51e8: 0x40f809  jalr        $v0
label_2c51ec:
    if (ctx->pc == 0x2C51ECu) {
        ctx->pc = 0x2C51F0u;
        goto label_2c51f0;
    }
    ctx->pc = 0x2C51E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C51F0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C51E8u, 0x2C51F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C51F0u;
label_2c51f0:
    // 0x2c51f0: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x2c51f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2c51f4:
    // 0x2c51f4: 0x911024  and         $v0, $a0, $s1
    ctx->pc = 0x2c51f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 17));
label_2c51f8:
    // 0x2c51f8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2c51fc:
    if (ctx->pc == 0x2C51FCu) {
        ctx->pc = 0x2C51FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C51F8u;
        // 0x2c51fc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5200u;
        goto label_2c5200;
    }
    ctx->pc = 0x2C51F8u;
    {
        const bool branch_taken_0x2c51f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C51FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C51F8u;
        // 0x2c51fc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c51f8) {
            ctx->pc = 0x2C520Cu;
            goto label_2c520c;
        }
    }
    ctx->pc = 0x2C5200u;
label_2c5200:
    // 0x2c5200: 0xc0ad2d0  jal         func_2B4B40
label_2c5204:
    if (ctx->pc == 0x2C5204u) {
        ctx->pc = 0x2C5208u;
        goto label_2c5208;
    }
    ctx->pc = 0x2C5200u;
    SET_GPR_U32(ctx, 31, 0x2C5208u);
    ctx->pc = 0x2B4B40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4B40u, 0x2C5200u, 0x2C5208u)) {
        return;
    }
    ctx->pc = 0x2C5208u;
label_2c5208:
    // 0x2c5208: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2c5208u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c520c:
    // 0x2c520c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c520cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c5210:
    // 0x2c5210: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c5210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c5214:
    // 0x2c5214: 0x3e00008  jr          $ra
label_2c5218:
    if (ctx->pc == 0x2C5218u) {
        ctx->pc = 0x2C5218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5214u;
        // 0x2c5218: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C521Cu;
        goto label_2c521c;
    }
    ctx->pc = 0x2C5214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5214u;
        // 0x2c5218: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C521Cu;
label_2c521c:
    // 0x2c521c: 0x0  nop
    ctx->pc = 0x2c521cu;
    // NOP
    ctx->pc = 0x2c5220u;
}
