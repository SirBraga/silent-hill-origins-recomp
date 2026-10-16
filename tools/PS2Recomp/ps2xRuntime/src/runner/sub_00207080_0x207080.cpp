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

// Function: sub_00207080
// Address: 0x207080 - 0x2072a0
void sub_00207080_0x207080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207080_0x207080");
#endif

    switch (ctx->pc) {
        case 0x207080u: goto label_207080;
        case 0x207084u: goto label_207084;
        case 0x207088u: goto label_207088;
        case 0x20708cu: goto label_20708c;
        case 0x207090u: goto label_207090;
        case 0x207094u: goto label_207094;
        case 0x207098u: goto label_207098;
        case 0x20709cu: goto label_20709c;
        case 0x2070a0u: goto label_2070a0;
        case 0x2070a4u: goto label_2070a4;
        case 0x2070a8u: goto label_2070a8;
        case 0x2070acu: goto label_2070ac;
        case 0x2070b0u: goto label_2070b0;
        case 0x2070b4u: goto label_2070b4;
        case 0x2070b8u: goto label_2070b8;
        case 0x2070bcu: goto label_2070bc;
        case 0x2070c0u: goto label_2070c0;
        case 0x2070c4u: goto label_2070c4;
        case 0x2070c8u: goto label_2070c8;
        case 0x2070ccu: goto label_2070cc;
        case 0x2070d0u: goto label_2070d0;
        case 0x2070d4u: goto label_2070d4;
        case 0x2070d8u: goto label_2070d8;
        case 0x2070dcu: goto label_2070dc;
        case 0x2070e0u: goto label_2070e0;
        case 0x2070e4u: goto label_2070e4;
        case 0x2070e8u: goto label_2070e8;
        case 0x2070ecu: goto label_2070ec;
        case 0x2070f0u: goto label_2070f0;
        case 0x2070f4u: goto label_2070f4;
        case 0x2070f8u: goto label_2070f8;
        case 0x2070fcu: goto label_2070fc;
        case 0x207100u: goto label_207100;
        case 0x207104u: goto label_207104;
        case 0x207108u: goto label_207108;
        case 0x20710cu: goto label_20710c;
        case 0x207110u: goto label_207110;
        case 0x207114u: goto label_207114;
        case 0x207118u: goto label_207118;
        case 0x20711cu: goto label_20711c;
        case 0x207120u: goto label_207120;
        case 0x207124u: goto label_207124;
        case 0x207128u: goto label_207128;
        case 0x20712cu: goto label_20712c;
        case 0x207130u: goto label_207130;
        case 0x207134u: goto label_207134;
        case 0x207138u: goto label_207138;
        case 0x20713cu: goto label_20713c;
        case 0x207140u: goto label_207140;
        case 0x207144u: goto label_207144;
        case 0x207148u: goto label_207148;
        case 0x20714cu: goto label_20714c;
        case 0x207150u: goto label_207150;
        case 0x207154u: goto label_207154;
        case 0x207158u: goto label_207158;
        case 0x20715cu: goto label_20715c;
        case 0x207160u: goto label_207160;
        case 0x207164u: goto label_207164;
        case 0x207168u: goto label_207168;
        case 0x20716cu: goto label_20716c;
        case 0x207170u: goto label_207170;
        case 0x207174u: goto label_207174;
        case 0x207178u: goto label_207178;
        case 0x20717cu: goto label_20717c;
        case 0x207180u: goto label_207180;
        case 0x207184u: goto label_207184;
        case 0x207188u: goto label_207188;
        case 0x20718cu: goto label_20718c;
        case 0x207190u: goto label_207190;
        case 0x207194u: goto label_207194;
        case 0x207198u: goto label_207198;
        case 0x20719cu: goto label_20719c;
        case 0x2071a0u: goto label_2071a0;
        case 0x2071a4u: goto label_2071a4;
        case 0x2071a8u: goto label_2071a8;
        case 0x2071acu: goto label_2071ac;
        case 0x2071b0u: goto label_2071b0;
        case 0x2071b4u: goto label_2071b4;
        case 0x2071b8u: goto label_2071b8;
        case 0x2071bcu: goto label_2071bc;
        case 0x2071c0u: goto label_2071c0;
        case 0x2071c4u: goto label_2071c4;
        case 0x2071c8u: goto label_2071c8;
        case 0x2071ccu: goto label_2071cc;
        case 0x2071d0u: goto label_2071d0;
        case 0x2071d4u: goto label_2071d4;
        case 0x2071d8u: goto label_2071d8;
        case 0x2071dcu: goto label_2071dc;
        case 0x2071e0u: goto label_2071e0;
        case 0x2071e4u: goto label_2071e4;
        case 0x2071e8u: goto label_2071e8;
        case 0x2071ecu: goto label_2071ec;
        case 0x2071f0u: goto label_2071f0;
        case 0x2071f4u: goto label_2071f4;
        case 0x2071f8u: goto label_2071f8;
        case 0x2071fcu: goto label_2071fc;
        case 0x207200u: goto label_207200;
        case 0x207204u: goto label_207204;
        case 0x207208u: goto label_207208;
        case 0x20720cu: goto label_20720c;
        case 0x207210u: goto label_207210;
        case 0x207214u: goto label_207214;
        case 0x207218u: goto label_207218;
        case 0x20721cu: goto label_20721c;
        case 0x207220u: goto label_207220;
        case 0x207224u: goto label_207224;
        case 0x207228u: goto label_207228;
        case 0x20722cu: goto label_20722c;
        case 0x207230u: goto label_207230;
        case 0x207234u: goto label_207234;
        case 0x207238u: goto label_207238;
        case 0x20723cu: goto label_20723c;
        case 0x207240u: goto label_207240;
        case 0x207244u: goto label_207244;
        case 0x207248u: goto label_207248;
        case 0x20724cu: goto label_20724c;
        case 0x207250u: goto label_207250;
        case 0x207254u: goto label_207254;
        case 0x207258u: goto label_207258;
        case 0x20725cu: goto label_20725c;
        case 0x207260u: goto label_207260;
        case 0x207264u: goto label_207264;
        case 0x207268u: goto label_207268;
        case 0x20726cu: goto label_20726c;
        case 0x207270u: goto label_207270;
        case 0x207274u: goto label_207274;
        case 0x207278u: goto label_207278;
        case 0x20727cu: goto label_20727c;
        case 0x207280u: goto label_207280;
        case 0x207284u: goto label_207284;
        case 0x207288u: goto label_207288;
        case 0x20728cu: goto label_20728c;
        case 0x207290u: goto label_207290;
        case 0x207294u: goto label_207294;
        case 0x207298u: goto label_207298;
        case 0x20729cu: goto label_20729c;
        default: break;
    }

    ctx->pc = 0x207080u;

label_207080:
    // 0x207080: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x207080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_207084:
    // 0x207084: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x207084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_207088:
    // 0x207088: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x207088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_20708c:
    // 0x20708c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20708cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_207090:
    // 0x207090: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x207090u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_207094:
    // 0x207094: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x207094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_207098:
    // 0x207098: 0x1082000e  beq         $a0, $v0, . + 4 + (0xE << 2)
label_20709c:
    if (ctx->pc == 0x20709Cu) {
        ctx->pc = 0x20709Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207098u;
        // 0x20709c: 0x28820004  slti        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2070A0u;
        goto label_2070a0;
    }
    ctx->pc = 0x207098u;
    {
        const bool branch_taken_0x207098 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x20709Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207098u;
        // 0x20709c: 0x28820004  slti        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x207098) {
            ctx->pc = 0x2070D4u;
            goto label_2070d4;
        }
    }
    ctx->pc = 0x2070A0u;
label_2070a0:
    // 0x2070a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2070a4:
    if (ctx->pc == 0x2070A4u) {
        ctx->pc = 0x2070A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2070A0u;
        // 0x2070a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2070A8u;
        goto label_2070a8;
    }
    ctx->pc = 0x2070A0u;
    {
        const bool branch_taken_0x2070a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2070A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2070A0u;
        // 0x2070a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2070a0) {
            ctx->pc = 0x2070B8u;
            goto label_2070b8;
        }
    }
    ctx->pc = 0x2070A8u;
label_2070a8:
    // 0x2070a8: 0x50820008  beql        $a0, $v0, . + 4 + (0x8 << 2)
label_2070ac:
    if (ctx->pc == 0x2070ACu) {
        ctx->pc = 0x2070ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2070A8u;
        // 0x2070ac: 0xae04002c  sw          $a0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2070B0u;
        goto label_2070b0;
    }
    ctx->pc = 0x2070A8u;
    {
        const bool branch_taken_0x2070a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2070a8) {
            ctx->pc = 0x2070ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2070A8u;
            // 0x2070ac: 0xae04002c  sw          $a0, 0x2C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2070CCu;
            goto label_2070cc;
        }
    }
    ctx->pc = 0x2070B0u;
label_2070b0:
    // 0x2070b0: 0x10000060  b           . + 4 + (0x60 << 2)
label_2070b4:
    if (ctx->pc == 0x2070B4u) {
        ctx->pc = 0x2070B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2070B0u;
        // 0x2070b4: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2070B8u;
        goto label_2070b8;
    }
    ctx->pc = 0x2070B0u;
    {
        const bool branch_taken_0x2070b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2070B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2070B0u;
        // 0x2070b4: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2070b0) {
            ctx->pc = 0x207234u;
            goto label_207234;
        }
    }
    ctx->pc = 0x2070B8u;
label_2070b8:
    // 0x2070b8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2070b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2070bc:
    // 0x2070bc: 0x50820042  beql        $a0, $v0, . + 4 + (0x42 << 2)
label_2070c0:
    if (ctx->pc == 0x2070C0u) {
        ctx->pc = 0x2070C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2070BCu;
        // 0x2070c0: 0x8e020124  lw          $v0, 0x124($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2070C4u;
        goto label_2070c4;
    }
    ctx->pc = 0x2070BCu;
    {
        const bool branch_taken_0x2070bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2070bc) {
            ctx->pc = 0x2070C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2070BCu;
            // 0x2070c0: 0x8e020124  lw          $v0, 0x124($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2071C8u;
            goto label_2071c8;
        }
    }
    ctx->pc = 0x2070C4u;
label_2070c4:
    // 0x2070c4: 0x1000005b  b           . + 4 + (0x5B << 2)
label_2070c8:
    if (ctx->pc == 0x2070C8u) {
        ctx->pc = 0x2070C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2070C4u;
        // 0x2070c8: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2070CCu;
        goto label_2070cc;
    }
    ctx->pc = 0x2070C4u;
    {
        const bool branch_taken_0x2070c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2070C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2070C4u;
        // 0x2070c8: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2070c4) {
            ctx->pc = 0x207234u;
            goto label_207234;
        }
    }
    ctx->pc = 0x2070CCu;
label_2070cc:
    // 0x2070cc: 0x1000005a  b           . + 4 + (0x5A << 2)
label_2070d0:
    if (ctx->pc == 0x2070D0u) {
        ctx->pc = 0x2070D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2070CCu;
        // 0x2070d0: 0xae040028  sw          $a0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2070D4u;
        goto label_2070d4;
    }
    ctx->pc = 0x2070CCu;
    {
        const bool branch_taken_0x2070cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2070D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2070CCu;
        // 0x2070d0: 0xae040028  sw          $a0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2070cc) {
            ctx->pc = 0x207238u;
            goto label_207238;
        }
    }
    ctx->pc = 0x2070D4u;
label_2070d4:
    // 0x2070d4: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x2070d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_2070d8:
    // 0x2070d8: 0x54400038  bnel        $v0, $zero, . + 4 + (0x38 << 2)
label_2070dc:
    if (ctx->pc == 0x2070DCu) {
        ctx->pc = 0x2070DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2070D8u;
        // 0x2070dc: 0xae040028  sw          $a0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2070E0u;
        goto label_2070e0;
    }
    ctx->pc = 0x2070D8u;
    {
        const bool branch_taken_0x2070d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2070d8) {
            ctx->pc = 0x2070DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2070D8u;
            // 0x2070dc: 0xae040028  sw          $a0, 0x28($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2071BCu;
            goto label_2071bc;
        }
    }
    ctx->pc = 0x2070E0u;
label_2070e0:
    // 0x2070e0: 0x8e020124  lw          $v0, 0x124($s0)
    ctx->pc = 0x2070e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
label_2070e4:
    // 0x2070e4: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_2070e8:
    if (ctx->pc == 0x2070E8u) {
        ctx->pc = 0x2070E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2070E4u;
        // 0x2070e8: 0x8e0200d8  lw          $v0, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2070ECu;
        goto label_2070ec;
    }
    ctx->pc = 0x2070E4u;
    {
        const bool branch_taken_0x2070e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2070e4) {
            ctx->pc = 0x2070E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2070E4u;
            // 0x2070e8: 0x8e0200d8  lw          $v0, 0xD8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207120u;
            goto label_207120;
        }
    }
    ctx->pc = 0x2070ECu;
label_2070ec:
    // 0x2070ec: 0x92030128  lbu         $v1, 0x128($s0)
    ctx->pc = 0x2070ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 296)));
label_2070f0:
    // 0x2070f0: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
label_2070f4:
    if (ctx->pc == 0x2070F4u) {
        ctx->pc = 0x2070F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2070F0u;
        // 0x2070f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2070F8u;
        goto label_2070f8;
    }
    ctx->pc = 0x2070F0u;
    {
        const bool branch_taken_0x2070f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2070F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2070F0u;
        // 0x2070f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2070f0) {
            ctx->pc = 0x207174u;
            goto label_207174;
        }
    }
    ctx->pc = 0x2070F8u;
label_2070f8:
    // 0x2070f8: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
label_2070fc:
    if (ctx->pc == 0x2070FCu) {
        ctx->pc = 0x2070FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2070F8u;
        // 0x2070fc: 0x24020072  addiu       $v0, $zero, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207100u;
        goto label_207100;
    }
    ctx->pc = 0x2070F8u;
    {
        const bool branch_taken_0x2070f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2070FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2070F8u;
        // 0x2070fc: 0x24020072  addiu       $v0, $zero, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2070f8) {
            ctx->pc = 0x207148u;
            goto label_207148;
        }
    }
    ctx->pc = 0x207100u;
label_207100:
    // 0x207100: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x207100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_207104:
    // 0x207104: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x207104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_207108:
    // 0x207108: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x207108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_20710c:
    // 0x20710c: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x20710cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_207110:
    // 0x207110: 0x92020128  lbu         $v0, 0x128($s0)
    ctx->pc = 0x207110u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 296)));
label_207114:
    // 0x207114: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x207114u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_207118:
    // 0x207118: 0x10000022  b           . + 4 + (0x22 << 2)
label_20711c:
    if (ctx->pc == 0x20711Cu) {
        ctx->pc = 0x20711Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207118u;
        // 0x20711c: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207120u;
        goto label_207120;
    }
    ctx->pc = 0x207118u;
    {
        const bool branch_taken_0x207118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20711Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207118u;
        // 0x20711c: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207118) {
            ctx->pc = 0x2071A4u;
            goto label_2071a4;
        }
    }
    ctx->pc = 0x207120u;
label_207120:
    // 0x207120: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x207120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_207124:
    // 0x207124: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x207124u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_207128:
    // 0x207128: 0x8c4900a8  lw          $t1, 0xA8($v0)
    ctx->pc = 0x207128u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
label_20712c:
    // 0x20712c: 0x14e30008  bne         $a3, $v1, . + 4 + (0x8 << 2)
label_207130:
    if (ctx->pc == 0x207130u) {
        ctx->pc = 0x207130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20712Cu;
        // 0x207130: 0x8c480054  lw          $t0, 0x54($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207134u;
        goto label_207134;
    }
    ctx->pc = 0x20712Cu;
    {
        const bool branch_taken_0x20712c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x207130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20712Cu;
        // 0x207130: 0x8c480054  lw          $t0, 0x54($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20712c) {
            ctx->pc = 0x207150u;
            goto label_207150;
        }
    }
    ctx->pc = 0x207134u;
label_207134:
    // 0x207134: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x207134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_207138:
    // 0x207138: 0x15020006  bne         $t0, $v0, . + 4 + (0x6 << 2)
label_20713c:
    if (ctx->pc == 0x20713Cu) {
        ctx->pc = 0x20713Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207138u;
        // 0x20713c: 0x24020052  addiu       $v0, $zero, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207140u;
        goto label_207140;
    }
    ctx->pc = 0x207138u;
    {
        const bool branch_taken_0x207138 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x20713Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207138u;
        // 0x20713c: 0x24020052  addiu       $v0, $zero, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207138) {
            ctx->pc = 0x207154u;
            goto label_207154;
        }
    }
    ctx->pc = 0x207140u;
label_207140:
    // 0x207140: 0x15240004  bne         $t1, $a0, . + 4 + (0x4 << 2)
label_207144:
    if (ctx->pc == 0x207144u) {
        ctx->pc = 0x207148u;
        goto label_207148;
    }
    ctx->pc = 0x207140u;
    {
        const bool branch_taken_0x207140 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 4));
        if (branch_taken_0x207140) {
            ctx->pc = 0x207154u;
            goto label_207154;
        }
    }
    ctx->pc = 0x207148u;
label_207148:
    // 0x207148: 0x1000001c  b           . + 4 + (0x1C << 2)
label_20714c:
    if (ctx->pc == 0x20714Cu) {
        ctx->pc = 0x20714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207148u;
        // 0x20714c: 0xae040028  sw          $a0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207150u;
        goto label_207150;
    }
    ctx->pc = 0x207148u;
    {
        const bool branch_taken_0x207148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207148u;
        // 0x20714c: 0xae040028  sw          $a0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207148) {
            ctx->pc = 0x2071BCu;
            goto label_2071bc;
        }
    }
    ctx->pc = 0x207150u;
label_207150:
    // 0x207150: 0x24020052  addiu       $v0, $zero, 0x52
    ctx->pc = 0x207150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
label_207154:
    // 0x207154: 0x54e2000a  bnel        $a3, $v0, . + 4 + (0xA << 2)
label_207158:
    if (ctx->pc == 0x207158u) {
        ctx->pc = 0x207158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207154u;
        // 0x207158: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20715Cu;
        goto label_20715c;
    }
    ctx->pc = 0x207154u;
    {
        const bool branch_taken_0x207154 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x207154) {
            ctx->pc = 0x207158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207154u;
            // 0x207158: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207180u;
            goto label_207180;
        }
    }
    ctx->pc = 0x20715Cu;
label_20715c:
    // 0x20715c: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x20715cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_207160:
    // 0x207160: 0x55020007  bnel        $t0, $v0, . + 4 + (0x7 << 2)
label_207164:
    if (ctx->pc == 0x207164u) {
        ctx->pc = 0x207164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207160u;
        // 0x207164: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207168u;
        goto label_207168;
    }
    ctx->pc = 0x207160u;
    {
        const bool branch_taken_0x207160 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x207160) {
            ctx->pc = 0x207164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207160u;
            // 0x207164: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207180u;
            goto label_207180;
        }
    }
    ctx->pc = 0x207168u;
label_207168:
    // 0x207168: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x207168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_20716c:
    // 0x20716c: 0x55220004  bnel        $t1, $v0, . + 4 + (0x4 << 2)
label_207170:
    if (ctx->pc == 0x207170u) {
        ctx->pc = 0x207170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20716Cu;
        // 0x207170: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207174u;
        goto label_207174;
    }
    ctx->pc = 0x20716Cu;
    {
        const bool branch_taken_0x20716c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        if (branch_taken_0x20716c) {
            ctx->pc = 0x207170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20716Cu;
            // 0x207170: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207180u;
            goto label_207180;
        }
    }
    ctx->pc = 0x207174u;
label_207174:
    // 0x207174: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x207174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_207178:
    // 0x207178: 0x10000011  b           . + 4 + (0x11 << 2)
label_20717c:
    if (ctx->pc == 0x20717Cu) {
        ctx->pc = 0x20717Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207178u;
        // 0x20717c: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207180u;
        goto label_207180;
    }
    ctx->pc = 0x207178u;
    {
        const bool branch_taken_0x207178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20717Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207178u;
        // 0x20717c: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207178) {
            ctx->pc = 0x2071C0u;
            goto label_2071c0;
        }
    }
    ctx->pc = 0x207180u;
label_207180:
    // 0x207180: 0x2406006f  addiu       $a2, $zero, 0x6F
    ctx->pc = 0x207180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
label_207184:
    // 0x207184: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x207184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_207188:
    // 0x207188: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x207188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20718c:
    // 0x20718c: 0xac670018  sw          $a3, 0x18($v1)
    ctx->pc = 0x20718cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 7));
label_207190:
    // 0x207190: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x207190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_207194:
    // 0x207194: 0xac690008  sw          $t1, 0x8($v1)
    ctx->pc = 0x207194u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 9));
label_207198:
    // 0x207198: 0xac680004  sw          $t0, 0x4($v1)
    ctx->pc = 0x207198u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 8));
label_20719c:
    // 0x20719c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x20719cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2071a0:
    // 0x2071a0: 0xac460014  sw          $a2, 0x14($v0)
    ctx->pc = 0x2071a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 6));
label_2071a4:
    // 0x2071a4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2071a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2071a8:
    // 0x2071a8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2071a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2071ac:
    // 0x2071ac: 0x40f809  jalr        $v0
label_2071b0:
    if (ctx->pc == 0x2071B0u) {
        ctx->pc = 0x2071B4u;
        goto label_2071b4;
    }
    ctx->pc = 0x2071ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2071B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2071ACu, 0x2071B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2071B4u;
label_2071b4:
    // 0x2071b4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2071b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2071b8:
    // 0x2071b8: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x2071b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
label_2071bc:
    // 0x2071bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2071bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2071c0:
    // 0x2071c0: 0x1000001d  b           . + 4 + (0x1D << 2)
label_2071c4:
    if (ctx->pc == 0x2071C4u) {
        ctx->pc = 0x2071C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2071C0u;
        // 0x2071c4: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2071C8u;
        goto label_2071c8;
    }
    ctx->pc = 0x2071C0u;
    {
        const bool branch_taken_0x2071c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2071C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2071C0u;
        // 0x2071c4: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2071c0) {
            ctx->pc = 0x207238u;
            goto label_207238;
        }
    }
    ctx->pc = 0x2071C8u;
label_2071c8:
    // 0x2071c8: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
label_2071cc:
    if (ctx->pc == 0x2071CCu) {
        ctx->pc = 0x2071CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2071C8u;
        // 0x2071cc: 0xae040028  sw          $a0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2071D0u;
        goto label_2071d0;
    }
    ctx->pc = 0x2071C8u;
    {
        const bool branch_taken_0x2071c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2071c8) {
            ctx->pc = 0x2071CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2071C8u;
            // 0x2071cc: 0xae040028  sw          $a0, 0x28($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207228u;
            goto label_207228;
        }
    }
    ctx->pc = 0x2071D0u;
label_2071d0:
    // 0x2071d0: 0x92030128  lbu         $v1, 0x128($s0)
    ctx->pc = 0x2071d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 296)));
label_2071d4:
    // 0x2071d4: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_2071d8:
    if (ctx->pc == 0x2071D8u) {
        ctx->pc = 0x2071D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2071D4u;
        // 0x2071d8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2071DCu;
        goto label_2071dc;
    }
    ctx->pc = 0x2071D4u;
    {
        const bool branch_taken_0x2071d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2071D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2071D4u;
        // 0x2071d8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2071d4) {
            ctx->pc = 0x207224u;
            goto label_207224;
        }
    }
    ctx->pc = 0x2071DCu;
label_2071dc:
    // 0x2071dc: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_2071e0:
    if (ctx->pc == 0x2071E0u) {
        ctx->pc = 0x2071E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2071DCu;
        // 0x2071e0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2071E4u;
        goto label_2071e4;
    }
    ctx->pc = 0x2071DCu;
    {
        const bool branch_taken_0x2071dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2071dc) {
            ctx->pc = 0x2071E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2071DCu;
            // 0x2071e0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2071F0u;
            goto label_2071f0;
        }
    }
    ctx->pc = 0x2071E4u;
label_2071e4:
    // 0x2071e4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2071e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2071e8:
    // 0x2071e8: 0x1000000f  b           . + 4 + (0xF << 2)
label_2071ec:
    if (ctx->pc == 0x2071ECu) {
        ctx->pc = 0x2071ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2071E8u;
        // 0x2071ec: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2071F0u;
        goto label_2071f0;
    }
    ctx->pc = 0x2071E8u;
    {
        const bool branch_taken_0x2071e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2071ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2071E8u;
        // 0x2071ec: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2071e8) {
            ctx->pc = 0x207228u;
            goto label_207228;
        }
    }
    ctx->pc = 0x2071F0u;
label_2071f0:
    // 0x2071f0: 0x24020072  addiu       $v0, $zero, 0x72
    ctx->pc = 0x2071f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
label_2071f4:
    // 0x2071f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2071f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2071f8:
    // 0x2071f8: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x2071f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_2071fc:
    // 0x2071fc: 0x92020128  lbu         $v0, 0x128($s0)
    ctx->pc = 0x2071fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 296)));
label_207200:
    // 0x207200: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x207200u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_207204:
    // 0x207204: 0xacc20018  sw          $v0, 0x18($a2)
    ctx->pc = 0x207204u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
label_207208:
    // 0x207208: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x207208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20720c:
    // 0x20720c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x20720cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_207210:
    // 0x207210: 0x40f809  jalr        $v0
label_207214:
    if (ctx->pc == 0x207214u) {
        ctx->pc = 0x207214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207210u;
        // 0x207214: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207218u;
        goto label_207218;
    }
    ctx->pc = 0x207210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x207218u);
        ctx->pc = 0x207214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207210u;
        // 0x207214: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207210u, 0x207218u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x207218u;
label_207218:
    // 0x207218: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x207218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_20721c:
    // 0x20721c: 0x10000002  b           . + 4 + (0x2 << 2)
label_207220:
    if (ctx->pc == 0x207220u) {
        ctx->pc = 0x207220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20721Cu;
        // 0x207220: 0xae030028  sw          $v1, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207224u;
        goto label_207224;
    }
    ctx->pc = 0x20721Cu;
    {
        const bool branch_taken_0x20721c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20721Cu;
        // 0x207220: 0xae030028  sw          $v1, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20721c) {
            ctx->pc = 0x207228u;
            goto label_207228;
        }
    }
    ctx->pc = 0x207224u;
label_207224:
    // 0x207224: 0xae040028  sw          $a0, 0x28($s0)
    ctx->pc = 0x207224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 4));
label_207228:
    // 0x207228: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x207228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20722c:
    // 0x20722c: 0x10000002  b           . + 4 + (0x2 << 2)
label_207230:
    if (ctx->pc == 0x207230u) {
        ctx->pc = 0x207230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20722Cu;
        // 0x207230: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207234u;
        goto label_207234;
    }
    ctx->pc = 0x20722Cu;
    {
        const bool branch_taken_0x20722c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20722Cu;
        // 0x207230: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20722c) {
            ctx->pc = 0x207238u;
            goto label_207238;
        }
    }
    ctx->pc = 0x207234u;
label_207234:
    // 0x207234: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x207234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_207238:
    // 0x207238: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x207238u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
label_20723c:
    // 0x20723c: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x20723cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
label_207240:
    // 0x207240: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x207240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_207244:
    // 0x207244: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x207244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_207248:
    // 0x207248: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x207248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_20724c:
    // 0x20724c: 0xfe040038  sd          $a0, 0x38($s0)
    ctx->pc = 0x20724cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 4));
label_207250:
    // 0x207250: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x207250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
label_207254:
    // 0x207254: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x207254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
label_207258:
    // 0x207258: 0xae050060  sw          $a1, 0x60($s0)
    ctx->pc = 0x207258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 5));
label_20725c:
    // 0x20725c: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x20725cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
label_207260:
    // 0x207260: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x207260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_207264:
    // 0x207264: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x207264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_207268:
    // 0x207268: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x207268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_20726c:
    // 0x20726c: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x20726cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
label_207270:
    // 0x207270: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x207270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
label_207274:
    // 0x207274: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x207274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
label_207278:
    // 0x207278: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x207278u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
label_20727c:
    // 0x20727c: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x20727cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
label_207280:
    // 0x207280: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x207280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
label_207284:
    // 0x207284: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x207284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
label_207288:
    // 0x207288: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x207288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
label_20728c:
    // 0x20728c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20728cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_207290:
    // 0x207290: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x207290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_207294:
    // 0x207294: 0x3e00008  jr          $ra
label_207298:
    if (ctx->pc == 0x207298u) {
        ctx->pc = 0x207298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207294u;
        // 0x207298: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20729Cu;
        goto label_20729c;
    }
    ctx->pc = 0x207294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207294u;
        // 0x207298: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20729Cu;
label_20729c:
    // 0x20729c: 0x0  nop
    ctx->pc = 0x20729cu;
    // NOP
    ctx->pc = 0x2072a0u;
}
