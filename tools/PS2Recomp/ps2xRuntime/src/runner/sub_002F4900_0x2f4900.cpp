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

// Function: sub_002F4900
// Address: 0x2f4900 - 0x2f4a30
void sub_002F4900_0x2f4900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F4900_0x2f4900");
#endif

    switch (ctx->pc) {
        case 0x2f4928u: goto label_2f4928;
        case 0x2f4940u: goto label_2f4940;
        case 0x2f4964u: goto label_2f4964;
        case 0x2f4a18u: goto label_2f4a18;
        default: break;
    }

    ctx->pc = 0x2f4900u;

    // 0x2f4900: 0x27bdfbd0  addiu       $sp, $sp, -0x430
    ctx->pc = 0x2f4900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966224));
    // 0x2f4904: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f4904u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4908: 0xffb00400  sd          $s0, 0x400($sp)
    ctx->pc = 0x2f4908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1024), GPR_U64(ctx, 16));
    // 0x2f490c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2f490cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4910: 0xffb10410  sd          $s1, 0x410($sp)
    ctx->pc = 0x2f4910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 17));
    // 0x2f4914: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f4914u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4918: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f4918u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f491c: 0xffbf0420  sd          $ra, 0x420($sp)
    ctx->pc = 0x2f491cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 31));
    // 0x2f4920: 0xc0bca56  jal         func_2F2958
    ctx->pc = 0x2F4920u;
    SET_GPR_U32(ctx, 31, 0x2F4928u);
    ctx->pc = 0x2F4924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4920u;
    // 0x2f4924: 0x27a50200  addiu       $a1, $sp, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2958u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F2958u, 0x2F4920u, 0x2F4928u)) {
        return;
    }
    ctx->pc = 0x2F4928u;
label_2f4928:
    // 0x2f4928: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x2F4928u;
    {
        const bool branch_taken_0x2f4928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F492Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4928u;
        // 0x2f492c: 0xdfbf0420  ld          $ra, 0x420($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4928) {
            ctx->pc = 0x2F4A1Cu;
            goto label_2f4a1c;
        }
    }
    ctx->pc = 0x2F4930u;
    // 0x2f4930: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2f4930u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2f4934: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x2f4934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x2f4938: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x2F4938u;
    SET_GPR_U32(ctx, 31, 0x2F4940u);
    ctx->pc = 0x2F493Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4938u;
    // 0x2f493c: 0x24a50140  addiu       $a1, $a1, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x2F4938u, 0x2F4940u)) {
        return;
    }
    ctx->pc = 0x2F4940u;
label_2f4940:
    // 0x2f4940: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F4940u;
    {
        const bool branch_taken_0x2f4940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4940u;
        // 0x2f4944: 0x8fa60210  lw          $a2, 0x210($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4940) {
            ctx->pc = 0x2F4954u;
            goto label_2f4954;
        }
    }
    ctx->pc = 0x2F4948u;
    // 0x2f4948: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f4948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f494c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2F494Cu;
    {
        const bool branch_taken_0x2f494c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F494Cu;
        // 0x2f4950: 0x34429002  ori         $v0, $v0, 0x9002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36866);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f494c) {
            ctx->pc = 0x2F4A18u;
            goto label_2f4a18;
        }
    }
    ctx->pc = 0x2F4954u;
label_2f4954:
    // 0x2f4954: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f4954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4958: 0x8fa70214  lw          $a3, 0x214($sp)
    ctx->pc = 0x2f4958u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
    // 0x2f495c: 0xc0bca56  jal         func_2F2958
    ctx->pc = 0x2F495Cu;
    SET_GPR_U32(ctx, 31, 0x2F4964u);
    ctx->pc = 0x2F4960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F495Cu;
    // 0x2f4960: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2958u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F2958u, 0x2F495Cu, 0x2F4964u)) {
        return;
    }
    ctx->pc = 0x2F4964u;
label_2f4964:
    // 0x2f4964: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2F4964u;
    {
        const bool branch_taken_0x2f4964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4964u;
        // 0x2f4968: 0xdfbf0420  ld          $ra, 0x420($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4964) {
            ctx->pc = 0x2F4A1Cu;
            goto label_2f4a1c;
        }
    }
    ctx->pc = 0x2F496Cu;
    // 0x2f496c: 0x92050007  lbu         $a1, 0x7($s0)
    ctx->pc = 0x2f496cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x2f4970: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2f4970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f4974: 0x92070003  lbu         $a3, 0x3($s0)
    ctx->pc = 0x2f4974u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x2f4978: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f4978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f497c: 0x92060002  lbu         $a2, 0x2($s0)
    ctx->pc = 0x2f497cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2f4980: 0x51102  srl         $v0, $a1, 4
    ctx->pc = 0x2f4980u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x2f4984: 0x920f0001  lbu         $t7, 0x1($s0)
    ctx->pc = 0x2f4984u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2f4988: 0x75902  srl         $t3, $a3, 4
    ctx->pc = 0x2f4988u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 7), 4));
    // 0x2f498c: 0x920c0006  lbu         $t4, 0x6($s0)
    ctx->pc = 0x2f498cu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x2f4990: 0x64102  srl         $t0, $a2, 4
    ctx->pc = 0x2f4990u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x2f4994: 0x92090005  lbu         $t1, 0x5($s0)
    ctx->pc = 0x2f4994u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x2f4998: 0xf7102  srl         $t6, $t7, 4
    ctx->pc = 0x2f4998u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 15), 4));
    // 0x2f499c: 0xc6902  srl         $t5, $t4, 4
    ctx->pc = 0x2f499cu;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 12), 4));
    // 0x2f49a0: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2f49a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2f49a4: 0x95102  srl         $t2, $t1, 4
    ctx->pc = 0x2f49a4u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 9), 4));
    // 0x2f49a8: 0x71635818  mult1       $t3, $t3, $v1
    ctx->pc = 0x2f49a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x2f49ac: 0x1034018  mult        $t0, $t0, $v1
    ctx->pc = 0x2f49acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x2f49b0: 0x30a5000f  andi        $a1, $a1, 0xF
    ctx->pc = 0x2f49b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x2f49b4: 0x1c37018  mult        $t6, $t6, $v1
    ctx->pc = 0x2f49b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x2f49b8: 0x30e7000f  andi        $a3, $a3, 0xF
    ctx->pc = 0x2f49b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
    // 0x2f49bc: 0x71a36818  mult1       $t5, $t5, $v1
    ctx->pc = 0x2f49bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x2f49c0: 0x30c6000f  andi        $a2, $a2, 0xF
    ctx->pc = 0x2f49c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x2f49c4: 0x1435018  mult        $t2, $t2, $v1
    ctx->pc = 0x2f49c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x2f49c8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2f49c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2f49cc: 0x1675821  addu        $t3, $t3, $a3
    ctx->pc = 0x2f49ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x2f49d0: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x2f49d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x2f49d4: 0x318c000f  andi        $t4, $t4, 0xF
    ctx->pc = 0x2f49d4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)15);
    // 0x2f49d8: 0x3129000f  andi        $t1, $t1, 0xF
    ctx->pc = 0x2f49d8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)15);
    // 0x2f49dc: 0x31ef000f  andi        $t7, $t7, 0xF
    ctx->pc = 0x2f49dcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)15);
    // 0x2f49e0: 0x1ac6821  addu        $t5, $t5, $t4
    ctx->pc = 0x2f49e0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x2f49e4: 0x1495021  addu        $t2, $t2, $t1
    ctx->pc = 0x2f49e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x2f49e8: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x2f49e8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x2f49ec: 0x244207d0  addiu       $v0, $v0, 0x7D0
    ctx->pc = 0x2f49ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2000));
    // 0x2f49f0: 0x8fa60210  lw          $a2, 0x210($sp)
    ctx->pc = 0x2f49f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x2f49f4: 0x8fa70214  lw          $a3, 0x214($sp)
    ctx->pc = 0x2f49f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
    // 0x2f49f8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2f49f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f49fc: 0xa7a2001e  sh          $v0, 0x1E($sp)
    ctx->pc = 0x2f49fcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 30), (uint16_t)GPR_U32(ctx, 2));
    // 0x2f4a00: 0xa3ad001d  sb          $t5, 0x1D($sp)
    ctx->pc = 0x2f4a00u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 29), (uint8_t)GPR_U32(ctx, 13));
    // 0x2f4a04: 0xa3aa001c  sb          $t2, 0x1C($sp)
    ctx->pc = 0x2f4a04u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 10));
    // 0x2f4a08: 0xa3ab001b  sb          $t3, 0x1B($sp)
    ctx->pc = 0x2f4a08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 27), (uint8_t)GPR_U32(ctx, 11));
    // 0x2f4a0c: 0xa3a8001a  sb          $t0, 0x1A($sp)
    ctx->pc = 0x2f4a0cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 26), (uint8_t)GPR_U32(ctx, 8));
    // 0x2f4a10: 0xc0bd056  jal         func_2F4158
    ctx->pc = 0x2F4A10u;
    SET_GPR_U32(ctx, 31, 0x2F4A18u);
    ctx->pc = 0x2F4A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4A10u;
    // 0x2f4a14: 0xa3ae0019  sb          $t6, 0x19($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 25), (uint8_t)GPR_U32(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4158u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F4158u, 0x2F4A10u, 0x2F4A18u)) {
        return;
    }
    ctx->pc = 0x2F4A18u;
label_2f4a18:
    // 0x2f4a18: 0xdfbf0420  ld          $ra, 0x420($sp)
    ctx->pc = 0x2f4a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
label_2f4a1c:
    // 0x2f4a1c: 0xdfb10410  ld          $s1, 0x410($sp)
    ctx->pc = 0x2f4a1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x2f4a20: 0xdfb00400  ld          $s0, 0x400($sp)
    ctx->pc = 0x2f4a20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x2f4a24: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4A24u;
        // 0x2f4a28: 0x27bd0430  addiu       $sp, $sp, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F4A2Cu;
    // 0x2f4a2c: 0x0  nop
    ctx->pc = 0x2f4a2cu;
    // NOP
    ctx->pc = 0x2f4a30u;
}
