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

// Function: sub_002F1020
// Address: 0x2f1020 - 0x2f1140
void sub_002F1020_0x2f1020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1020_0x2f1020");
#endif

    switch (ctx->pc) {
        case 0x2f1078u: goto label_2f1078;
        case 0x2f1098u: goto label_2f1098;
        case 0x2f10b8u: goto label_2f10b8;
        case 0x2f10d4u: goto label_2f10d4;
        case 0x2f10f4u: goto label_2f10f4;
        case 0x2f110cu: goto label_2f110c;
        case 0x2f1114u: goto label_2f1114;
        default: break;
    }

    ctx->pc = 0x2f1020u;

    // 0x2f1020: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2f1020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2f1024: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2f1024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2f1028: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2f1028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2f102c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2f102cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2f1030: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x2f1030u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1034: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2f1034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2f1038: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2f1038u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f103c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2f103cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2f1040: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2f1040u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1044: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f1044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f1048: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2f1048u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f104c: 0x8c436338  lw          $v1, 0x6338($v0)
    ctx->pc = 0x2f104cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x686338u));
    // 0x2f1050: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f1050u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1054: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2f1054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2f1058: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2f1058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f105c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F105Cu;
    {
        const bool branch_taken_0x2f105c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F1060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F105Cu;
        // 0x2f1060: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f105c) {
            ctx->pc = 0x2F1070u;
            goto label_2f1070;
        }
    }
    ctx->pc = 0x2F1064u;
    // 0x2f1064: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f1064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f1068: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2F1068u;
    {
        const bool branch_taken_0x2f1068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F106Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1068u;
        // 0x2f106c: 0x34428001  ori         $v0, $v0, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1068) {
            ctx->pc = 0x2F1118u;
            goto label_2f1118;
        }
    }
    ctx->pc = 0x2F1070u;
label_2f1070:
    // 0x2f1070: 0xc0bdfde  jal         func_2F7F78
    ctx->pc = 0x2F1070u;
    SET_GPR_U32(ctx, 31, 0x2F1078u);
    ctx->pc = 0x2F1074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1070u;
    // 0x2f1074: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7F78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F7F78u, 0x2F1070u, 0x2F1078u)) {
        return;
    }
    ctx->pc = 0x2F1078u;
label_2f1078:
    // 0x2f1078: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f1078u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f107c: 0x6210004  bgez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F107Cu;
    {
        const bool branch_taken_0x2f107c = (GPR_S64(ctx, 17) >= 0);
        if (branch_taken_0x2f107c) {
            ctx->pc = 0x2F1090u;
            goto label_2f1090;
        }
    }
    ctx->pc = 0x2F1084u;
    // 0x2f1084: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f1084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f1088: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2F1088u;
    {
        const bool branch_taken_0x2f1088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F108Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1088u;
        // 0x2f108c: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1088) {
            ctx->pc = 0x2F1118u;
            goto label_2f1118;
        }
    }
    ctx->pc = 0x2F1090u;
label_2f1090:
    // 0x2f1090: 0xc0c4ab8  jal         func_312AE0
    ctx->pc = 0x2F1090u;
    SET_GPR_U32(ctx, 31, 0x2F1098u);
    ctx->pc = 0x2F1094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1090u;
    // 0x2f1094: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x2F1090u, 0x2F1098u)) {
        return;
    }
    ctx->pc = 0x2F1098u;
label_2f1098:
    // 0x2f1098: 0x2c420080  sltiu       $v0, $v0, 0x80
    ctx->pc = 0x2f1098u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x2f109c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F109Cu;
    {
        const bool branch_taken_0x2f109c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F10A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F109Cu;
        // 0x2f10a0: 0x3c120071  lui         $s2, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f109c) {
            ctx->pc = 0x2F10B0u;
            goto label_2f10b0;
        }
    }
    ctx->pc = 0x2F10A4u;
    // 0x2f10a4: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f10a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f10a8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2F10A8u;
    {
        const bool branch_taken_0x2f10a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F10ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F10A8u;
        // 0x2f10ac: 0x3442005b  ori         $v0, $v0, 0x5B (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)91);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f10a8) {
            ctx->pc = 0x2F1118u;
            goto label_2f1118;
        }
    }
    ctx->pc = 0x2F10B0u;
label_2f10b0:
    // 0x2f10b0: 0xc0c84d8  jal         func_321360
    ctx->pc = 0x2F10B0u;
    SET_GPR_U32(ctx, 31, 0x2F10B8u);
    ctx->pc = 0x2F10B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F10B0u;
    // 0x2f10b4: 0x8e44f62c  lw          $a0, -0x9D4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294964780)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321360u, 0x2F10B0u, 0x2F10B8u)) {
        return;
    }
    ctx->pc = 0x2F10B8u;
label_2f10b8:
    // 0x2f10b8: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2f10b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x2f10bc: 0x2470f100  addiu       $s0, $v1, -0xF00
    ctx->pc = 0x2f10bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963456));
    // 0x2f10c0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2f10c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x70F104u));
    // 0x2f10c4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F10C4u;
    {
        const bool branch_taken_0x2f10c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f10c4) {
            ctx->pc = 0x2F10C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F10C4u;
            // 0x2f10c8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F10E0u;
            goto label_2f10e0;
        }
    }
    ctx->pc = 0x2F10CCu;
    // 0x2f10cc: 0xc0c84d0  jal         func_321340
    ctx->pc = 0x2F10CCu;
    SET_GPR_U32(ctx, 31, 0x2F10D4u);
    ctx->pc = 0x2F10D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F10CCu;
    // 0x2f10d0: 0x8e44f62c  lw          $a0, -0x9D4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294964780)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x2F10CCu, 0x2F10D4u)) {
        return;
    }
    ctx->pc = 0x2F10D4u;
label_2f10d4:
    // 0x2f10d4: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f10d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f10d8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2F10D8u;
    {
        const bool branch_taken_0x2f10d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F10DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F10D8u;
        // 0x2f10dc: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f10d8) {
            ctx->pc = 0x2F1118u;
            goto label_2f1118;
        }
    }
    ctx->pc = 0x2F10E0u;
label_2f10e0:
    // 0x2f10e0: 0xac71f100  sw          $s1, -0xF00($v1)
    ctx->pc = 0x2f10e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963456), GPR_U32(ctx, 17));
    // 0x2f10e4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2f10e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2f10e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f10e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f10ec: 0xc0c4a72  jal         func_3129C8
    ctx->pc = 0x2F10ECu;
    SET_GPR_U32(ctx, 31, 0x2F10F4u);
    ctx->pc = 0x2F10F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F10ECu;
    // 0x2f10f0: 0x2604041c  addiu       $a0, $s0, 0x41C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1052));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3129C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3129C8u, 0x2F10ECu, 0x2F10F4u)) {
        return;
    }
    ctx->pc = 0x2F10F4u;
label_2f10f4:
    // 0x2f10f4: 0xae140014  sw          $s4, 0x14($s0)
    ctx->pc = 0x2f10f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 20));
    // 0x2f10f8: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2f10f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x2f10fc: 0x8c64f624  lw          $a0, -0x9DC($v1)
    ctx->pc = 0x2f10fcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x70F624u));
    // 0x2f1100: 0xae15000c  sw          $s5, 0xC($s0)
    ctx->pc = 0x2f1100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 21));
    // 0x2f1104: 0xc0c84d0  jal         func_321340
    ctx->pc = 0x2F1104u;
    SET_GPR_U32(ctx, 31, 0x2F110Cu);
    ctx->pc = 0x2F1108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1104u;
    // 0x2f1108: 0xae160010  sw          $s6, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x2F1104u, 0x2F110Cu)) {
        return;
    }
    ctx->pc = 0x2F110Cu;
label_2f110c:
    // 0x2f110c: 0xc0c84d0  jal         func_321340
    ctx->pc = 0x2F110Cu;
    SET_GPR_U32(ctx, 31, 0x2F1114u);
    ctx->pc = 0x2F1110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F110Cu;
    // 0x2f1110: 0x8e44f62c  lw          $a0, -0x9D4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294964780)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x2F110Cu, 0x2F1114u)) {
        return;
    }
    ctx->pc = 0x2F1114u;
label_2f1114:
    // 0x2f1114: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f1114u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f1118:
    // 0x2f1118: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2f1118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f111c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2f111cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f1120: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2f1120u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f1124: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2f1124u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f1128: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2f1128u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f112c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2f112cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f1130: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f1130u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f1134: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f1134u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f1138: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F113Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1138u;
        // 0x2f113c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1140u;
}
