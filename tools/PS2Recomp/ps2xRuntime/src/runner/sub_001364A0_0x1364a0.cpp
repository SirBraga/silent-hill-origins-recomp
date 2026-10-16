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

// Function: sub_001364A0
// Address: 0x1364a0 - 0x1366f0
void sub_001364A0_0x1364a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001364A0_0x1364a0");
#endif

    switch (ctx->pc) {
        case 0x1364d4u: goto label_1364d4;
        case 0x1364e8u: goto label_1364e8;
        case 0x136504u: goto label_136504;
        case 0x136538u: goto label_136538;
        case 0x136568u: goto label_136568;
        case 0x136588u: goto label_136588;
        case 0x1365c4u: goto label_1365c4;
        case 0x1365f4u: goto label_1365f4;
        case 0x136604u: goto label_136604;
        case 0x13660cu: goto label_13660c;
        case 0x136624u: goto label_136624;
        case 0x13666cu: goto label_13666c;
        case 0x136688u: goto label_136688;
        case 0x1366a0u: goto label_1366a0;
        case 0x1366a8u: goto label_1366a8;
        case 0x1366d8u: goto label_1366d8;
        default: break;
    }

    ctx->pc = 0x1364a0u;

    // 0x1364a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1364a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1364a4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1364a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1364a8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1364a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1364ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1364acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1364b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1364b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1364b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1364b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1364b8: 0x8e021b8c  lw          $v0, 0x1B8C($s0)
    ctx->pc = 0x1364b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7052)));
    // 0x1364bc: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1364BCu;
    {
        const bool branch_taken_0x1364bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1364C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1364BCu;
        // 0x1364c0: 0x8e021b90  lw          $v0, 0x1B90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7056)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1364bc) {
            ctx->pc = 0x136578u;
            goto label_136578;
        }
    }
    ctx->pc = 0x1364C4u;
    // 0x1364c4: 0x50400085  beql        $v0, $zero, . + 4 + (0x85 << 2)
    ctx->pc = 0x1364C4u;
    {
        const bool branch_taken_0x1364c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1364c4) {
            ctx->pc = 0x1364C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1364C4u;
            // 0x1364c8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1366DCu;
            goto label_1366dc;
        }
    }
    ctx->pc = 0x1364CCu;
    // 0x1364cc: 0xc079242  jal         func_1E4908
    ctx->pc = 0x1364CCu;
    SET_GPR_U32(ctx, 31, 0x1364D4u);
    ctx->pc = 0x1364D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1364CCu;
    // 0x1364d0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4908u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E4908u, 0x1364CCu, 0x1364D4u)) {
        return;
    }
    ctx->pc = 0x1364D4u;
label_1364d4:
    // 0x1364d4: 0x8e041b94  lw          $a0, 0x1B94($s0)
    ctx->pc = 0x1364d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7060)));
    // 0x1364d8: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1364D8u;
    {
        const bool branch_taken_0x1364d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1364d8) {
            ctx->pc = 0x1364DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1364D8u;
            // 0x1364dc: 0x8e051b98  lw          $a1, 0x1B98($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7064)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1364F0u;
            goto label_1364f0;
        }
    }
    ctx->pc = 0x1364E0u;
    // 0x1364e0: 0xc06325e  jal         func_18C978
    ctx->pc = 0x1364E0u;
    SET_GPR_U32(ctx, 31, 0x1364E8u);
    ctx->pc = 0x18C978u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18C978u, 0x1364E0u, 0x1364E8u)) {
        return;
    }
    ctx->pc = 0x1364E8u;
label_1364e8:
    // 0x1364e8: 0xae021b98  sw          $v0, 0x1B98($s0)
    ctx->pc = 0x1364e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7064), GPR_U32(ctx, 2));
    // 0x1364ec: 0x8e051b98  lw          $a1, 0x1B98($s0)
    ctx->pc = 0x1364ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7064)));
label_1364f0:
    // 0x1364f0: 0x10a0001d  beqz        $a1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1364F0u;
    {
        const bool branch_taken_0x1364f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1364F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1364F0u;
        // 0x1364f4: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1364f0) {
            ctx->pc = 0x136568u;
            goto label_136568;
        }
    }
    ctx->pc = 0x1364F8u;
    // 0x1364f8: 0x8c44870c  lw          $a0, -0x78F4($v0)
    ctx->pc = 0x1364f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936332)));
    // 0x1364fc: 0xc05ee90  jal         func_17BA40
    ctx->pc = 0x1364FCu;
    SET_GPR_U32(ctx, 31, 0x136504u);
    ctx->pc = 0x136500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1364FCu;
    // 0x136500: 0x8c86000c  lw          $a2, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BA40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17BA40u, 0x1364FCu, 0x136504u)) {
        return;
    }
    ctx->pc = 0x136504u;
label_136504:
    // 0x136504: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x136504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x136508: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x136508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x13650c: 0x8c641a70  lw          $a0, 0x1A70($v1)
    ctx->pc = 0x13650cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x701A70u));
    // 0x136510: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x136510u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136514: 0x8c454768  lw          $a1, 0x4768($v0)
    ctx->pc = 0x136514u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B4768u));
    // 0x136518: 0x10a40007  beq         $a1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x136518u;
    {
        const bool branch_taken_0x136518 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x13651Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136518u;
        // 0x13651c: 0x8e061b98  lw          $a2, 0x1B98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136518) {
            ctx->pc = 0x136538u;
            goto label_136538;
        }
    }
    ctx->pc = 0x136520u;
    // 0x136520: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x136520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x136524: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x136524u;
    {
        const bool branch_taken_0x136524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x136528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136524u;
        // 0x136528: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136524) {
            ctx->pc = 0x136538u;
            goto label_136538;
        }
    }
    ctx->pc = 0x13652Cu;
    // 0x13652c: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x13652cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x136530: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x136530u;
    SET_GPR_U32(ctx, 31, 0x136538u);
    ctx->pc = 0x136534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136530u;
    // 0x136534: 0xafa60004  sw          $a2, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x136530u, 0x136538u)) {
        return;
    }
    ctx->pc = 0x136538u;
label_136538:
    // 0x136538: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x136538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x13653c: 0x8e231a70  lw          $v1, 0x1A70($s1)
    ctx->pc = 0x13653cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6768)));
    // 0x136540: 0x8c444778  lw          $a0, 0x4778($v0)
    ctx->pc = 0x136540u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B4778u));
    // 0x136544: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x136544u;
    {
        const bool branch_taken_0x136544 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x136548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136544u;
        // 0x136548: 0x8e051b98  lw          $a1, 0x1B98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136544) {
            ctx->pc = 0x136568u;
            goto label_136568;
        }
    }
    ctx->pc = 0x13654Cu;
    // 0x13654c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x13654cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x136550: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x136550u;
    {
        const bool branch_taken_0x136550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x136554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136550u;
        // 0x136554: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136550) {
            ctx->pc = 0x13656Cu;
            goto label_13656c;
        }
    }
    ctx->pc = 0x136558u;
    // 0x136558: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x136558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x13655c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13655cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136560: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x136560u;
    SET_GPR_U32(ctx, 31, 0x136568u);
    ctx->pc = 0x136564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136560u;
    // 0x136564: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x136560u, 0x136568u)) {
        return;
    }
    ctx->pc = 0x136568u;
label_136568:
    // 0x136568: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x136568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13656c:
    // 0x13656c: 0xae021b8c  sw          $v0, 0x1B8C($s0)
    ctx->pc = 0x13656cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7052), GPR_U32(ctx, 2));
    // 0x136570: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x136570u;
    {
        const bool branch_taken_0x136570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136570u;
        // 0x136574: 0xae021b90  sw          $v0, 0x1B90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 7056), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136570) {
            ctx->pc = 0x136630u;
            goto label_136630;
        }
    }
    ctx->pc = 0x136578u;
label_136578:
    // 0x136578: 0x5440002e  bnel        $v0, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x136578u;
    {
        const bool branch_taken_0x136578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x136578) {
            ctx->pc = 0x13657Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136578u;
            // 0x13657c: 0x8e021b8c  lw          $v0, 0x1B8C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7052)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x136634u;
            goto label_136634;
        }
    }
    ctx->pc = 0x136580u;
    // 0x136580: 0xc079242  jal         func_1E4908
    ctx->pc = 0x136580u;
    SET_GPR_U32(ctx, 31, 0x136588u);
    ctx->pc = 0x136584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136580u;
    // 0x136584: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4908u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E4908u, 0x136580u, 0x136588u)) {
        return;
    }
    ctx->pc = 0x136588u;
label_136588:
    // 0x136588: 0x8e051b98  lw          $a1, 0x1B98($s0)
    ctx->pc = 0x136588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7064)));
    // 0x13658c: 0x10a00020  beqz        $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x13658Cu;
    {
        const bool branch_taken_0x13658c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x136590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13658Cu;
        // 0x136590: 0x3c03006b  lui         $v1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13658c) {
            ctx->pc = 0x136610u;
            goto label_136610;
        }
    }
    ctx->pc = 0x136594u;
    // 0x136594: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x136594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x136598: 0x8c644780  lw          $a0, 0x4780($v1)
    ctx->pc = 0x136598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18304)));
    // 0x13659c: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x13659cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1365a0: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1365A0u;
    {
        const bool branch_taken_0x1365a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1365A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1365A0u;
        // 0x1365a4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1365a0) {
            ctx->pc = 0x1365C4u;
            goto label_1365c4;
        }
    }
    ctx->pc = 0x1365A8u;
    // 0x1365a8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1365a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1365ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1365ACu;
    {
        const bool branch_taken_0x1365ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1365B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1365ACu;
        // 0x1365b0: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1365ac) {
            ctx->pc = 0x1365C8u;
            goto label_1365c8;
        }
    }
    ctx->pc = 0x1365B4u;
    // 0x1365b4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1365b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1365b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1365b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1365bc: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1365BCu;
    SET_GPR_U32(ctx, 31, 0x1365C4u);
    ctx->pc = 0x1365C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1365BCu;
    // 0x1365c0: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1365BCu, 0x1365C4u)) {
        return;
    }
    ctx->pc = 0x1365C4u;
label_1365c4:
    // 0x1365c4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1365c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_1365c8:
    // 0x1365c8: 0x8e231a70  lw          $v1, 0x1A70($s1)
    ctx->pc = 0x1365c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6768)));
    // 0x1365cc: 0x8c444770  lw          $a0, 0x4770($v0)
    ctx->pc = 0x1365ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18288)));
    // 0x1365d0: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1365D0u;
    {
        const bool branch_taken_0x1365d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1365D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1365D0u;
        // 0x1365d4: 0x8e051b98  lw          $a1, 0x1B98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1365d0) {
            ctx->pc = 0x1365F4u;
            goto label_1365f4;
        }
    }
    ctx->pc = 0x1365D8u;
    // 0x1365d8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1365d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1365dc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1365DCu;
    {
        const bool branch_taken_0x1365dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1365E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1365DCu;
        // 0x1365e0: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1365dc) {
            ctx->pc = 0x1365FCu;
            goto label_1365fc;
        }
    }
    ctx->pc = 0x1365E4u;
    // 0x1365e4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1365e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1365e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1365e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1365ec: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1365ECu;
    SET_GPR_U32(ctx, 31, 0x1365F4u);
    ctx->pc = 0x1365F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1365ECu;
    // 0x1365f0: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1365ECu, 0x1365F4u)) {
        return;
    }
    ctx->pc = 0x1365F4u;
label_1365f4:
    // 0x1365f4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1365f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1365f8: 0x8e051b98  lw          $a1, 0x1B98($s0)
    ctx->pc = 0x1365f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7064)));
label_1365fc:
    // 0x1365fc: 0xc05ee9a  jal         func_17BA68
    ctx->pc = 0x1365FCu;
    SET_GPR_U32(ctx, 31, 0x136604u);
    ctx->pc = 0x136600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1365FCu;
    // 0x136600: 0x8c44870c  lw          $a0, -0x78F4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936332)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BA68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17BA68u, 0x1365FCu, 0x136604u)) {
        return;
    }
    ctx->pc = 0x136604u;
label_136604:
    // 0x136604: 0xc0955f8  jal         func_2557E0
    ctx->pc = 0x136604u;
    SET_GPR_U32(ctx, 31, 0x13660Cu);
    ctx->pc = 0x136608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136604u;
    // 0x136608: 0x8e041b98  lw          $a0, 0x1B98($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7064)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2557E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2557E0u, 0x136604u, 0x13660Cu)) {
        return;
    }
    ctx->pc = 0x13660Cu;
label_13660c:
    // 0x13660c: 0xae001b98  sw          $zero, 0x1B98($s0)
    ctx->pc = 0x13660cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7064), GPR_U32(ctx, 0));
label_136610:
    // 0x136610: 0x8e051b94  lw          $a1, 0x1B94($s0)
    ctx->pc = 0x136610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7060)));
    // 0x136614: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x136614u;
    {
        const bool branch_taken_0x136614 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x136618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136614u;
        // 0x136618: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136614) {
            ctx->pc = 0x136628u;
            goto label_136628;
        }
    }
    ctx->pc = 0x13661Cu;
    // 0x13661c: 0xc0640fa  jal         func_1903E8
    ctx->pc = 0x13661Cu;
    SET_GPR_U32(ctx, 31, 0x136624u);
    ctx->pc = 0x136620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13661Cu;
    // 0x136620: 0x8c448b2c  lw          $a0, -0x74D4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1903E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1903E8u, 0x13661Cu, 0x136624u)) {
        return;
    }
    ctx->pc = 0x136624u;
label_136624:
    // 0x136624: 0xae001b94  sw          $zero, 0x1B94($s0)
    ctx->pc = 0x136624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7060), GPR_U32(ctx, 0));
label_136628:
    // 0x136628: 0xae001b90  sw          $zero, 0x1B90($s0)
    ctx->pc = 0x136628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7056), GPR_U32(ctx, 0));
    // 0x13662c: 0xae001b8c  sw          $zero, 0x1B8C($s0)
    ctx->pc = 0x13662cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7052), GPR_U32(ctx, 0));
label_136630:
    // 0x136630: 0x8e021b8c  lw          $v0, 0x1B8C($s0)
    ctx->pc = 0x136630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7052)));
label_136634:
    // 0x136634: 0x50400029  beql        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x136634u;
    {
        const bool branch_taken_0x136634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x136634) {
            ctx->pc = 0x136638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136634u;
            // 0x136638: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1366DCu;
            goto label_1366dc;
        }
    }
    ctx->pc = 0x13663Cu;
    // 0x13663c: 0x8e041b98  lw          $a0, 0x1B98($s0)
    ctx->pc = 0x13663cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7064)));
    // 0x136640: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x136640u;
    {
        const bool branch_taken_0x136640 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x136644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136640u;
        // 0x136644: 0x3c030070  lui         $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136640) {
            ctx->pc = 0x1366ACu;
            goto label_1366ac;
        }
    }
    ctx->pc = 0x136648u;
    // 0x136648: 0x8c910004  lw          $s1, 0x4($a0)
    ctx->pc = 0x136648u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13664c: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x13664Cu;
    {
        const bool branch_taken_0x13664c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x136650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13664Cu;
        // 0x136650: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13664c) {
            ctx->pc = 0x1366ACu;
            goto label_1366ac;
        }
    }
    ctx->pc = 0x136654u;
    // 0x136654: 0x8e0319d4  lw          $v1, 0x19D4($s0)
    ctx->pc = 0x136654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6612)));
    // 0x136658: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x136658u;
    {
        const bool branch_taken_0x136658 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13665Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136658u;
        // 0x13665c: 0x26320010  addiu       $s2, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136658) {
            ctx->pc = 0x136670u;
            goto label_136670;
        }
    }
    ctx->pc = 0x136660u;
    // 0x136660: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x136660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136664: 0xc040688  jal         func_101A20
    ctx->pc = 0x136664u;
    SET_GPR_U32(ctx, 31, 0x13666Cu);
    ctx->pc = 0x136668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136664u;
    // 0x136668: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101A20u, 0x136664u, 0x13666Cu)) {
        return;
    }
    ctx->pc = 0x13666Cu;
label_13666c:
    // 0x13666c: 0xae0219d4  sw          $v0, 0x19D4($s0)
    ctx->pc = 0x13666cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6612), GPR_U32(ctx, 2));
label_136670:
    // 0x136670: 0x8e0219cc  lw          $v0, 0x19CC($s0)
    ctx->pc = 0x136670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6604)));
    // 0x136674: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x136674u;
    {
        const bool branch_taken_0x136674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x136674) {
            ctx->pc = 0x136678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136674u;
            // 0x136678: 0x8e060040  lw          $a2, 0x40($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x136690u;
            goto label_136690;
        }
    }
    ctx->pc = 0x13667Cu;
    // 0x13667c: 0x8e0519d4  lw          $a1, 0x19D4($s0)
    ctx->pc = 0x13667cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6612)));
    // 0x136680: 0xc040698  jal         func_101A60
    ctx->pc = 0x136680u;
    SET_GPR_U32(ctx, 31, 0x136688u);
    ctx->pc = 0x136684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136680u;
    // 0x136684: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101A60u, 0x136680u, 0x136688u)) {
        return;
    }
    ctx->pc = 0x136688u;
label_136688:
    // 0x136688: 0xae0219cc  sw          $v0, 0x19CC($s0)
    ctx->pc = 0x136688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6604), GPR_U32(ctx, 2));
    // 0x13668c: 0x8e060040  lw          $a2, 0x40($s0)
    ctx->pc = 0x13668cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_136690:
    // 0x136690: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x136690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136694: 0x8e0519cc  lw          $a1, 0x19CC($s0)
    ctx->pc = 0x136694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6604)));
    // 0x136698: 0xc092d9c  jal         func_24B670
    ctx->pc = 0x136698u;
    SET_GPR_U32(ctx, 31, 0x1366A0u);
    ctx->pc = 0x13669Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136698u;
    // 0x13669c: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B670u, 0x136698u, 0x1366A0u)) {
        return;
    }
    ctx->pc = 0x1366A0u;
label_1366a0:
    // 0x1366a0: 0xc08992e  jal         func_2264B8
    ctx->pc = 0x1366A0u;
    SET_GPR_U32(ctx, 31, 0x1366A8u);
    ctx->pc = 0x1366A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1366A0u;
    // 0x1366a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x1366A0u, 0x1366A8u)) {
        return;
    }
    ctx->pc = 0x1366A8u;
label_1366a8:
    // 0x1366a8: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1366a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_1366ac:
    // 0x1366ac: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1366acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1366b0: 0x8c641a70  lw          $a0, 0x1A70($v1)
    ctx->pc = 0x1366b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6768)));
    // 0x1366b4: 0x8c454788  lw          $a1, 0x4788($v0)
    ctx->pc = 0x1366b4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B4788u));
    // 0x1366b8: 0x10a40007  beq         $a1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1366B8u;
    {
        const bool branch_taken_0x1366b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x1366BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1366B8u;
        // 0x1366bc: 0x8e031b98  lw          $v1, 0x1B98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1366b8) {
            ctx->pc = 0x1366D8u;
            goto label_1366d8;
        }
    }
    ctx->pc = 0x1366C0u;
    // 0x1366c0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1366c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1366c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1366C4u;
    {
        const bool branch_taken_0x1366c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1366C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1366C4u;
        // 0x1366c8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1366c4) {
            ctx->pc = 0x1366D8u;
            goto label_1366d8;
        }
    }
    ctx->pc = 0x1366CCu;
    // 0x1366cc: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1366ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1366d0: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1366D0u;
    SET_GPR_U32(ctx, 31, 0x1366D8u);
    ctx->pc = 0x1366D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1366D0u;
    // 0x1366d4: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1366D0u, 0x1366D8u)) {
        return;
    }
    ctx->pc = 0x1366D8u;
label_1366d8:
    // 0x1366d8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1366d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1366dc:
    // 0x1366dc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1366dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1366e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1366e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1366e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1366e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1366e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1366E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1366ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1366E8u;
        // 0x1366ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1366E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1366F0u;
}
