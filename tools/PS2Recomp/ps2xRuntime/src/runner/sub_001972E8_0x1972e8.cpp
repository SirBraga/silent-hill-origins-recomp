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

// Function: sub_001972E8
// Address: 0x1972e8 - 0x197430
void sub_001972E8_0x1972e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001972E8_0x1972e8");
#endif

    switch (ctx->pc) {
        case 0x197300u: goto label_197300;
        case 0x197308u: goto label_197308;
        case 0x197334u: goto label_197334;
        case 0x197350u: goto label_197350;
        case 0x1973e4u: goto label_1973e4;
        default: break;
    }

    ctx->pc = 0x1972e8u;

    // 0x1972e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1972e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1972ec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1972ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1972f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1972f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1972f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1972f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1972f8: 0xc066002  jal         func_198008
    ctx->pc = 0x1972F8u;
    SET_GPR_U32(ctx, 31, 0x197300u);
    ctx->pc = 0x1972FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1972F8u;
    // 0x1972fc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198008u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x198008u, 0x1972F8u, 0x197300u)) {
        return;
    }
    ctx->pc = 0x197300u;
label_197300:
    // 0x197300: 0xc065d0c  jal         func_197430
    ctx->pc = 0x197300u;
    SET_GPR_U32(ctx, 31, 0x197308u);
    ctx->pc = 0x197304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197300u;
    // 0x197304: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197430u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197430u, 0x197300u, 0x197308u)) {
        return;
    }
    ctx->pc = 0x197308u;
label_197308:
    // 0x197308: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x197308u;
    {
        const bool branch_taken_0x197308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19730Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197308u;
        // 0x19730c: 0xae0209d0  sw          $v0, 0x9D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2512), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197308) {
            ctx->pc = 0x197320u;
            goto label_197320;
        }
    }
    ctx->pc = 0x197310u;
    // 0x197310: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x197310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197314: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x197314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197318: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x197318u;
    {
        const bool branch_taken_0x197318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19731Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197318u;
        // 0x19731c: 0xae030dec  sw          $v1, 0xDEC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3564), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197318) {
            ctx->pc = 0x19741Cu;
            goto label_19741c;
        }
    }
    ctx->pc = 0x197320u;
label_197320:
    // 0x197320: 0x8e0209e0  lw          $v0, 0x9E0($s0)
    ctx->pc = 0x197320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2528)));
    // 0x197324: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x197324u;
    {
        const bool branch_taken_0x197324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x197324) {
            ctx->pc = 0x197348u;
            goto label_197348;
        }
    }
    ctx->pc = 0x19732Cu;
    // 0x19732c: 0xc065d74  jal         func_1975D0
    ctx->pc = 0x19732Cu;
    SET_GPR_U32(ctx, 31, 0x197334u);
    ctx->pc = 0x197330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19732Cu;
    // 0x197330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1975D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1975D0u, 0x19732Cu, 0x197334u)) {
        return;
    }
    ctx->pc = 0x197334u;
label_197334:
    // 0x197334: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x197334u;
    {
        const bool branch_taken_0x197334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x197338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197334u;
        // 0x197338: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197334) {
            ctx->pc = 0x197348u;
            goto label_197348;
        }
    }
    ctx->pc = 0x19733Cu;
    // 0x19733c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19733cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197340: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x197340u;
    {
        const bool branch_taken_0x197340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197340u;
        // 0x197344: 0xae030dec  sw          $v1, 0xDEC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3564), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197340) {
            ctx->pc = 0x19741Cu;
            goto label_19741c;
        }
    }
    ctx->pc = 0x197348u;
label_197348:
    // 0x197348: 0xc066008  jal         func_198020
    ctx->pc = 0x197348u;
    SET_GPR_U32(ctx, 31, 0x197350u);
    ctx->pc = 0x19734Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197348u;
    // 0x19734c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198020u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x198020u, 0x197348u, 0x197350u)) {
        return;
    }
    ctx->pc = 0x197350u;
label_197350:
    // 0x197350: 0x8e0209d8  lw          $v0, 0x9D8($s0)
    ctx->pc = 0x197350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2520)));
    // 0x197354: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x197354u;
    {
        const bool branch_taken_0x197354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x197358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197354u;
        // 0x197358: 0x8e0209dc  lw          $v0, 0x9DC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197354) {
            ctx->pc = 0x19739Cu;
            goto label_19739c;
        }
    }
    ctx->pc = 0x19735Cu;
    // 0x19735c: 0x5440002e  bnel        $v0, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x19735Cu;
    {
        const bool branch_taken_0x19735c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19735c) {
            ctx->pc = 0x197360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19735Cu;
            // 0x197360: 0xae000dec  sw          $zero, 0xDEC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 3564), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x197418u;
            goto label_197418;
        }
    }
    ctx->pc = 0x197364u;
    // 0x197364: 0x8e0409e8  lw          $a0, 0x9E8($s0)
    ctx->pc = 0x197364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2536)));
    // 0x197368: 0x8e0509d0  lw          $a1, 0x9D0($s0)
    ctx->pc = 0x197368u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2512)));
    // 0x19736c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x19736cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x197370: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x197370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x197374: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x197374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x197378: 0xac4509ec  sw          $a1, 0x9EC($v0)
    ctx->pc = 0x197378u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2540), GPR_U32(ctx, 5));
    // 0x19737c: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x19737cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x197380: 0x2c630100  sltiu       $v1, $v1, 0x100
    ctx->pc = 0x197380u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x197384: 0x14600023  bnez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x197384u;
    {
        const bool branch_taken_0x197384 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x197388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197384u;
        // 0x197388: 0xae0409e8  sw          $a0, 0x9E8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2536), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197384) {
            ctx->pc = 0x197414u;
            goto label_197414;
        }
    }
    ctx->pc = 0x19738Cu;
    // 0x19738c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x19738cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x197390: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x197390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x197394: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x197394u;
    {
        const bool branch_taken_0x197394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197394u;
        // 0x197398: 0xae030dec  sw          $v1, 0xDEC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3564), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197394) {
            ctx->pc = 0x19741Cu;
            goto label_19741c;
        }
    }
    ctx->pc = 0x19739Cu;
label_19739c:
    // 0x19739c: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x19739Cu;
    {
        const bool branch_taken_0x19739c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19739c) {
            ctx->pc = 0x1973A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19739Cu;
            // 0x1973a0: 0xae000dec  sw          $zero, 0xDEC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 3564), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x197418u;
            goto label_197418;
        }
    }
    ctx->pc = 0x1973A4u;
    // 0x1973a4: 0x8e0309e8  lw          $v1, 0x9E8($s0)
    ctx->pc = 0x1973a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2536)));
    // 0x1973a8: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1973A8u;
    {
        const bool branch_taken_0x1973a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1973a8) {
            ctx->pc = 0x1973ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1973A8u;
            // 0x1973ac: 0x8e0209e0  lw          $v0, 0x9E0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2528)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1973C0u;
            goto label_1973c0;
        }
    }
    ctx->pc = 0x1973B0u;
    // 0x1973b0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1973b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1973b4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1973b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1973b8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1973B8u;
    {
        const bool branch_taken_0x1973b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1973BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1973B8u;
        // 0x1973bc: 0xae030dec  sw          $v1, 0xDEC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3564), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1973b8) {
            ctx->pc = 0x19741Cu;
            goto label_19741c;
        }
    }
    ctx->pc = 0x1973C0u;
label_1973c0:
    // 0x1973c0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1973C0u;
    {
        const bool branch_taken_0x1973c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1973C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1973C0u;
        // 0x1973c4: 0x261109ec  addiu       $s1, $s0, 0x9EC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 2540));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1973c0) {
            ctx->pc = 0x1973FCu;
            goto label_1973fc;
        }
    }
    ctx->pc = 0x1973C8u;
    // 0x1973c8: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1973c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1973cc: 0x8e0509d0  lw          $a1, 0x9D0($s0)
    ctx->pc = 0x1973ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2512)));
    // 0x1973d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1973d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1973d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1973d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1973d8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1973d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1973dc: 0xc06602c  jal         func_1980B0
    ctx->pc = 0x1973DCu;
    SET_GPR_U32(ctx, 31, 0x1973E4u);
    ctx->pc = 0x1973E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1973DCu;
    // 0x1973e0: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1980B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1980B0u, 0x1973DCu, 0x1973E4u)) {
        return;
    }
    ctx->pc = 0x1973E4u;
label_1973e4:
    // 0x1973e4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1973E4u;
    {
        const bool branch_taken_0x1973e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1973e4) {
            ctx->pc = 0x1973E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1973E4u;
            // 0x1973e8: 0x8e0209e8  lw          $v0, 0x9E8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x197400u;
            goto label_197400;
        }
    }
    ctx->pc = 0x1973ECu;
    // 0x1973ec: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1973ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1973f0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1973f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1973f4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1973F4u;
    {
        const bool branch_taken_0x1973f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1973F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1973F4u;
        // 0x1973f8: 0xae030dec  sw          $v1, 0xDEC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3564), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1973f4) {
            ctx->pc = 0x19741Cu;
            goto label_19741c;
        }
    }
    ctx->pc = 0x1973FCu;
label_1973fc:
    // 0x1973fc: 0x8e0209e8  lw          $v0, 0x9E8($s0)
    ctx->pc = 0x1973fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2536)));
label_197400:
    // 0x197400: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x197400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x197404: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x197404u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x197408: 0xae0209e8  sw          $v0, 0x9E8($s0)
    ctx->pc = 0x197408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2536), GPR_U32(ctx, 2));
    // 0x19740c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x19740cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x197410: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x197410u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_197414:
    // 0x197414: 0xae000dec  sw          $zero, 0xDEC($s0)
    ctx->pc = 0x197414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3564), GPR_U32(ctx, 0));
label_197418:
    // 0x197418: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x197418u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19741c:
    // 0x19741c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19741cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x197420: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x197420u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197424: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x197424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197428: 0x3e00008  jr          $ra
    ctx->pc = 0x197428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19742Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197428u;
        // 0x19742c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197430u;
}
