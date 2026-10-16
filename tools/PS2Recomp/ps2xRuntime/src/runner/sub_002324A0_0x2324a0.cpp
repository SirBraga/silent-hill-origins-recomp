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

// Function: sub_002324A0
// Address: 0x2324a0 - 0x232918
void sub_002324A0_0x2324a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002324A0_0x2324a0");
#endif

    switch (ctx->pc) {
        case 0x2324c8u: goto label_2324c8;
        case 0x2325bcu: goto label_2325bc;
        case 0x23276cu: goto label_23276c;
        case 0x2327c8u: goto label_2327c8;
        default: break;
    }

    ctx->pc = 0x2324a0u;

    // 0x2324a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2324a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2324a4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2324a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2324a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2324a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2324ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2324acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2324b0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2324b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2324b4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2324b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2324b8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2324b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2324bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2324bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2324c0: 0xc08ba10  jal         func_22E840
    ctx->pc = 0x2324C0u;
    SET_GPR_U32(ctx, 31, 0x2324C8u);
    ctx->pc = 0x2324C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2324C0u;
    // 0x2324c4: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E840u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22E840u, 0x2324C0u, 0x2324C8u)) {
        return;
    }
    ctx->pc = 0x2324C8u;
label_2324c8:
    // 0x2324c8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x2324c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x2324cc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2324ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2324d0: 0x90820020  lbu         $v0, 0x20($a0)
    ctx->pc = 0x2324d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2324d4: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2324d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2324d8: 0x1443001f  bne         $v0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2324D8u;
    {
        const bool branch_taken_0x2324d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2324DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2324D8u;
        // 0x2324dc: 0x8f8284b4  lw          $v0, -0x7B4C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935732)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2324d8) {
            ctx->pc = 0x232558u;
            goto label_232558;
        }
    }
    ctx->pc = 0x2324E0u;
    // 0x2324e0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2324e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2324e4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2324e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2324e8: 0x8c63416c  lw          $v1, 0x416C($v1)
    ctx->pc = 0x2324e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B416Cu));
    // 0x2324ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2324ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2324f0: 0x90440017  lbu         $a0, 0x17($v0)
    ctx->pc = 0x2324f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 23)));
    // 0x2324f4: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2324F4u;
    {
        const bool branch_taken_0x2324f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2324f4) {
            ctx->pc = 0x2324F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2324F4u;
            // 0x2324f8: 0x8c430008  lw          $v1, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232504u;
            goto label_232504;
        }
    }
    ctx->pc = 0x2324FCu;
    // 0x2324fc: 0x100000fe  b           . + 4 + (0xFE << 2)
    ctx->pc = 0x2324FCu;
    {
        const bool branch_taken_0x2324fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2324FCu;
        // 0x232500: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2324fc) {
            ctx->pc = 0x2328F8u;
            goto label_2328f8;
        }
    }
    ctx->pc = 0x232504u;
label_232504:
    // 0x232504: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x232504u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x232508: 0x3c063f00  lui         $a2, 0x3F00
    ctx->pc = 0x232508u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16128 << 16));
    // 0x23250c: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x23250cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x232510: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x232510u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x232514: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x232514u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x232518: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x232518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x23251c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x23251cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x232520: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x232520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x232524: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x232524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x232528: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x232528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x23252c: 0xff828458  sd          $v0, -0x7BA8($gp)
    ctx->pc = 0x23252cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935640), GPR_U64(ctx, 2));
    // 0x232530: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x232530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x232534: 0x90620023  lbu         $v0, 0x23($v1)
    ctx->pc = 0x232534u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 35)));
    // 0x232538: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x232538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x23253c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x23253Cu;
    {
        const bool branch_taken_0x23253c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23253Cu;
        // 0x232540: 0x8f8284b4  lw          $v0, -0x7B4C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935732)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23253c) {
            ctx->pc = 0x23257Cu;
            goto label_23257c;
        }
    }
    ctx->pc = 0x232544u;
    // 0x232544: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x232544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x232548: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x232548u;
    {
        const bool branch_taken_0x232548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23254Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232548u;
        // 0x23254c: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232548) {
            ctx->pc = 0x23256Cu;
            goto label_23256c;
        }
    }
    ctx->pc = 0x232550u;
    // 0x232550: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x232550u;
    {
        const bool branch_taken_0x232550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232550u;
        // 0x232554: 0xdc435120  ld          $v1, 0x5120($v0) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 20768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232550) {
            ctx->pc = 0x232574u;
            goto label_232574;
        }
    }
    ctx->pc = 0x232558u;
label_232558:
    // 0x232558: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x232558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23255c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23255Cu;
    {
        const bool branch_taken_0x23255c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23255Cu;
        // 0x232560: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23255c) {
            ctx->pc = 0x23256Cu;
            goto label_23256c;
        }
    }
    ctx->pc = 0x232564u;
    // 0x232564: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x232564u;
    {
        const bool branch_taken_0x232564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232564u;
        // 0x232568: 0xdc435120  ld          $v1, 0x5120($v0) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 20768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232564) {
            ctx->pc = 0x232574u;
            goto label_232574;
        }
    }
    ctx->pc = 0x23256Cu;
label_23256c:
    // 0x23256c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x23256cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x232570: 0xdc435290  ld          $v1, 0x5290($v0)
    ctx->pc = 0x232570u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x735290u));
label_232574:
    // 0x232574: 0xff838458  sd          $v1, -0x7BA8($gp)
    ctx->pc = 0x232574u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935640), GPR_U64(ctx, 3));
    // 0x232578: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x232578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_23257c:
    // 0x23257c: 0x2406ffe0  addiu       $a2, $zero, -0x20
    ctx->pc = 0x23257cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x232580: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x232580u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x232584: 0x8465001c  lh          $a1, 0x1C($v1)
    ctx->pc = 0x232584u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x232588: 0x8c70000c  lw          $s0, 0xC($v1)
    ctx->pc = 0x232588u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x23258c: 0x9462001c  lhu         $v0, 0x1C($v1)
    ctx->pc = 0x23258cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x232590: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x232590u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x232594: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x232594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x232598: 0x2610001f  addiu       $s0, $s0, 0x1F
    ctx->pc = 0x232598u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 31));
    // 0x23259c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x23259cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2325a0: 0x2068024  and         $s0, $s0, $a2
    ctx->pc = 0x2325a0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 6));
    // 0x2325a4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2325a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2325a8: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x2325a8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2325ac: 0x108103  sra         $s0, $s0, 4
    ctx->pc = 0x2325acu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 4));
    // 0x2325b0: 0x2610000e  addiu       $s0, $s0, 0xE
    ctx->pc = 0x2325b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 14));
    // 0x2325b4: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x2325B4u;
    SET_GPR_U32(ctx, 31, 0x2325BCu);
    ctx->pc = 0x2325B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2325B4u;
    // 0x2325b8: 0x36050001  ori         $a1, $s0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x2325B4u, 0x2325BCu)) {
        return;
    }
    ctx->pc = 0x2325BCu;
label_2325bc:
    // 0x2325bc: 0x36108000  ori         $s0, $s0, 0x8000
    ctx->pc = 0x2325bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32768);
    // 0x2325c0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2325c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2325c4: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x2325c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x2325c8: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x2325c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2325cc: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x2325ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x2325d0: 0x70708389  pcpyld      $s0, $v1, $s0
    ctx->pc = 0x2325d0u;
    SET_GPR_VEC(ctx, 16, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 16)));
    // 0x2325d4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2325d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2325d8: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x2325d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x2325dc: 0x7c500000  sq          $s0, 0x0($v0)
    ctx->pc = 0x2325dcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 16));
    // 0x2325e0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2325e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2325e4: 0x32660001  andi        $a2, $s3, 0x1
    ctx->pc = 0x2325e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x2325e8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2325E8u;
    {
        const bool branch_taken_0x2325e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2325ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2325E8u;
        // 0x2325ec: 0xaf8290bc  sw          $v0, -0x6F44($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938812), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2325e8) {
            ctx->pc = 0x2325F8u;
            goto label_2325f8;
        }
    }
    ctx->pc = 0x2325F0u;
    // 0x2325f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2325F0u;
    {
        const bool branch_taken_0x2325f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2325F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2325F0u;
        // 0x2325f4: 0x9f908458  lwu         $s0, -0x7BA8($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 28), 4294935640)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2325f0) {
            ctx->pc = 0x232608u;
            goto label_232608;
        }
    }
    ctx->pc = 0x2325F8u;
label_2325f8:
    // 0x2325f8: 0xdf908458  ld          $s0, -0x7BA8($gp)
    ctx->pc = 0x2325f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 28), 4294935640)));
    // 0x2325fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2325fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x232600: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x232600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x232604: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x232604u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_232608:
    // 0x232608: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x232608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x23260c: 0x70508389  pcpyld      $s0, $v0, $s0
    ctx->pc = 0x23260cu;
    SET_GPR_VEC(ctx, 16, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 16)));
    // 0x232610: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x232610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x232614: 0x8c63412c  lw          $v1, 0x412C($v1)
    ctx->pc = 0x232614u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x232618: 0x7c700000  sq          $s0, 0x0($v1)
    ctx->pc = 0x232618u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 16));
    // 0x23261c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x23261cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x232620: 0x32620002  andi        $v0, $s3, 0x2
    ctx->pc = 0x232620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
    // 0x232624: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x232624u;
    {
        const bool branch_taken_0x232624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232624u;
        // 0x232628: 0xaf8390bc  sw          $v1, -0x6F44($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938812), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232624) {
            ctx->pc = 0x232648u;
            goto label_232648;
        }
    }
    ctx->pc = 0x23262Cu;
    // 0x23262c: 0xdf908450  ld          $s0, -0x7BB0($gp)
    ctx->pc = 0x23262cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 28), 4294935632)));
    // 0x232630: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x232630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x232634: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x232634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x232638: 0x210b8  dsll        $v0, $v0, 2
    ctx->pc = 0x232638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
    // 0x23263c: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x23263cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x232640: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x232640u;
    {
        const bool branch_taken_0x232640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232640u;
        // 0x232644: 0x2028024  and         $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232640) {
            ctx->pc = 0x232658u;
            goto label_232658;
        }
    }
    ctx->pc = 0x232648u;
label_232648:
    // 0x232648: 0xdf908450  ld          $s0, -0x7BB0($gp)
    ctx->pc = 0x232648u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 28), 4294935632)));
    // 0x23264c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x23264cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x232650: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x232650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x232654: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x232654u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_232658:
    // 0x232658: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x232658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x23265c: 0x70508389  pcpyld      $s0, $v0, $s0
    ctx->pc = 0x23265cu;
    SET_GPR_VEC(ctx, 16, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 16)));
    // 0x232660: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x232660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x232664: 0x8c63412c  lw          $v1, 0x412C($v1)
    ctx->pc = 0x232664u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x232668: 0x7c700000  sq          $s0, 0x0($v1)
    ctx->pc = 0x232668u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 16));
    // 0x23266c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x23266cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x232670: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x232670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x232674: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x232674u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x232678: 0x24050045  addiu       $a1, $zero, 0x45
    ctx->pc = 0x232678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x23267c: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x23267cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x232680: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x232680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x232684: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x232684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x232688: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x232688u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x23268c: 0x70a28389  pcpyld      $s0, $a1, $v0
    ctx->pc = 0x23268cu;
    SET_GPR_VEC(ctx, 16, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x232690: 0x7c700000  sq          $s0, 0x0($v1)
    ctx->pc = 0x232690u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 16));
    // 0x232694: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x232694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x232698: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x232698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x23269c: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x23269cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2326a0: 0xdf908460  ld          $s0, -0x7BA0($gp)
    ctx->pc = 0x2326a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 28), 4294935648)));
    // 0x2326a4: 0x3c02fffa  lui         $v0, 0xFFFA
    ctx->pc = 0x2326a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65530 << 16));
    // 0x2326a8: 0x3442bffe  ori         $v0, $v0, 0xBFFE
    ctx->pc = 0x2326a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49150);
    // 0x2326ac: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2326acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x2326b0: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x2326b0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x2326b4: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x2326b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x2326b8: 0x2058025  or          $s0, $s0, $a1
    ctx->pc = 0x2326b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 5));
    // 0x2326bc: 0x70908389  pcpyld      $s0, $a0, $s0
    ctx->pc = 0x2326bcu;
    SET_GPR_VEC(ctx, 16, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 16)));
    // 0x2326c0: 0x7c700010  sq          $s0, 0x10($v1)
    ctx->pc = 0x2326c0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 16));
    // 0x2326c4: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x2326c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2326c8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2326c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2326cc: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x2326ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2326d0: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x2326d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2326d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2326d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2326d8: 0x70858389  pcpyld      $s0, $a0, $a1
    ctx->pc = 0x2326d8u;
    SET_GPR_VEC(ctx, 16, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x2326dc: 0x7c700020  sq          $s0, 0x20($v1)
    ctx->pc = 0x2326dcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 16));
    // 0x2326e0: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x2326e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x2326e4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2326e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2326e8: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x2326e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2326ec: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x2326ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2326f0: 0x3402fffe  ori         $v0, $zero, 0xFFFE
    ctx->pc = 0x2326f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
    // 0x2326f4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2326f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2326f8: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x2326f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x2326fc: 0x213f8  dsll        $v0, $v0, 15
    ctx->pc = 0x2326fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 15);
    // 0x232700: 0x70828389  pcpyld      $s0, $a0, $v0
    ctx->pc = 0x232700u;
    SET_GPR_VEC(ctx, 16, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x232704: 0x7c700030  sq          $s0, 0x30($v1)
    ctx->pc = 0x232704u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 16));
    // 0x232708: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x232708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x23270c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23270cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x232710: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x232710u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x232714: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x232714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x232718: 0x70a48389  pcpyld      $s0, $a1, $a0
    ctx->pc = 0x232718u;
    SET_GPR_VEC(ctx, 16, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x23271c: 0x7c700040  sq          $s0, 0x40($v1)
    ctx->pc = 0x23271cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), GPR_VEC(ctx, 16));
    // 0x232720: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x232720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x232724: 0x10c00014  beqz        $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x232724u;
    {
        const bool branch_taken_0x232724 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x232728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232724u;
        // 0x232728: 0xaf8390bc  sw          $v1, -0x6F44($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938812), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232724) {
            ctx->pc = 0x232778u;
            goto label_232778;
        }
    }
    ctx->pc = 0x23272Cu;
    // 0x23272c: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x23272cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x232730: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x232730u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x232734: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x232734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x232738: 0x0  nop
    ctx->pc = 0x232738u;
    // NOP
    // 0x23273c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23273cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x232740: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x232740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x232744: 0x34218312  ori         $at, $at, 0x8312
    ctx->pc = 0x232744u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33554);
    // 0x232748: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x232748u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23274c: 0x92500000  lbu         $s0, 0x0($s2)
    ctx->pc = 0x23274cu;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x232750: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x232750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
    // 0x232754: 0x92420002  lbu         $v0, 0x2($s2)
    ctx->pc = 0x232754u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x232758: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x232758u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x23275c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x23275cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x232760: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x232760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x232764: 0xc07da6c  jal         func_1F69B0
    ctx->pc = 0x232764u;
    SET_GPR_U32(ctx, 31, 0x23276Cu);
    ctx->pc = 0x232768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232764u;
    // 0x232768: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F69B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F69B0u, 0x232764u, 0x23276Cu)) {
        return;
    }
    ctx->pc = 0x23276Cu;
label_23276c:
    // 0x23276c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x23276cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x232770: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x232770u;
    {
        const bool branch_taken_0x232770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232770u;
        // 0x232774: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232770) {
            ctx->pc = 0x23277Cu;
            goto label_23277c;
        }
    }
    ctx->pc = 0x232778u;
label_232778:
    // 0x232778: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x232778u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23277c:
    // 0x23277c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23277cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x232780: 0x70708389  pcpyld      $s0, $v1, $s0
    ctx->pc = 0x232780u;
    SET_GPR_VEC(ctx, 16, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 16)));
    // 0x232784: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x232784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x232788: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x232788u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x23278c: 0x7c500000  sq          $s0, 0x0($v0)
    ctx->pc = 0x23278cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 16));
    // 0x232790: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x232790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x232794: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x232794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x232798: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x232798u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x23279c: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x23279cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x2327a0: 0x8467001c  lh          $a3, 0x1C($v1)
    ctx->pc = 0x2327a0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2327a4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2327a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2327a8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2327a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2327ac: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x2327acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2327b0: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2327B0u;
    {
        const bool branch_taken_0x2327b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2327B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2327B0u;
        // 0x2327b4: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2327b0) {
            ctx->pc = 0x232848u;
            goto label_232848;
        }
    }
    ctx->pc = 0x2327B8u;
    // 0x2327b8: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x2327b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2327bc: 0x2409ffe0  addiu       $t1, $zero, -0x20
    ctx->pc = 0x2327bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x2327c0: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x2327c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x2327c4: 0x0  nop
    ctx->pc = 0x2327c4u;
    // NOP
label_2327c8:
    // 0x2327c8: 0x71028389  pcpyld      $s0, $t0, $v0
    ctx->pc = 0x2327c8u;
    SET_GPR_VEC(ctx, 16, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 2)));
    // 0x2327cc: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2327ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2327d0: 0x8c84412c  lw          $a0, 0x412C($a0)
    ctx->pc = 0x2327d0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x2327d4: 0x7c900000  sq          $s0, 0x0($a0)
    ctx->pc = 0x2327d4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 16));
    // 0x2327d8: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x2327d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2327dc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2327dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2327e0: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x2327e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2327e4: 0x8e250060  lw          $a1, 0x60($s1)
    ctx->pc = 0x2327e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x2327e8: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x2327e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2327ec: 0x24e30020  addiu       $v1, $a3, 0x20
    ctx->pc = 0x2327ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x2327f0: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x2327f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2327f4: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x2327f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2327f8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2327f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2327fc: 0xc3282a  slt         $a1, $a2, $v1
    ctx->pc = 0x2327fcu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x232800: 0xc5180b  movn        $v1, $a2, $a1
    ctx->pc = 0x232800u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6));
    // 0x232804: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x232804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x232808: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x232808u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x23280c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x23280cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x232810: 0x71028389  pcpyld      $s0, $t0, $v0
    ctx->pc = 0x232810u;
    SET_GPR_VEC(ctx, 16, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 2)));
    // 0x232814: 0x7c900000  sq          $s0, 0x0($a0)
    ctx->pc = 0x232814u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 16));
    // 0x232818: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x232818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x23281c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23281cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x232820: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x232820u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x232824: 0xe93824  and         $a3, $a3, $t1
    ctx->pc = 0x232824u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 9));
    // 0x232828: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x232828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x23282c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x23282cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x232830: 0x8483001c  lh          $v1, 0x1C($a0)
    ctx->pc = 0x232830u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x232834: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x232834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x232838: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x232838u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23283c: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x23283Cu;
    {
        const bool branch_taken_0x23283c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x232840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23283Cu;
        // 0x232840: 0x71100  sll         $v0, $a3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23283c) {
            ctx->pc = 0x2327C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2327c8;
        }
    }
    ctx->pc = 0x232844u;
    // 0x232844: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x232844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_232848:
    // 0x232848: 0xdf828458  ld          $v0, -0x7BA8($gp)
    ctx->pc = 0x232848u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935640)));
    // 0x23284c: 0x70828389  pcpyld      $s0, $a0, $v0
    ctx->pc = 0x23284cu;
    SET_GPR_VEC(ctx, 16, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x232850: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x232850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x232854: 0x8c63412c  lw          $v1, 0x412C($v1)
    ctx->pc = 0x232854u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x232858: 0x7c700000  sq          $s0, 0x0($v1)
    ctx->pc = 0x232858u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 16));
    // 0x23285c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x23285cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x232860: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x232860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x232864: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x232864u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x232868: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x232868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x23286c: 0xdf828450  ld          $v0, -0x7BB0($gp)
    ctx->pc = 0x23286cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935632)));
    // 0x232870: 0x70828389  pcpyld      $s0, $a0, $v0
    ctx->pc = 0x232870u;
    SET_GPR_VEC(ctx, 16, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x232874: 0x7c700000  sq          $s0, 0x0($v1)
    ctx->pc = 0x232874u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 16));
    // 0x232878: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x232878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x23287c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23287cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x232880: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x232880u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x232884: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x232884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x232888: 0xdf828460  ld          $v0, -0x7BA0($gp)
    ctx->pc = 0x232888u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935648)));
    // 0x23288c: 0x70828389  pcpyld      $s0, $a0, $v0
    ctx->pc = 0x23288cu;
    SET_GPR_VEC(ctx, 16, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x232890: 0x7c700010  sq          $s0, 0x10($v1)
    ctx->pc = 0x232890u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 16));
    // 0x232894: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x232894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x232898: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x232898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x23289c: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x23289cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2328a0: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x2328a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2328a4: 0xdf828468  ld          $v0, -0x7B98($gp)
    ctx->pc = 0x2328a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935656)));
    // 0x2328a8: 0x70828389  pcpyld      $s0, $a0, $v0
    ctx->pc = 0x2328a8u;
    SET_GPR_VEC(ctx, 16, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x2328ac: 0x7c700020  sq          $s0, 0x20($v1)
    ctx->pc = 0x2328acu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 16));
    // 0x2328b0: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x2328b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x2328b4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2328b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2328b8: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x2328b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2328bc: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x2328bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2328c0: 0xdf828468  ld          $v0, -0x7B98($gp)
    ctx->pc = 0x2328c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935656)));
    // 0x2328c4: 0x70828389  pcpyld      $s0, $a0, $v0
    ctx->pc = 0x2328c4u;
    SET_GPR_VEC(ctx, 16, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x2328c8: 0x7c700030  sq          $s0, 0x30($v1)
    ctx->pc = 0x2328c8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 16));
    // 0x2328cc: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x2328ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x2328d0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2328d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2328d4: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x2328d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2328d8: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x2328d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2328dc: 0xdf828470  ld          $v0, -0x7B90($gp)
    ctx->pc = 0x2328dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935664)));
    // 0x2328e0: 0x70828389  pcpyld      $s0, $a0, $v0
    ctx->pc = 0x2328e0u;
    SET_GPR_VEC(ctx, 16, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x2328e4: 0x7c700040  sq          $s0, 0x40($v1)
    ctx->pc = 0x2328e4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), GPR_VEC(ctx, 16));
    // 0x2328e8: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x2328e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x2328ec: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2328ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2328f0: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x2328f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2328f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2328f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2328f8:
    // 0x2328f8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2328f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2328fc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2328fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x232900: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x232900u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x232904: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x232904u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232908: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x232908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23290c: 0x3e00008  jr          $ra
    ctx->pc = 0x23290Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23290Cu;
        // 0x232910: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23290Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232914u;
    // 0x232914: 0x0  nop
    ctx->pc = 0x232914u;
    // NOP
    ctx->pc = 0x232918u;
}
