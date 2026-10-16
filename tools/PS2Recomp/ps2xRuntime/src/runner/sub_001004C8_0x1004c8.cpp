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

// Function: sub_001004C8
// Address: 0x1004c8 - 0x100698
void sub_001004C8_0x1004c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001004C8_0x1004c8");
#endif

    switch (ctx->pc) {
        case 0x1004f4u: goto label_1004f4;
        case 0x100528u: goto label_100528;
        case 0x100540u: goto label_100540;
        case 0x1005a4u: goto label_1005a4;
        case 0x1005c0u: goto label_1005c0;
        case 0x1005dcu: goto label_1005dc;
        case 0x1005f4u: goto label_1005f4;
        case 0x100600u: goto label_100600;
        case 0x100620u: goto label_100620;
        case 0x10062cu: goto label_10062c;
        case 0x10064cu: goto label_10064c;
        case 0x100668u: goto label_100668;
        default: break;
    }

    ctx->pc = 0x1004c8u;

    // 0x1004c8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1004c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1004cc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1004ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1004d0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1004d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1004d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1004d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1004d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1004d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1004dc: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1004dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1004e0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1004e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1004e4: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1004e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x1004e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1004e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1004ec: 0xc04ed0e  jal         func_13B438
    ctx->pc = 0x1004ECu;
    SET_GPR_U32(ctx, 31, 0x1004F4u);
    ctx->pc = 0x1004F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1004ECu;
    // 0x1004f0: 0x3c120070  lui         $s2, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)112 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13B438u, 0x1004ECu, 0x1004F4u)) {
        return;
    }
    ctx->pc = 0x1004F4u;
label_1004f4:
    // 0x1004f4: 0x8e2200d8  lw          $v0, 0xD8($s1)
    ctx->pc = 0x1004f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x1004f8: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1004F8u;
    {
        const bool branch_taken_0x1004f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1004FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1004F8u;
        // 0x1004fc: 0x8e461a68  lw          $a2, 0x1A68($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6760)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1004f8) {
            ctx->pc = 0x100594u;
            goto label_100594;
        }
    }
    ctx->pc = 0x100500u;
    // 0x100500: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x100500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x100504: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x100504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x100508: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x100508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x10050c: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x10050cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x100510: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x100510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x100514: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x100514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x100518: 0xc2180a  movz        $v1, $a2, $v0
    ctx->pc = 0x100518u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6));
    // 0x10051c: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x10051cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x100520: 0xc080924  jal         func_202490
    ctx->pc = 0x100520u;
    SET_GPR_U32(ctx, 31, 0x100528u);
    ctx->pc = 0x100524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100520u;
    // 0x100524: 0xae2300e8  sw          $v1, 0xE8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x100520u, 0x100528u)) {
        return;
    }
    ctx->pc = 0x100528u;
label_100528:
    // 0x100528: 0x8e2300e8  lw          $v1, 0xE8($s1)
    ctx->pc = 0x100528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x10052c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10052cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100530: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x100530u;
    {
        const bool branch_taken_0x100530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x100534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100530u;
        // 0x100534: 0xae2200d8  sw          $v0, 0xD8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100530) {
            ctx->pc = 0x100590u;
            goto label_100590;
        }
    }
    ctx->pc = 0x100538u;
    // 0x100538: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x100538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10053c: 0x0  nop
    ctx->pc = 0x10053cu;
    // NOP
label_100540:
    // 0x100540: 0x8e2300d8  lw          $v1, 0xD8($s1)
    ctx->pc = 0x100540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x100544: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x100544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x100548: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x100548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x10054c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x10054cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x100550: 0x8e2200d8  lw          $v0, 0xD8($s1)
    ctx->pc = 0x100550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x100554: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x100554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x100558: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x100558u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x10055c: 0x8e2300d8  lw          $v1, 0xD8($s1)
    ctx->pc = 0x10055cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x100560: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x100560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x100564: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x100564u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x100568: 0x8e2200d8  lw          $v0, 0xD8($s1)
    ctx->pc = 0x100568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x10056c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x10056cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x100570: 0xac400058  sw          $zero, 0x58($v0)
    ctx->pc = 0x100570u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 0));
    // 0x100574: 0x8e2300d8  lw          $v1, 0xD8($s1)
    ctx->pc = 0x100574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x100578: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x100578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x10057c: 0xac60005c  sw          $zero, 0x5C($v1)
    ctx->pc = 0x10057cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 0));
    // 0x100580: 0x8e2200e8  lw          $v0, 0xE8($s1)
    ctx->pc = 0x100580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x100584: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x100584u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x100588: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x100588u;
    {
        const bool branch_taken_0x100588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10058Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100588u;
        // 0x10058c: 0x24840060  addiu       $a0, $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100588) {
            ctx->pc = 0x100540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100540;
        }
    }
    ctx->pc = 0x100590u;
label_100590:
    // 0x100590: 0x8e461a68  lw          $a2, 0x1A68($s2)
    ctx->pc = 0x100590u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6760)));
label_100594:
    // 0x100594: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x100594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100598: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x100598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10059c: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x10059Cu;
    SET_GPR_U32(ctx, 31, 0x1005A4u);
    ctx->pc = 0x1005A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10059Cu;
    // 0x1005a0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x10059Cu, 0x1005A4u)) {
        return;
    }
    ctx->pc = 0x1005A4u;
label_1005a4:
    // 0x1005a4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1005a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1005a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1005a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1005ac: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1005ACu;
    {
        const bool branch_taken_0x1005ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1005B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1005ACu;
        // 0x1005b0: 0x3c140069  lui         $s4, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1005ac) {
            ctx->pc = 0x100678u;
            goto label_100678;
        }
    }
    ctx->pc = 0x1005B4u;
    // 0x1005b4: 0x3c130034  lui         $s3, 0x34
    ctx->pc = 0x1005b4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)52 << 16));
    // 0x1005b8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1005b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1005bc: 0x0  nop
    ctx->pc = 0x1005bcu;
    // NOP
label_1005c0:
    // 0x1005c0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1005c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1005c4: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1005C4u;
    {
        const bool branch_taken_0x1005c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1005C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1005C4u;
        // 0x1005c8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1005c4) {
            ctx->pc = 0x100650u;
            goto label_100650;
        }
    }
    ctx->pc = 0x1005CCu;
    // 0x1005cc: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x1005ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1005d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1005d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1005d4: 0xc0401a6  jal         func_100698
    ctx->pc = 0x1005D4u;
    SET_GPR_U32(ctx, 31, 0x1005DCu);
    ctx->pc = 0x1005D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1005D4u;
    // 0x1005d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100698u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x100698u, 0x1005D4u, 0x1005DCu)) {
        return;
    }
    ctx->pc = 0x1005DCu;
label_1005dc:
    // 0x1005dc: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x1005DCu;
    {
        const bool branch_taken_0x1005dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1005E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1005DCu;
        // 0x1005e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1005dc) {
            ctx->pc = 0x100610u;
            goto label_100610;
        }
    }
    ctx->pc = 0x1005E4u;
    // 0x1005e4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1005e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1005e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1005e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1005ec: 0xc08063c  jal         func_2018F0
    ctx->pc = 0x1005ECu;
    SET_GPR_U32(ctx, 31, 0x1005F4u);
    ctx->pc = 0x1005F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1005ECu;
    // 0x1005f0: 0x27a70014  addiu       $a3, $sp, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2018F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2018F0u, 0x1005ECu, 0x1005F4u)) {
        return;
    }
    ctx->pc = 0x1005F4u;
label_1005f4:
    // 0x1005f4: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1005f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1005f8: 0xc065c58  jal         func_197160
    ctx->pc = 0x1005F8u;
    SET_GPR_U32(ctx, 31, 0x100600u);
    ctx->pc = 0x1005FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1005F8u;
    // 0x1005fc: 0x268492e0  addiu       $a0, $s4, -0x6D20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294939360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197160u, 0x1005F8u, 0x100600u)) {
        return;
    }
    ctx->pc = 0x100600u;
label_100600:
    // 0x100600: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x100600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x100604: 0x62900b  movn        $s2, $v1, $v0
    ctx->pc = 0x100604u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3));
    // 0x100608: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x100608u;
    {
        const bool branch_taken_0x100608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10060Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100608u;
        // 0x10060c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100608) {
            ctx->pc = 0x10064Cu;
            goto label_10064c;
        }
    }
    ctx->pc = 0x100610u;
label_100610:
    // 0x100610: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x100610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x100614: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x100614u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100618: 0xc08063c  jal         func_2018F0
    ctx->pc = 0x100618u;
    SET_GPR_U32(ctx, 31, 0x100620u);
    ctx->pc = 0x10061Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100618u;
    // 0x10061c: 0x27a7001c  addiu       $a3, $sp, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2018F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2018F0u, 0x100618u, 0x100620u)) {
        return;
    }
    ctx->pc = 0x100620u;
label_100620:
    // 0x100620: 0x8e648668  lw          $a0, -0x7998($s3)
    ctx->pc = 0x100620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294936168)));
    // 0x100624: 0xc05953e  jal         func_1654F8
    ctx->pc = 0x100624u;
    SET_GPR_U32(ctx, 31, 0x10062Cu);
    ctx->pc = 0x100628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100624u;
    // 0x100628: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1654F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1654F8u, 0x100624u, 0x10062Cu)) {
        return;
    }
    ctx->pc = 0x10062Cu;
label_10062c:
    // 0x10062c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10062cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100630: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x100630u;
    {
        const bool branch_taken_0x100630 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x100634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100630u;
        // 0x100634: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100630) {
            ctx->pc = 0x100650u;
            goto label_100650;
        }
    }
    ctx->pc = 0x100638u;
    // 0x100638: 0x8ca20660  lw          $v0, 0x660($a1)
    ctx->pc = 0x100638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1632)));
    // 0x10063c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10063Cu;
    {
        const bool branch_taken_0x10063c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10063Cu;
        // 0x100640: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10063c) {
            ctx->pc = 0x100654u;
            goto label_100654;
        }
    }
    ctx->pc = 0x100644u;
    // 0x100644: 0xc040980  jal         func_102600
    ctx->pc = 0x100644u;
    SET_GPR_U32(ctx, 31, 0x10064Cu);
    ctx->pc = 0x100648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100644u;
    // 0x100648: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102600u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x102600u, 0x100644u, 0x10064Cu)) {
        return;
    }
    ctx->pc = 0x10064Cu;
label_10064c:
    // 0x10064c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x10064cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_100650:
    // 0x100650: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x100650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_100654:
    // 0x100654: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x100654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100658: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x100658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10065c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10065cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x100660: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x100660u;
    SET_GPR_U32(ctx, 31, 0x100668u);
    ctx->pc = 0x100664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100660u;
    // 0x100664: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x100660u, 0x100668u)) {
        return;
    }
    ctx->pc = 0x100668u;
label_100668:
    // 0x100668: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x100668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10066c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10066cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x100670: 0x1460ffd3  bnez        $v1, . + 4 + (-0x2D << 2)
    ctx->pc = 0x100670u;
    {
        const bool branch_taken_0x100670 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x100674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100670u;
        // 0x100674: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100670) {
            ctx->pc = 0x1005C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1005c0;
        }
    }
    ctx->pc = 0x100678u;
label_100678:
    // 0x100678: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x100678u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10067c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x10067cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x100680: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x100680u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x100684: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x100684u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x100688: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x100688u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10068c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10068cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x100690: 0x3e00008  jr          $ra
    ctx->pc = 0x100690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100690u;
        // 0x100694: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100698u;
}
