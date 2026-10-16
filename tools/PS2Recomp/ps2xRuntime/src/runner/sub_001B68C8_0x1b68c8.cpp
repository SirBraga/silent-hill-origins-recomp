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

// Function: sub_001B68C8
// Address: 0x1b68c8 - 0x1b6980
void sub_001B68C8_0x1b68c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B68C8_0x1b68c8");
#endif

    switch (ctx->pc) {
        case 0x1b68e4u: goto label_1b68e4;
        case 0x1b68f8u: goto label_1b68f8;
        case 0x1b6920u: goto label_1b6920;
        case 0x1b693cu: goto label_1b693c;
        case 0x1b6968u: goto label_1b6968;
        default: break;
    }

    ctx->pc = 0x1b68c8u;

    // 0x1b68c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b68c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b68cc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b68ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b68d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b68d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b68d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b68d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b68d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b68d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b68dc: 0xc06bbf8  jal         func_1AEFE0
    ctx->pc = 0x1B68DCu;
    SET_GPR_U32(ctx, 31, 0x1B68E4u);
    ctx->pc = 0x1B68E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B68DCu;
    // 0x1b68e0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEFE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AEFE0u, 0x1B68DCu, 0x1B68E4u)) {
        return;
    }
    ctx->pc = 0x1B68E4u;
label_1b68e4:
    // 0x1b68e4: 0x52000021  beql        $s0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x1B68E4u;
    {
        const bool branch_taken_0x1b68e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b68e4) {
            ctx->pc = 0x1B68E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B68E4u;
            // 0x1b68e8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B696Cu;
            goto label_1b696c;
        }
    }
    ctx->pc = 0x1B68ECu;
    // 0x1b68ec: 0xc60c0004  lwc1        $f12, 0x4($s0)
    ctx->pc = 0x1b68ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b68f0: 0xc06d8f2  jal         func_1B63C8
    ctx->pc = 0x1B68F0u;
    SET_GPR_U32(ctx, 31, 0x1B68F8u);
    ctx->pc = 0x1B68F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B68F0u;
    // 0x1b68f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B63C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B63C8u, 0x1B68F0u, 0x1B68F8u)) {
        return;
    }
    ctx->pc = 0x1B68F8u;
label_1b68f8:
    // 0x1b68f8: 0x8e22028c  lw          $v0, 0x28C($s1)
    ctx->pc = 0x1b68f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 652)));
    // 0x1b68fc: 0x2623028c  addiu       $v1, $s1, 0x28C
    ctx->pc = 0x1b68fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 652));
    // 0x1b6900: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B6900u;
    {
        const bool branch_taken_0x1b6900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6900u;
        // 0x1b6904: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6900) {
            ctx->pc = 0x1B6910u;
            goto label_1b6910;
        }
    }
    ctx->pc = 0x1B6908u;
    // 0x1b6908: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1b6908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1b690c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b690cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b6910:
    // 0x1b6910: 0x50a0000b  beql        $a1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1B6910u;
    {
        const bool branch_taken_0x1b6910 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6910) {
            ctx->pc = 0x1B6914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6910u;
            // 0x1b6914: 0x8e2202a4  lw          $v0, 0x2A4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 676)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6940u;
            goto label_1b6940;
        }
    }
    ctx->pc = 0x1B6918u;
    // 0x1b6918: 0xc06db38  jal         func_1B6CE0
    ctx->pc = 0x1B6918u;
    SET_GPR_U32(ctx, 31, 0x1B6920u);
    ctx->pc = 0x1B691Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6918u;
    // 0x1b691c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6CE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6CE0u, 0x1B6918u, 0x1B6920u)) {
        return;
    }
    ctx->pc = 0x1B6920u;
label_1b6920:
    // 0x1b6920: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B6920u;
    {
        const bool branch_taken_0x1b6920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6920) {
            ctx->pc = 0x1B6924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6920u;
            // 0x1b6924: 0x8e2202a4  lw          $v0, 0x2A4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 676)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6940u;
            goto label_1b6940;
        }
    }
    ctx->pc = 0x1B6928u;
    // 0x1b6928: 0x8e2202a0  lw          $v0, 0x2A0($s1)
    ctx->pc = 0x1b6928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 672)));
    // 0x1b692c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B692Cu;
    {
        const bool branch_taken_0x1b692c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b692c) {
            ctx->pc = 0x1B6930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B692Cu;
            // 0x1b6930: 0x8e2202a4  lw          $v0, 0x2A4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 676)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6940u;
            goto label_1b6940;
        }
    }
    ctx->pc = 0x1B6934u;
    // 0x1b6934: 0xc06d898  jal         func_1B6260
    ctx->pc = 0x1B6934u;
    SET_GPR_U32(ctx, 31, 0x1B693Cu);
    ctx->pc = 0x1B6938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6934u;
    // 0x1b6938: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6260u, 0x1B6934u, 0x1B693Cu)) {
        return;
    }
    ctx->pc = 0x1B693Cu;
label_1b693c:
    // 0x1b693c: 0x8e2202a4  lw          $v0, 0x2A4($s1)
    ctx->pc = 0x1b693cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 676)));
label_1b6940:
    // 0x1b6940: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B6940u;
    {
        const bool branch_taken_0x1b6940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6940u;
        // 0x1b6944: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6940) {
            ctx->pc = 0x1B696Cu;
            goto label_1b696c;
        }
    }
    ctx->pc = 0x1B6948u;
    // 0x1b6948: 0x8e2202a0  lw          $v0, 0x2A0($s1)
    ctx->pc = 0x1b6948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 672)));
    // 0x1b694c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B694Cu;
    {
        const bool branch_taken_0x1b694c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B694Cu;
        // 0x1b6950: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b694c) {
            ctx->pc = 0x1B696Cu;
            goto label_1b696c;
        }
    }
    ctx->pc = 0x1B6954u;
    // 0x1b6954: 0x8e240044  lw          $a0, 0x44($s1)
    ctx->pc = 0x1b6954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1b6958: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b6958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b695c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b695cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b6960: 0xc06c9b4  jal         func_1B26D0
    ctx->pc = 0x1B6960u;
    SET_GPR_U32(ctx, 31, 0x1B6968u);
    ctx->pc = 0x1B6964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6960u;
    // 0x1b6964: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B26D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B26D0u, 0x1B6960u, 0x1B6968u)) {
        return;
    }
    ctx->pc = 0x1B6968u;
label_1b6968:
    // 0x1b6968: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b6968u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b696c:
    // 0x1b696c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b696cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6970: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b6970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6974: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6974u;
        // 0x1b6978: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B697Cu;
    // 0x1b697c: 0x0  nop
    ctx->pc = 0x1b697cu;
    // NOP
    ctx->pc = 0x1b6980u;
}
