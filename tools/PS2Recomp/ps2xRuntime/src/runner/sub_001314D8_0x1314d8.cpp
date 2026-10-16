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

// Function: sub_001314D8
// Address: 0x1314d8 - 0x131680
void sub_001314D8_0x1314d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001314D8_0x1314d8");
#endif

    switch (ctx->pc) {
        case 0x13150cu: goto label_13150c;
        case 0x131550u: goto label_131550;
        case 0x13155cu: goto label_13155c;
        case 0x131578u: goto label_131578;
        case 0x1315b0u: goto label_1315b0;
        case 0x1315e0u: goto label_1315e0;
        case 0x1315fcu: goto label_1315fc;
        case 0x131630u: goto label_131630;
        case 0x131660u: goto label_131660;
        case 0x131668u: goto label_131668;
        default: break;
    }

    ctx->pc = 0x1314d8u;

    // 0x1314d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1314d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1314dc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1314dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1314e0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1314e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1314e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1314e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1314e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1314e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1314ec: 0x261116c0  addiu       $s1, $s0, 0x16C0
    ctx->pc = 0x1314ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 5824));
    // 0x1314f0: 0xae001b5c  sw          $zero, 0x1B5C($s0)
    ctx->pc = 0x1314f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7004), GPR_U32(ctx, 0));
    // 0x1314f4: 0x8e031a54  lw          $v1, 0x1A54($s0)
    ctx->pc = 0x1314f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6740)));
    // 0x1314f8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1314f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1314fc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1314FCu;
    {
        const bool branch_taken_0x1314fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x131500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1314FCu;
        // 0x131500: 0xae0214c0  sw          $v0, 0x14C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1314fc) {
            ctx->pc = 0x13150Cu;
            goto label_13150c;
        }
    }
    ctx->pc = 0x131504u;
    // 0x131504: 0xc048ede  jal         func_123B78
    ctx->pc = 0x131504u;
    SET_GPR_U32(ctx, 31, 0x13150Cu);
    ctx->pc = 0x123B78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x123B78u, 0x131504u, 0x13150Cu)) {
        return;
    }
    ctx->pc = 0x13150Cu;
label_13150c:
    // 0x13150c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x13150cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x131510: 0x8c438b2c  lw          $v1, -0x74D4($v0)
    ctx->pc = 0x131510u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x338B2Cu));
    // 0x131514: 0x8c64006c  lw          $a0, 0x6C($v1)
    ctx->pc = 0x131514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x131518: 0x10800033  beqz        $a0, . + 4 + (0x33 << 2)
    ctx->pc = 0x131518u;
    {
        const bool branch_taken_0x131518 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131518u;
        // 0x13151c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131518) {
            ctx->pc = 0x1315E8u;
            goto label_1315e8;
        }
    }
    ctx->pc = 0x131520u;
    // 0x131520: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x131520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x131524: 0x54620031  bnel        $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x131524u;
    {
        const bool branch_taken_0x131524 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x131524) {
            ctx->pc = 0x131528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131524u;
            // 0x131528: 0x8e051b9c  lw          $a1, 0x1B9C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7068)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1315ECu;
            goto label_1315ec;
        }
    }
    ctx->pc = 0x13152Cu;
    // 0x13152c: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x13152cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x131530: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x131530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x131534: 0x5462002d  bnel        $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x131534u;
    {
        const bool branch_taken_0x131534 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x131534) {
            ctx->pc = 0x131538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131534u;
            // 0x131538: 0x8e051b9c  lw          $a1, 0x1B9C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7068)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1315ECu;
            goto label_1315ec;
        }
    }
    ctx->pc = 0x13153Cu;
    // 0x13153c: 0x8e021b9c  lw          $v0, 0x1B9C($s0)
    ctx->pc = 0x13153cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7068)));
    // 0x131540: 0x5440004b  bnel        $v0, $zero, . + 4 + (0x4B << 2)
    ctx->pc = 0x131540u;
    {
        const bool branch_taken_0x131540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x131540) {
            ctx->pc = 0x131544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131540u;
            // 0x131544: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131670u;
            goto label_131670;
        }
    }
    ctx->pc = 0x131548u;
    // 0x131548: 0xc095596  jal         func_255658
    ctx->pc = 0x131548u;
    SET_GPR_U32(ctx, 31, 0x131550u);
    ctx->pc = 0x13154Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131548u;
    // 0x13154c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255658u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255658u, 0x131548u, 0x131550u)) {
        return;
    }
    ctx->pc = 0x131550u;
label_131550:
    // 0x131550: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x131550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131554: 0xc0979f6  jal         func_25E7D8
    ctx->pc = 0x131554u;
    SET_GPR_U32(ctx, 31, 0x13155Cu);
    ctx->pc = 0x131558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131554u;
    // 0x131558: 0xae021b9c  sw          $v0, 0x1B9C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 7068), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E7D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E7D8u, 0x131554u, 0x13155Cu)) {
        return;
    }
    ctx->pc = 0x13155Cu;
label_13155c:
    // 0x13155c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13155Cu;
    {
        const bool branch_taken_0x13155c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x131560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13155Cu;
        // 0x131560: 0x3c03006b  lui         $v1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13155c) {
            ctx->pc = 0x13157Cu;
            goto label_13157c;
        }
    }
    ctx->pc = 0x131564u;
    // 0x131564: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x131564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x131568: 0x8e051b9c  lw          $a1, 0x1B9C($s0)
    ctx->pc = 0x131568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7068)));
    // 0x13156c: 0x8c44870c  lw          $a0, -0x78F4($v0)
    ctx->pc = 0x13156cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x33870Cu));
    // 0x131570: 0xc05ee90  jal         func_17BA40
    ctx->pc = 0x131570u;
    SET_GPR_U32(ctx, 31, 0x131578u);
    ctx->pc = 0x131574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131570u;
    // 0x131574: 0x8c86000c  lw          $a2, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BA40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17BA40u, 0x131570u, 0x131578u)) {
        return;
    }
    ctx->pc = 0x131578u;
label_131578:
    // 0x131578: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x131578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_13157c:
    // 0x13157c: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x13157cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x131580: 0x8c644768  lw          $a0, 0x4768($v1)
    ctx->pc = 0x131580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18280)));
    // 0x131584: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x131584u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131588: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x131588u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x13158c: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x13158Cu;
    {
        const bool branch_taken_0x13158c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x131590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13158Cu;
        // 0x131590: 0x8e051b9c  lw          $a1, 0x1B9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7068)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13158c) {
            ctx->pc = 0x1315B0u;
            goto label_1315b0;
        }
    }
    ctx->pc = 0x131594u;
    // 0x131594: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x131594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x131598: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x131598u;
    {
        const bool branch_taken_0x131598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13159Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131598u;
        // 0x13159c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131598) {
            ctx->pc = 0x1315B4u;
            goto label_1315b4;
        }
    }
    ctx->pc = 0x1315A0u;
    // 0x1315a0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1315a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1315a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1315a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1315a8: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1315A8u;
    SET_GPR_U32(ctx, 31, 0x1315B0u);
    ctx->pc = 0x1315ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1315A8u;
    // 0x1315ac: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1315A8u, 0x1315B0u)) {
        return;
    }
    ctx->pc = 0x1315B0u;
label_1315b0:
    // 0x1315b0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1315b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_1315b4:
    // 0x1315b4: 0x8e231a70  lw          $v1, 0x1A70($s1)
    ctx->pc = 0x1315b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6768)));
    // 0x1315b8: 0x8c444778  lw          $a0, 0x4778($v0)
    ctx->pc = 0x1315b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18296)));
    // 0x1315bc: 0x1083002b  beq         $a0, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x1315BCu;
    {
        const bool branch_taken_0x1315bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1315C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1315BCu;
        // 0x1315c0: 0x8e051b9c  lw          $a1, 0x1B9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7068)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1315bc) {
            ctx->pc = 0x13166Cu;
            goto label_13166c;
        }
    }
    ctx->pc = 0x1315C4u;
    // 0x1315c4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1315c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1315c8: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1315C8u;
    {
        const bool branch_taken_0x1315c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1315CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1315C8u;
        // 0x1315cc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1315c8) {
            ctx->pc = 0x131670u;
            goto label_131670;
        }
    }
    ctx->pc = 0x1315D0u;
    // 0x1315d0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1315d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1315d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1315d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1315d8: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1315D8u;
    SET_GPR_U32(ctx, 31, 0x1315E0u);
    ctx->pc = 0x1315DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1315D8u;
    // 0x1315dc: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1315D8u, 0x1315E0u)) {
        return;
    }
    ctx->pc = 0x1315E0u;
label_1315e0:
    // 0x1315e0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1315E0u;
    {
        const bool branch_taken_0x1315e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1315E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1315E0u;
        // 0x1315e4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1315e0) {
            ctx->pc = 0x131670u;
            goto label_131670;
        }
    }
    ctx->pc = 0x1315E8u;
label_1315e8:
    // 0x1315e8: 0x8e051b9c  lw          $a1, 0x1B9C($s0)
    ctx->pc = 0x1315e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7068)));
label_1315ec:
    // 0x1315ec: 0x10a0001f  beqz        $a1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1315ECu;
    {
        const bool branch_taken_0x1315ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1315F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1315ECu;
        // 0x1315f0: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1315ec) {
            ctx->pc = 0x13166Cu;
            goto label_13166c;
        }
    }
    ctx->pc = 0x1315F4u;
    // 0x1315f4: 0xc05ee9a  jal         func_17BA68
    ctx->pc = 0x1315F4u;
    SET_GPR_U32(ctx, 31, 0x1315FCu);
    ctx->pc = 0x1315F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1315F4u;
    // 0x1315f8: 0x8c44870c  lw          $a0, -0x78F4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936332)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BA68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17BA68u, 0x1315F4u, 0x1315FCu)) {
        return;
    }
    ctx->pc = 0x1315FCu;
label_1315fc:
    // 0x1315fc: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1315fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x131600: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x131600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x131604: 0x8c641a70  lw          $a0, 0x1A70($v1)
    ctx->pc = 0x131604u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x701A70u));
    // 0x131608: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x131608u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13160c: 0x8c454780  lw          $a1, 0x4780($v0)
    ctx->pc = 0x13160cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B4780u));
    // 0x131610: 0x10a40007  beq         $a1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x131610u;
    {
        const bool branch_taken_0x131610 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x131614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131610u;
        // 0x131614: 0x8e061b9c  lw          $a2, 0x1B9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7068)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131610) {
            ctx->pc = 0x131630u;
            goto label_131630;
        }
    }
    ctx->pc = 0x131618u;
    // 0x131618: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x131618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13161c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13161Cu;
    {
        const bool branch_taken_0x13161c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x131620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13161Cu;
        // 0x131620: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13161c) {
            ctx->pc = 0x131630u;
            goto label_131630;
        }
    }
    ctx->pc = 0x131624u;
    // 0x131624: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x131624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x131628: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x131628u;
    SET_GPR_U32(ctx, 31, 0x131630u);
    ctx->pc = 0x13162Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131628u;
    // 0x13162c: 0xafa60004  sw          $a2, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x131628u, 0x131630u)) {
        return;
    }
    ctx->pc = 0x131630u;
label_131630:
    // 0x131630: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x131630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x131634: 0x8e231a70  lw          $v1, 0x1A70($s1)
    ctx->pc = 0x131634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6768)));
    // 0x131638: 0x8c444770  lw          $a0, 0x4770($v0)
    ctx->pc = 0x131638u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B4770u));
    // 0x13163c: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x13163Cu;
    {
        const bool branch_taken_0x13163c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x131640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13163Cu;
        // 0x131640: 0x8e051b9c  lw          $a1, 0x1B9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7068)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13163c) {
            ctx->pc = 0x131660u;
            goto label_131660;
        }
    }
    ctx->pc = 0x131644u;
    // 0x131644: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x131644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x131648: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x131648u;
    {
        const bool branch_taken_0x131648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x131648) {
            ctx->pc = 0x131660u;
            goto label_131660;
        }
    }
    ctx->pc = 0x131650u;
    // 0x131650: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x131650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x131654: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x131654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131658: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x131658u;
    SET_GPR_U32(ctx, 31, 0x131660u);
    ctx->pc = 0x13165Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131658u;
    // 0x13165c: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x131658u, 0x131660u)) {
        return;
    }
    ctx->pc = 0x131660u;
label_131660:
    // 0x131660: 0xc0955f8  jal         func_2557E0
    ctx->pc = 0x131660u;
    SET_GPR_U32(ctx, 31, 0x131668u);
    ctx->pc = 0x131664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131660u;
    // 0x131664: 0x8e041b9c  lw          $a0, 0x1B9C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7068)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2557E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2557E0u, 0x131660u, 0x131668u)) {
        return;
    }
    ctx->pc = 0x131668u;
label_131668:
    // 0x131668: 0xae001b9c  sw          $zero, 0x1B9C($s0)
    ctx->pc = 0x131668u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7068), GPR_U32(ctx, 0));
label_13166c:
    // 0x13166c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x13166cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_131670:
    // 0x131670: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x131670u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x131674: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x131674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131678: 0x3e00008  jr          $ra
    ctx->pc = 0x131678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13167Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131678u;
        // 0x13167c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131680u;
}
