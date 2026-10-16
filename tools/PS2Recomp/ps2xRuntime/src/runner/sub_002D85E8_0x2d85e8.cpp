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

// Function: sub_002D85E8
// Address: 0x2d85e8 - 0x2d8ba0
void sub_002D85E8_0x2d85e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D85E8_0x2d85e8");
#endif

    switch (ctx->pc) {
        case 0x2d8658u: goto label_2d8658;
        case 0x2d8670u: goto label_2d8670;
        case 0x2d86f8u: goto label_2d86f8;
        case 0x2d872cu: goto label_2d872c;
        case 0x2d8764u: goto label_2d8764;
        case 0x2d8780u: goto label_2d8780;
        case 0x2d87acu: goto label_2d87ac;
        case 0x2d87d4u: goto label_2d87d4;
        case 0x2d8800u: goto label_2d8800;
        case 0x2d882cu: goto label_2d882c;
        case 0x2d88c0u: goto label_2d88c0;
        case 0x2d8904u: goto label_2d8904;
        case 0x2d8950u: goto label_2d8950;
        case 0x2d8970u: goto label_2d8970;
        case 0x2d89b4u: goto label_2d89b4;
        case 0x2d89fcu: goto label_2d89fc;
        case 0x2d8a40u: goto label_2d8a40;
        case 0x2d8a88u: goto label_2d8a88;
        case 0x2d8ae8u: goto label_2d8ae8;
        case 0x2d8b0cu: goto label_2d8b0c;
        case 0x2d8b50u: goto label_2d8b50;
        default: break;
    }

    ctx->pc = 0x2d85e8u;

    // 0x2d85e8: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2d85e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2d85ec: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x2d85ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x2d85f0: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x2d85f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x2d85f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2d85f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d85f8: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x2d85f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x2d85fc: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x2d85fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x2d8600: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x2d8600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x2d8604: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x2d8604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x2d8608: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x2d8608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x2d860c: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x2d860cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x2d8610: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2d8610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2d8614: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2d8614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2d8618: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x2d8618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x2d861c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2d861cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d8620: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2d8620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d8624: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2d8624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2d8628: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x2d8628u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2d862c: 0x10600150  beqz        $v1, . + 4 + (0x150 << 2)
    ctx->pc = 0x2D862Cu;
    {
        const bool branch_taken_0x2d862c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D862Cu;
        // 0x2d8630: 0x8fa20064  lw          $v0, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d862c) {
            ctx->pc = 0x2D8B70u;
            goto label_2d8b70;
        }
    }
    ctx->pc = 0x2D8634u;
    // 0x2d8634: 0xafb30064  sw          $s3, 0x64($sp)
    ctx->pc = 0x2d8634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 19));
    // 0x2d8638: 0x8e7e0004  lw          $fp, 0x4($s3)
    ctx->pc = 0x2d8638u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2d863c: 0x8e770024  lw          $s7, 0x24($s3)
    ctx->pc = 0x2d863cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x2d8640: 0x97c20008  lhu         $v0, 0x8($fp)
    ctx->pc = 0x2d8640u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2d8644: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d8644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8648: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x2d8648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x2d864c: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2d864cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2d8650: 0xc0ab586  jal         func_2AD618
    ctx->pc = 0x2D8650u;
    SET_GPR_U32(ctx, 31, 0x2D8658u);
    ctx->pc = 0x2D8654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8650u;
    // 0x2d8654: 0xafa30068  sw          $v1, 0x68($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD618u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD618u, 0x2D8650u, 0x2D8658u)) {
        return;
    }
    ctx->pc = 0x2D8658u;
label_2d8658:
    // 0x2d8658: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2d8658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d865c: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2d865cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2d8660: 0x14400143  bnez        $v0, . + 4 + (0x143 << 2)
    ctx->pc = 0x2D8660u;
    {
        const bool branch_taken_0x2d8660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8660u;
        // 0x2d8664: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8660) {
            ctx->pc = 0x2D8B70u;
            goto label_2d8b70;
        }
    }
    ctx->pc = 0x2D8668u;
    // 0x2d8668: 0xc0ab588  jal         func_2AD620
    ctx->pc = 0x2D8668u;
    SET_GPR_U32(ctx, 31, 0x2D8670u);
    ctx->pc = 0x2D866Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8668u;
    // 0x2d866c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD620u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD620u, 0x2D8668u, 0x2D8670u)) {
        return;
    }
    ctx->pc = 0x2D8670u;
label_2d8670:
    // 0x2d8670: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x2d8670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d8674: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x2d8674u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2d8678: 0x1440013d  bnez        $v0, . + 4 + (0x13D << 2)
    ctx->pc = 0x2D8678u;
    {
        const bool branch_taken_0x2d8678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D867Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8678u;
        // 0x2d867c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8678) {
            ctx->pc = 0x2D8B70u;
            goto label_2d8b70;
        }
    }
    ctx->pc = 0x2D8680u;
    // 0x2d8680: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x2d8680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x2d8684: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2d8684u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8688: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d8688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d868c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2d868cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2d8690: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d8690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d8694: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x2d8694u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x2d8698: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2d8698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d869c: 0x10600069  beqz        $v1, . + 4 + (0x69 << 2)
    ctx->pc = 0x2D869Cu;
    {
        const bool branch_taken_0x2d869c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D86A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D869Cu;
        // 0x2d86a0: 0xaf808b40  sw          $zero, -0x74C0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937408), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d869c) {
            ctx->pc = 0x2D8844u;
            goto label_2d8844;
        }
    }
    ctx->pc = 0x2D86A4u;
    // 0x2d86a4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2d86a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d86a8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2d86a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d86ac: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2d86acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d86b0: 0x18800023  blez        $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2D86B0u;
    {
        const bool branch_taken_0x2d86b0 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x2D86B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D86B0u;
        // 0x2d86b4: 0x30630003  andi        $v1, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d86b0) {
            ctx->pc = 0x2D8740u;
            goto label_2d8740;
        }
    }
    ctx->pc = 0x2D86B8u;
    // 0x2d86b8: 0x50600032  beql        $v1, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x2D86B8u;
    {
        const bool branch_taken_0x2d86b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d86b8) {
            ctx->pc = 0x2D86BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D86B8u;
            // 0x2d86bc: 0x8e620010  lw          $v0, 0x10($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D8784u;
            goto label_2d8784;
        }
    }
    ctx->pc = 0x2D86C0u;
    // 0x2d86c0: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2d86c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2d86c4: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x2D86C4u;
    {
        const bool branch_taken_0x2d86c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d86c4) {
            ctx->pc = 0x2D86C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D86C4u;
            // 0x2d86c8: 0x8e620010  lw          $v0, 0x10($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D8744u;
            goto label_2d8744;
        }
    }
    ctx->pc = 0x2D86CCu;
    // 0x2d86cc: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2d86ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2d86d0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D86D0u;
    {
        const bool branch_taken_0x2d86d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D86D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D86D0u;
        // 0x2d86d4: 0x8fa50064  lw          $a1, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d86d0) {
            ctx->pc = 0x2D8708u;
            goto label_2d8708;
        }
    }
    ctx->pc = 0x2D86D8u;
    // 0x2d86d8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d86d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d86dc: 0x2415000c  addiu       $s5, $zero, 0xC
    ctx->pc = 0x2d86dcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2d86e0: 0x2416004c  addiu       $s6, $zero, 0x4C
    ctx->pc = 0x2d86e0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x2d86e4: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x2d86e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2d86e8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2d86e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d86ec: 0x8fc50014  lw          $a1, 0x14($fp)
    ctx->pc = 0x2d86ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2d86f0: 0xc0ab80c  jal         func_2AE030
    ctx->pc = 0x2D86F0u;
    SET_GPR_U32(ctx, 31, 0x2D86F8u);
    ctx->pc = 0x2D86F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D86F0u;
    // 0x2d86f4: 0x8c460008  lw          $a2, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AE030u, 0x2D86F0u, 0x2D86F8u)) {
        return;
    }
    ctx->pc = 0x2D86F8u;
label_2d86f8:
    // 0x2d86f8: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x2d86f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x2d86fc: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2d86fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2d8700: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2d8700u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2d8704: 0x8fa50064  lw          $a1, 0x64($sp)
    ctx->pc = 0x2d8704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_2d8708:
    // 0x2d8708: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d8708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d870c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2d870cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2d8710: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x2d8710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2d8714: 0x8fc50014  lw          $a1, 0x14($fp)
    ctx->pc = 0x2d8714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2d8718: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x2d8718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2d871c: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x2d871cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d8720: 0xb62821  addu        $a1, $a1, $s6
    ctx->pc = 0x2d8720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x2d8724: 0xc0ab80c  jal         func_2AE030
    ctx->pc = 0x2D8724u;
    SET_GPR_U32(ctx, 31, 0x2D872Cu);
    ctx->pc = 0x2D8728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8724u;
    // 0x2d8728: 0x26d6004c  addiu       $s6, $s6, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AE030u, 0x2D8724u, 0x2D872Cu)) {
        return;
    }
    ctx->pc = 0x2D872Cu;
label_2d872c:
    // 0x2d872c: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x2d872cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x2d8730: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2d8730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2d8734: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x2d8734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x2d8738: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2d8738u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2d873c: 0x26b5000c  addiu       $s5, $s5, 0xC
    ctx->pc = 0x2d873cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
label_2d8740:
    // 0x2d8740: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x2d8740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2d8744:
    // 0x2d8744: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d8744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8748: 0x8fc50014  lw          $a1, 0x14($fp)
    ctx->pc = 0x2d8748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2d874c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2d874cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2d8750: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x2d8750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2d8754: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x2d8754u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d8758: 0xb62821  addu        $a1, $a1, $s6
    ctx->pc = 0x2d8758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x2d875c: 0xc0ab80c  jal         func_2AE030
    ctx->pc = 0x2D875Cu;
    SET_GPR_U32(ctx, 31, 0x2D8764u);
    ctx->pc = 0x2D8760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D875Cu;
    // 0x2d8760: 0x26d6004c  addiu       $s6, $s6, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AE030u, 0x2D875Cu, 0x2D8764u)) {
        return;
    }
    ctx->pc = 0x2D8764u;
label_2d8764:
    // 0x2d8764: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x2d8764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2d8768: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x2d8768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d876c: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x2d876cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x2d8770: 0x285202b  sltu        $a0, $s4, $a1
    ctx->pc = 0x2d8770u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2d8774: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2d8774u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2d8778: 0x10800032  beqz        $a0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2D8778u;
    {
        const bool branch_taken_0x2d8778 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D877Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8778u;
        // 0x2d877c: 0x26b5000c  addiu       $s5, $s5, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8778) {
            ctx->pc = 0x2D8844u;
            goto label_2d8844;
        }
    }
    ctx->pc = 0x2D8780u;
label_2d8780:
    // 0x2d8780: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x2d8780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2d8784:
    // 0x2d8784: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d8784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8788: 0x8fc50014  lw          $a1, 0x14($fp)
    ctx->pc = 0x2d8788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2d878c: 0x26b0000c  addiu       $s0, $s5, 0xC
    ctx->pc = 0x2d878cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
    // 0x2d8790: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x2d8790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2d8794: 0x26b10018  addiu       $s1, $s5, 0x18
    ctx->pc = 0x2d8794u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 24));
    // 0x2d8798: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x2d8798u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d879c: 0xb62821  addu        $a1, $a1, $s6
    ctx->pc = 0x2d879cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x2d87a0: 0x26b20024  addiu       $s2, $s5, 0x24
    ctx->pc = 0x2d87a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 36));
    // 0x2d87a4: 0xc0ab80c  jal         func_2AE030
    ctx->pc = 0x2D87A4u;
    SET_GPR_U32(ctx, 31, 0x2D87ACu);
    ctx->pc = 0x2D87A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D87A4u;
    // 0x2d87a8: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AE030u, 0x2D87A4u, 0x2D87ACu)) {
        return;
    }
    ctx->pc = 0x2D87ACu;
label_2d87ac:
    // 0x2d87ac: 0x8e670010  lw          $a3, 0x10($s3)
    ctx->pc = 0x2d87acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2d87b0: 0x26c8004c  addiu       $t0, $s6, 0x4C
    ctx->pc = 0x2d87b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 76));
    // 0x2d87b4: 0x8fc50014  lw          $a1, 0x14($fp)
    ctx->pc = 0x2d87b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2d87b8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d87b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d87bc: 0x2071821  addu        $v1, $s0, $a3
    ctx->pc = 0x2d87bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x2d87c0: 0x2a73821  addu        $a3, $s5, $a3
    ctx->pc = 0x2d87c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
    // 0x2d87c4: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x2d87c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2d87c8: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x2d87c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x2d87cc: 0xc0ab80c  jal         func_2AE030
    ctx->pc = 0x2D87CCu;
    SET_GPR_U32(ctx, 31, 0x2D87D4u);
    ctx->pc = 0x2D87D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D87CCu;
    // 0x2d87d0: 0xace20004  sw          $v0, 0x4($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AE030u, 0x2D87CCu, 0x2D87D4u)) {
        return;
    }
    ctx->pc = 0x2D87D4u;
label_2d87d4:
    // 0x2d87d4: 0x26b50030  addiu       $s5, $s5, 0x30
    ctx->pc = 0x2d87d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x2d87d8: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x2d87d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2d87dc: 0x26c70098  addiu       $a3, $s6, 0x98
    ctx->pc = 0x2d87dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 152));
    // 0x2d87e0: 0x8fc50014  lw          $a1, 0x14($fp)
    ctx->pc = 0x2d87e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2d87e4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d87e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d87e8: 0x2261821  addu        $v1, $s1, $a2
    ctx->pc = 0x2d87e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x2d87ec: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x2d87ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x2d87f0: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x2d87f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2d87f4: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x2d87f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2d87f8: 0xc0ab80c  jal         func_2AE030
    ctx->pc = 0x2D87F8u;
    SET_GPR_U32(ctx, 31, 0x2D8800u);
    ctx->pc = 0x2D87FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D87F8u;
    // 0x2d87fc: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AE030u, 0x2D87F8u, 0x2D8800u)) {
        return;
    }
    ctx->pc = 0x2D8800u;
label_2d8800:
    // 0x2d8800: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x2d8800u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2d8804: 0x26c700e4  addiu       $a3, $s6, 0xE4
    ctx->pc = 0x2d8804u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 228));
    // 0x2d8808: 0x8fc50014  lw          $a1, 0x14($fp)
    ctx->pc = 0x2d8808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2d880c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d880cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8810: 0x2461821  addu        $v1, $s2, $a2
    ctx->pc = 0x2d8810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x2d8814: 0x2268821  addu        $s1, $s1, $a2
    ctx->pc = 0x2d8814u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x2d8818: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x2d8818u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2d881c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x2d881cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2d8820: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2d8820u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2d8824: 0xc0ab80c  jal         func_2AE030
    ctx->pc = 0x2D8824u;
    SET_GPR_U32(ctx, 31, 0x2D882Cu);
    ctx->pc = 0x2D8828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8824u;
    // 0x2d8828: 0x26d60130  addiu       $s6, $s6, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AE030u, 0x2D8824u, 0x2D882Cu)) {
        return;
    }
    ctx->pc = 0x2D882Cu;
label_2d882c:
    // 0x2d882c: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x2d882cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2d8830: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x2d8830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d8834: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x2d8834u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2d8838: 0x285202b  sltu        $a0, $s4, $a1
    ctx->pc = 0x2d8838u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2d883c: 0x1480ffd0  bnez        $a0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x2D883Cu;
    {
        const bool branch_taken_0x2d883c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D883Cu;
        // 0x2d8840: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d883c) {
            ctx->pc = 0x2D8780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8780;
        }
    }
    ctx->pc = 0x2D8844u;
label_2d8844:
    // 0x2d8844: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d8844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d8848: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2d8848u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d884c: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x2d884cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
    // 0x2d8850: 0x10400093  beqz        $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x2D8850u;
    {
        const bool branch_taken_0x2d8850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8850u;
        // 0x2d8854: 0xafb30010  sw          $s3, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8850) {
            ctx->pc = 0x2D8AA0u;
            goto label_2d8aa0;
        }
    }
    ctx->pc = 0x2D8858u;
    // 0x2d8858: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2d8858u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d885c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2d885cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8860: 0x1840002c  blez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2D8860u;
    {
        const bool branch_taken_0x2d8860 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2D8864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8860u;
        // 0x2d8864: 0x30430003  andi        $v1, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8860) {
            ctx->pc = 0x2D8914u;
            goto label_2d8914;
        }
    }
    ctx->pc = 0x2D8868u;
    // 0x2d8868: 0x50600042  beql        $v1, $zero, . + 4 + (0x42 << 2)
    ctx->pc = 0x2D8868u;
    {
        const bool branch_taken_0x2d8868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8868) {
            ctx->pc = 0x2D886Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D8868u;
            // 0x2d886c: 0x8fc3001c  lw          $v1, 0x1C($fp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D8974u;
            goto label_2d8974;
        }
    }
    ctx->pc = 0x2D8870u;
    // 0x2d8870: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2d8870u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2d8874: 0x54400028  bnel        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x2D8874u;
    {
        const bool branch_taken_0x2d8874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d8874) {
            ctx->pc = 0x2D8878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D8874u;
            // 0x2d8878: 0x8fc3001c  lw          $v1, 0x1C($fp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D8918u;
            goto label_2d8918;
        }
    }
    ctx->pc = 0x2D887Cu;
    // 0x2d887c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2d887cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2d8880: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D8880u;
    {
        const bool branch_taken_0x2d8880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d8880) {
            ctx->pc = 0x2D8884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D8880u;
            // 0x2d8884: 0x8fc3001c  lw          $v1, 0x1C($fp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D88CCu;
            goto label_2d88cc;
        }
    }
    ctx->pc = 0x2D8888u;
    // 0x2d8888: 0x8fc8001c  lw          $t0, 0x1C($fp)
    ctx->pc = 0x2d8888u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x2d888c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d888cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8890: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2d8890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2d8894: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2d8894u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8898: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x2d8898u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2d889c: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x2d889cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d88a0: 0x8c450018  lw          $a1, 0x18($v0)
    ctx->pc = 0x2d88a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2d88a4: 0x24150004  addiu       $s5, $zero, 0x4
    ctx->pc = 0x2d88a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d88a8: 0xa7a30004  sh          $v1, 0x4($sp)
    ctx->pc = 0x2d88a8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d88ac: 0x241600b4  addiu       $s6, $zero, 0xB4
    ctx->pc = 0x2d88acu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x2d88b0: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2d88b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d88b4: 0x95020002  lhu         $v0, 0x2($t0)
    ctx->pc = 0x2d88b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x2d88b8: 0xc0c25b2  jal         func_3096C8
    ctx->pc = 0x2D88B8u;
    SET_GPR_U32(ctx, 31, 0x2D88C0u);
    ctx->pc = 0x2D88BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D88B8u;
    // 0x2d88bc: 0xa7a20014  sh          $v0, 0x14($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 20), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3096C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3096C8u, 0x2D88B8u, 0x2D88C0u)) {
        return;
    }
    ctx->pc = 0x2D88C0u;
label_2d88c0:
    // 0x2d88c0: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x2d88c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x2d88c4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2d88c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2d88c8: 0x8fc3001c  lw          $v1, 0x1C($fp)
    ctx->pc = 0x2d88c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
label_2d88cc:
    // 0x2d88cc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d88ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d88d0: 0x8e680004  lw          $t0, 0x4($s3)
    ctx->pc = 0x2d88d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2d88d4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2d88d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d88d8: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x2d88d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x2d88dc: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x2d88dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d88e0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2d88e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d88e4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2d88e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2d88e8: 0x8d050018  lw          $a1, 0x18($t0)
    ctx->pc = 0x2d88e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x2d88ec: 0xa7a20004  sh          $v0, 0x4($sp)
    ctx->pc = 0x2d88ecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d88f0: 0xb62821  addu        $a1, $a1, $s6
    ctx->pc = 0x2d88f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x2d88f4: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x2d88f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d88f8: 0x26d600b4  addiu       $s6, $s6, 0xB4
    ctx->pc = 0x2d88f8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 180));
    // 0x2d88fc: 0xc0c25b2  jal         func_3096C8
    ctx->pc = 0x2D88FCu;
    SET_GPR_U32(ctx, 31, 0x2D8904u);
    ctx->pc = 0x2D8900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D88FCu;
    // 0x2d8900: 0xa7a20014  sh          $v0, 0x14($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 20), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3096C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3096C8u, 0x2D88FCu, 0x2D8904u)) {
        return;
    }
    ctx->pc = 0x2D8904u;
label_2d8904:
    // 0x2d8904: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x2d8904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x2d8908: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x2d8908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x2d890c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2d890cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2d8910: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x2d8910u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_2d8914:
    // 0x2d8914: 0x8fc3001c  lw          $v1, 0x1C($fp)
    ctx->pc = 0x2d8914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
label_2d8918:
    // 0x2d8918: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d8918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d891c: 0x8e680004  lw          $t0, 0x4($s3)
    ctx->pc = 0x2d891cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2d8920: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2d8920u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8924: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x2d8924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x2d8928: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x2d8928u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d892c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2d892cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d8930: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2d8930u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2d8934: 0x8d050018  lw          $a1, 0x18($t0)
    ctx->pc = 0x2d8934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x2d8938: 0xa7a20004  sh          $v0, 0x4($sp)
    ctx->pc = 0x2d8938u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d893c: 0xb62821  addu        $a1, $a1, $s6
    ctx->pc = 0x2d893cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x2d8940: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x2d8940u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d8944: 0x26d600b4  addiu       $s6, $s6, 0xB4
    ctx->pc = 0x2d8944u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 180));
    // 0x2d8948: 0xc0c25b2  jal         func_3096C8
    ctx->pc = 0x2D8948u;
    SET_GPR_U32(ctx, 31, 0x2D8950u);
    ctx->pc = 0x2D894Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8948u;
    // 0x2d894c: 0xa7a20014  sh          $v0, 0x14($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 20), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3096C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3096C8u, 0x2D8948u, 0x2D8950u)) {
        return;
    }
    ctx->pc = 0x2D8950u;
label_2d8950:
    // 0x2d8950: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x2d8950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x2d8954: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x2d8954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d8958: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x2d8958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x2d895c: 0x285202b  sltu        $a0, $s4, $a1
    ctx->pc = 0x2d895cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2d8960: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2d8960u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2d8964: 0x1080004e  beqz        $a0, . + 4 + (0x4E << 2)
    ctx->pc = 0x2D8964u;
    {
        const bool branch_taken_0x2d8964 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8964u;
        // 0x2d8968: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8964) {
            ctx->pc = 0x2D8AA0u;
            goto label_2d8aa0;
        }
    }
    ctx->pc = 0x2D896Cu;
    // 0x2d896c: 0x0  nop
    ctx->pc = 0x2d896cu;
    // NOP
label_2d8970:
    // 0x2d8970: 0x8fc3001c  lw          $v1, 0x1C($fp)
    ctx->pc = 0x2d8970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
label_2d8974:
    // 0x2d8974: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2d8974u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8978: 0x8e680004  lw          $t0, 0x4($s3)
    ctx->pc = 0x2d8978u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2d897c: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x2d897cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d8980: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x2d8980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x2d8984: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d8984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8988: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2d8988u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d898c: 0x26b00004  addiu       $s0, $s5, 0x4
    ctx->pc = 0x2d898cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x2d8990: 0x8d050018  lw          $a1, 0x18($t0)
    ctx->pc = 0x2d8990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x2d8994: 0x26b10008  addiu       $s1, $s5, 0x8
    ctx->pc = 0x2d8994u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x2d8998: 0xa7a20004  sh          $v0, 0x4($sp)
    ctx->pc = 0x2d8998u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d899c: 0x26b2000c  addiu       $s2, $s5, 0xC
    ctx->pc = 0x2d899cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
    // 0x2d89a0: 0xb62821  addu        $a1, $a1, $s6
    ctx->pc = 0x2d89a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x2d89a4: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x2d89a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x2d89a8: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x2d89a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d89ac: 0xc0c25b2  jal         func_3096C8
    ctx->pc = 0x2D89ACu;
    SET_GPR_U32(ctx, 31, 0x2D89B4u);
    ctx->pc = 0x2D89B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D89ACu;
    // 0x2d89b0: 0xa7a20014  sh          $v0, 0x14($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 20), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3096C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3096C8u, 0x2D89ACu, 0x2D89B4u)) {
        return;
    }
    ctx->pc = 0x2D89B4u;
label_2d89b4:
    // 0x2d89b4: 0x8fc8001c  lw          $t0, 0x1C($fp)
    ctx->pc = 0x2d89b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x2d89b8: 0x26ca00b4  addiu       $t2, $s6, 0xB4
    ctx->pc = 0x2d89b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 22), 180));
    // 0x2d89bc: 0x8e690004  lw          $t1, 0x4($s3)
    ctx->pc = 0x2d89bcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2d89c0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2d89c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d89c4: 0x2084021  addu        $t0, $s0, $t0
    ctx->pc = 0x2d89c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x2d89c8: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x2d89c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x2d89cc: 0x95040000  lhu         $a0, 0x0($t0)
    ctx->pc = 0x2d89ccu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2d89d0: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x2d89d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d89d4: 0x8d250018  lw          $a1, 0x18($t1)
    ctx->pc = 0x2d89d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x2d89d8: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x2d89d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x2d89dc: 0xa7a40004  sh          $a0, 0x4($sp)
    ctx->pc = 0x2d89dcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x2d89e0: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x2d89e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x2d89e4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2d89e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2d89e8: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x2d89e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x2d89ec: 0x95020002  lhu         $v0, 0x2($t0)
    ctx->pc = 0x2d89ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x2d89f0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d89f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d89f4: 0xc0c25b2  jal         func_3096C8
    ctx->pc = 0x2D89F4u;
    SET_GPR_U32(ctx, 31, 0x2D89FCu);
    ctx->pc = 0x2D89F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D89F4u;
    // 0x2d89f8: 0xa7a20014  sh          $v0, 0x14($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 20), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3096C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3096C8u, 0x2D89F4u, 0x2D89FCu)) {
        return;
    }
    ctx->pc = 0x2D89FCu;
label_2d89fc:
    // 0x2d89fc: 0x8fc3001c  lw          $v1, 0x1C($fp)
    ctx->pc = 0x2d89fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x2d8a00: 0x26ca0168  addiu       $t2, $s6, 0x168
    ctx->pc = 0x2d8a00u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 22), 360));
    // 0x2d8a04: 0x8e690004  lw          $t1, 0x4($s3)
    ctx->pc = 0x2d8a04u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2d8a08: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x2d8a08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d8a0c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2d8a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2d8a10: 0x8e640018  lw          $a0, 0x18($s3)
    ctx->pc = 0x2d8a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x2d8a14: 0x94680000  lhu         $t0, 0x0($v1)
    ctx->pc = 0x2d8a14u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d8a18: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2d8a18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8a1c: 0x8d250018  lw          $a1, 0x18($t1)
    ctx->pc = 0x2d8a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x2d8a20: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x2d8a20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2d8a24: 0xa7a80004  sh          $t0, 0x4($sp)
    ctx->pc = 0x2d8a24u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 8));
    // 0x2d8a28: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d8a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8a2c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2d8a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2d8a30: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x2d8a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x2d8a34: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x2d8a34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d8a38: 0xc0c25b2  jal         func_3096C8
    ctx->pc = 0x2D8A38u;
    SET_GPR_U32(ctx, 31, 0x2D8A40u);
    ctx->pc = 0x2D8A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8A38u;
    // 0x2d8a3c: 0xa7a20014  sh          $v0, 0x14($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 20), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3096C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3096C8u, 0x2D8A38u, 0x2D8A40u)) {
        return;
    }
    ctx->pc = 0x2D8A40u;
label_2d8a40:
    // 0x2d8a40: 0x8fc3001c  lw          $v1, 0x1C($fp)
    ctx->pc = 0x2d8a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x2d8a44: 0x26ca021c  addiu       $t2, $s6, 0x21C
    ctx->pc = 0x2d8a44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 22), 540));
    // 0x2d8a48: 0x8e690004  lw          $t1, 0x4($s3)
    ctx->pc = 0x2d8a48u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2d8a4c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d8a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8a50: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2d8a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2d8a54: 0x8e670018  lw          $a3, 0x18($s3)
    ctx->pc = 0x2d8a54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x2d8a58: 0x94680000  lhu         $t0, 0x0($v1)
    ctx->pc = 0x2d8a58u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d8a5c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2d8a5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8a60: 0x8d250018  lw          $a1, 0x18($t1)
    ctx->pc = 0x2d8a60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x2d8a64: 0x2278821  addu        $s1, $s1, $a3
    ctx->pc = 0x2d8a64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x2d8a68: 0xa7a80004  sh          $t0, 0x4($sp)
    ctx->pc = 0x2d8a68u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 8));
    // 0x2d8a6c: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x2d8a6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d8a70: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2d8a70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2d8a74: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x2d8a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x2d8a78: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x2d8a78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d8a7c: 0x26d602d0  addiu       $s6, $s6, 0x2D0
    ctx->pc = 0x2d8a7cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 720));
    // 0x2d8a80: 0xc0c25b2  jal         func_3096C8
    ctx->pc = 0x2D8A80u;
    SET_GPR_U32(ctx, 31, 0x2D8A88u);
    ctx->pc = 0x2D8A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8A80u;
    // 0x2d8a84: 0xa7a20014  sh          $v0, 0x14($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 20), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3096C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3096C8u, 0x2D8A80u, 0x2D8A88u)) {
        return;
    }
    ctx->pc = 0x2D8A88u;
label_2d8a88:
    // 0x2d8a88: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x2d8a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x2d8a8c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x2d8a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d8a90: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x2d8a90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2d8a94: 0x285202b  sltu        $a0, $s4, $a1
    ctx->pc = 0x2d8a94u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2d8a98: 0x1480ffb5  bnez        $a0, . + 4 + (-0x4B << 2)
    ctx->pc = 0x2D8A98u;
    {
        const bool branch_taken_0x2d8a98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8A98u;
        // 0x2d8a9c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8a98) {
            ctx->pc = 0x2D8970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8970;
        }
    }
    ctx->pc = 0x2D8AA0u;
label_2d8aa0:
    // 0x2d8aa0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2d8aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d8aa4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2d8aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2d8aa8: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2d8aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2d8aac: 0xa6640014  sh          $a0, 0x14($s3)
    ctx->pc = 0x2d8aacu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 20), (uint16_t)GPR_U32(ctx, 4));
    // 0x2d8ab0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2d8ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2d8ab4: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x2d8ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d8ab8: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2D8AB8u;
    {
        const bool branch_taken_0x2d8ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8AB8u;
        // 0x2d8abc: 0xa665000c  sh          $a1, 0xC($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 12), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8ab8) {
            ctx->pc = 0x2D8B6Cu;
            goto label_2d8b6c;
        }
    }
    ctx->pc = 0x2D8AC0u;
    // 0x2d8ac0: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x2d8ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2d8ac4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2d8ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2d8ac8: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2D8AC8u;
    {
        const bool branch_taken_0x2d8ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8AC8u;
        // 0x2d8acc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8ac8) {
            ctx->pc = 0x2D8B6Cu;
            goto label_2d8b6c;
        }
    }
    ctx->pc = 0x2D8AD0u;
    // 0x2d8ad0: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x2d8ad0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x2d8ad4: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x2d8ad4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d8ad8: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x2d8ad8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x2d8adc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2d8adcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8ae0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2d8ae0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8ae4: 0x0  nop
    ctx->pc = 0x2d8ae4u;
    // NOP
label_2d8ae8:
    // 0x2d8ae8: 0x8fc2002c  lw          $v0, 0x2C($fp)
    ctx->pc = 0x2d8ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 44)));
    // 0x2d8aec: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x2d8aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2d8af0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2d8af0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d8af4: 0x10b20016  beq         $a1, $s2, . + 4 + (0x16 << 2)
    ctx->pc = 0x2D8AF4u;
    {
        const bool branch_taken_0x2d8af4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 18));
        ctx->pc = 0x2D8AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8AF4u;
        // 0x2d8af8: 0x52980  sll         $a1, $a1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8af4) {
            ctx->pc = 0x2D8B50u;
            goto label_2d8b50;
        }
    }
    ctx->pc = 0x2D8AFCu;
    // 0x2d8afc: 0x8e62003c  lw          $v0, 0x3C($s3)
    ctx->pc = 0x2d8afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x2d8b00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d8b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8b04: 0xc092e7c  jal         func_24B9F0
    ctx->pc = 0x2D8B04u;
    SET_GPR_U32(ctx, 31, 0x2D8B0Cu);
    ctx->pc = 0x2D8B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8B04u;
    // 0x2d8b08: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B9F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B9F0u, 0x2D8B04u, 0x2D8B0Cu)) {
        return;
    }
    ctx->pc = 0x2D8B0Cu;
label_2d8b0c:
    // 0x2d8b0c: 0x8e67003c  lw          $a3, 0x3C($s3)
    ctx->pc = 0x2d8b0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x2d8b10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d8b10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8b14: 0x8e640038  lw          $a0, 0x38($s3)
    ctx->pc = 0x2d8b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x2d8b18: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2d8b18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8b1c: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x2d8b1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x2d8b20: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x2d8b20u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2d8b24: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x2d8b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2d8b28: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2d8b28u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x2d8b2c: 0x78e20010  lq          $v0, 0x10($a3)
    ctx->pc = 0x2d8b2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2d8b30: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x2d8b30u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x2d8b34: 0x78e30020  lq          $v1, 0x20($a3)
    ctx->pc = 0x2d8b34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2d8b38: 0x7c830020  sq          $v1, 0x20($a0)
    ctx->pc = 0x2d8b38u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
    // 0x2d8b3c: 0x78e20030  lq          $v0, 0x30($a3)
    ctx->pc = 0x2d8b3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x2d8b40: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x2d8b40u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x2d8b44: 0x8e640038  lw          $a0, 0x38($s3)
    ctx->pc = 0x2d8b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x2d8b48: 0xc092fa4  jal         func_24BE90
    ctx->pc = 0x2D8B48u;
    SET_GPR_U32(ctx, 31, 0x2D8B50u);
    ctx->pc = 0x2D8B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8B48u;
    // 0x2d8b4c: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BE90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BE90u, 0x2D8B48u, 0x2D8B50u)) {
        return;
    }
    ctx->pc = 0x2D8B50u;
label_2d8b50:
    // 0x2d8b50: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x2d8b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2d8b54: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2d8b54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2d8b58: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x2d8b58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2d8b5c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2d8b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2d8b60: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x2d8b60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d8b64: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x2D8B64u;
    {
        const bool branch_taken_0x2d8b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8B64u;
        // 0x2d8b68: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8b64) {
            ctx->pc = 0x2D8AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8ae8;
        }
    }
    ctx->pc = 0x2D8B6Cu;
label_2d8b6c:
    // 0x2d8b6c: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x2d8b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_2d8b70:
    // 0x2d8b70: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x2d8b70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2d8b74: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x2d8b74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2d8b78: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x2d8b78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2d8b7c: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x2d8b7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2d8b80: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x2d8b80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2d8b84: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x2d8b84u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d8b88: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x2d8b88u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d8b8c: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x2d8b8cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d8b90: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2d8b90u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d8b94: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2d8b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d8b98: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8B98u;
        // 0x2d8b9c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8BA0u;
}
