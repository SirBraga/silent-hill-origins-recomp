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

// Function: sub_001F71F8
// Address: 0x1f71f8 - 0x1f7328
void sub_001F71F8_0x1f71f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F71F8_0x1f71f8");
#endif

    ctx->pc = 0x1f71f8u;

    // 0x1f71f8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1f71f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f71fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f71fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7200: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x1f7200u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1f7204: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x1f7204u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f7208: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F7208u;
    {
        const bool branch_taken_0x1f7208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F720Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7208u;
        // 0x1f720c: 0xdc850010  ld          $a1, 0x10($a0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7208) {
            ctx->pc = 0x1F7224u;
            goto label_1f7224;
        }
    }
    ctx->pc = 0x1F7210u;
    // 0x1f7210: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1f7210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f7214: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x1f7214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x1f7218: 0x240707ff  addiu       $a3, $zero, 0x7FF
    ctx->pc = 0x1f7218u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x1f721c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1F721Cu;
    {
        const bool branch_taken_0x1f721c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F721Cu;
        // 0x1f7220: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f721c) {
            ctx->pc = 0x1F72C8u;
            goto label_1f72c8;
        }
    }
    ctx->pc = 0x1F7224u;
label_1f7224:
    // 0x1f7224: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x1f7224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x1f7228: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x1F7228u;
    {
        const bool branch_taken_0x1f7228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7228) {
            ctx->pc = 0x1F722Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7228u;
            // 0x1f722c: 0x240707ff  addiu       $a3, $zero, 0x7FF (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7284u;
            goto label_1f7284;
        }
    }
    ctx->pc = 0x1F7230u;
    // 0x1f7230: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x1f7230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x1f7234: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7234u;
    {
        const bool branch_taken_0x1f7234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7234) {
            ctx->pc = 0x1F7244u;
            goto label_1f7244;
        }
    }
    ctx->pc = 0x1F723Cu;
    // 0x1f723c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1F723Cu;
    {
        const bool branch_taken_0x1f723c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F723Cu;
        // 0x1f7240: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f723c) {
            ctx->pc = 0x1F72C8u;
            goto label_1f72c8;
        }
    }
    ctx->pc = 0x1F7244u;
label_1f7244:
    // 0x1f7244: 0x10a00020  beqz        $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1F7244u;
    {
        const bool branch_taken_0x1f7244 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7244) {
            ctx->pc = 0x1F72C8u;
            goto label_1f72c8;
        }
    }
    ctx->pc = 0x1F724Cu;
    // 0x1f724c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1f724cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f7250: 0x2862fc02  slti        $v0, $v1, -0x3FE
    ctx->pc = 0x1f7250u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294966274) ? 1 : 0);
    // 0x1f7254: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F7254u;
    {
        const bool branch_taken_0x1f7254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7254u;
        // 0x1f7258: 0x2402fc02  addiu       $v0, $zero, -0x3FE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7254) {
            ctx->pc = 0x1F7274u;
            goto label_1f7274;
        }
    }
    ctx->pc = 0x1F725Cu;
    // 0x1f725c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1f725cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f7260: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x1f7260u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x1f7264: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1F7264u;
    {
        const bool branch_taken_0x1f7264 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7264u;
        // 0x1f7268: 0x452816  dsrlv       $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7264) {
            ctx->pc = 0x1F72C4u;
            goto label_1f72c4;
        }
    }
    ctx->pc = 0x1F726Cu;
    // 0x1f726c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1F726Cu;
    {
        const bool branch_taken_0x1f726c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F726Cu;
        // 0x1f7270: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f726c) {
            ctx->pc = 0x1F72C4u;
            goto label_1f72c4;
        }
    }
    ctx->pc = 0x1F7274u;
label_1f7274:
    // 0x1f7274: 0x28620400  slti        $v0, $v1, 0x400
    ctx->pc = 0x1f7274u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1f7278: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7278u;
    {
        const bool branch_taken_0x1f7278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F727Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7278u;
        // 0x1f727c: 0x246703ff  addiu       $a3, $v1, 0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7278) {
            ctx->pc = 0x1F728Cu;
            goto label_1f728c;
        }
    }
    ctx->pc = 0x1F7280u;
    // 0x1f7280: 0x240707ff  addiu       $a3, $zero, 0x7FF
    ctx->pc = 0x1f7280u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
label_1f7284:
    // 0x1f7284: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1F7284u;
    {
        const bool branch_taken_0x1f7284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7284u;
        // 0x1f7288: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7284) {
            ctx->pc = 0x1F72C8u;
            goto label_1f72c8;
        }
    }
    ctx->pc = 0x1F728Cu;
label_1f728c:
    // 0x1f728c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1f728cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f7290: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1f7290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1f7294: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7294u;
    {
        const bool branch_taken_0x1f7294 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f7294) {
            ctx->pc = 0x1F7298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7294u;
            // 0x1f7298: 0x64a5007f  daddiu      $a1, $a1, 0x7F (Delay Slot)
            SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)127);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F72A8u;
            goto label_1f72a8;
        }
    }
    ctx->pc = 0x1F729Cu;
    // 0x1f729c: 0x30a30100  andi        $v1, $a1, 0x100
    ctx->pc = 0x1f729cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
    // 0x1f72a0: 0x64a20080  daddiu      $v0, $a1, 0x80
    ctx->pc = 0x1f72a0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)128);
    // 0x1f72a4: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x1f72a4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2));
label_1f72a8:
    // 0x1f72a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f72a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f72ac: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x1f72acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x1f72b0: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x1f72b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1f72b4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F72B4u;
    {
        const bool branch_taken_0x1f72b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f72b4) {
            ctx->pc = 0x1F72B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F72B4u;
            // 0x1f72b8: 0x52a3a  dsrl        $a1, $a1, 8 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F72C8u;
            goto label_1f72c8;
        }
    }
    ctx->pc = 0x1F72BCu;
    // 0x1f72bc: 0x5287a  dsrl        $a1, $a1, 1
    ctx->pc = 0x1f72bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 1);
    // 0x1f72c0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1f72c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1f72c4:
    // 0x1f72c4: 0x52a3a  dsrl        $a1, $a1, 8
    ctx->pc = 0x1f72c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 8);
label_1f72c8:
    // 0x1f72c8: 0x3403fff0  ori         $v1, $zero, 0xFFF0
    ctx->pc = 0x1f72c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65520);
    // 0x1f72cc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1f72ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f72d0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f72d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f72d4: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x1f72d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x1f72d8: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1f72d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1f72dc: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1f72dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1f72e0: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1f72e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1f72e4: 0x30e307ff  andi        $v1, $a3, 0x7FF
    ctx->pc = 0x1f72e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2047);
    // 0x1f72e8: 0x3c02800f  lui         $v0, 0x800F
    ctx->pc = 0x1f72e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32783 << 16));
    // 0x1f72ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1f72ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1f72f0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1f72f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1f72f4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1f72f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1f72f8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1f72f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1f72fc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1f72fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1f7300: 0x31d3c  dsll32      $v1, $v1, 20
    ctx->pc = 0x1f7300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 20));
    // 0x1f7304: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1f7304u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1f7308: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1f7308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f730c: 0x4207a  dsrl        $a0, $a0, 1
    ctx->pc = 0x1f730cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 1);
    // 0x1f7310: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1f7310u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1f7314: 0x817fc  dsll32      $v0, $t0, 31
    ctx->pc = 0x1f7314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 31));
    // 0x1f7318: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x1f7318u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x1f731c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F731Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F731Cu;
        // 0x1f7320: 0xc21025  or          $v0, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F731Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7324u;
    // 0x1f7324: 0x0  nop
    ctx->pc = 0x1f7324u;
    // NOP
    ctx->pc = 0x1f7328u;
}
