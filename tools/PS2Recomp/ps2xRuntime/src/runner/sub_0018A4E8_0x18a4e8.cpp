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

// Function: sub_0018A4E8
// Address: 0x18a4e8 - 0x18a6c8
void sub_0018A4E8_0x18a4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A4E8_0x18a4e8");
#endif

    switch (ctx->pc) {
        case 0x18a544u: goto label_18a544;
        case 0x18a54cu: goto label_18a54c;
        case 0x18a560u: goto label_18a560;
        case 0x18a578u: goto label_18a578;
        case 0x18a588u: goto label_18a588;
        case 0x18a59cu: goto label_18a59c;
        case 0x18a5b0u: goto label_18a5b0;
        case 0x18a5c4u: goto label_18a5c4;
        case 0x18a5dcu: goto label_18a5dc;
        case 0x18a5f4u: goto label_18a5f4;
        case 0x18a608u: goto label_18a608;
        case 0x18a680u: goto label_18a680;
        default: break;
    }

    ctx->pc = 0x18a4e8u;

    // 0x18a4e8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x18a4e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x18a4ec: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x18a4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x18a4f0: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x18a4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x18a4f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18a4f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a4f8: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x18a4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x18a4fc: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x18a4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x18a500: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x18a500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x18a504: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x18a504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x18a508: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x18a508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x18a50c: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x18a50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x18a510: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x18a510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x18a514: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18a514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18a518: 0x82220008  lb          $v0, 0x8($s1)
    ctx->pc = 0x18a518u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x18a51c: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x18A51Cu;
    {
        const bool branch_taken_0x18a51c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A51Cu;
        // 0x18a520: 0x24020026  addiu       $v0, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a51c) {
            ctx->pc = 0x18A698u;
            goto label_18a698;
        }
    }
    ctx->pc = 0x18A524u;
    // 0x18a524: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x18a524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a528: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18a528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a52c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x18a52cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x18a530: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x18a530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x18a534: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x18a534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x18a538: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x18a538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x18a53c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x18A53Cu;
    SET_GPR_U32(ctx, 31, 0x18A544u);
    ctx->pc = 0x18A540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A53Cu;
    // 0x18a540: 0xafa00028  sw          $zero, 0x28($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x18A53Cu, 0x18A544u)) {
        return;
    }
    ctx->pc = 0x18A544u;
label_18a544:
    // 0x18a544: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x18A544u;
    SET_GPR_U32(ctx, 31, 0x18A54Cu);
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x18A544u, 0x18A54Cu)) {
        return;
    }
    ctx->pc = 0x18A54Cu;
label_18a54c:
    // 0x18a54c: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x18a54cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x18a550: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18a550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a554: 0x8c658ad0  lw          $a1, -0x7530($v1)
    ctx->pc = 0x18a554u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x338AD0u));
    // 0x18a558: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x18A558u;
    SET_GPR_U32(ctx, 31, 0x18A560u);
    ctx->pc = 0x18A55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A558u;
    // 0x18a55c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x18A558u, 0x18A560u)) {
        return;
    }
    ctx->pc = 0x18A560u;
label_18a560:
    // 0x18a560: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x18A560u;
    {
        const bool branch_taken_0x18a560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A560u;
        // 0x18a564: 0x26250008  addiu       $a1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a560) {
            ctx->pc = 0x18A698u;
            goto label_18a698;
        }
    }
    ctx->pc = 0x18A568u;
    // 0x18a568: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18a568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a56c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18a56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a570: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x18A570u;
    SET_GPR_U32(ctx, 31, 0x18A578u);
    ctx->pc = 0x18A574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A570u;
    // 0x18a574: 0x26300028  addiu       $s0, $s1, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x18A570u, 0x18A578u)) {
        return;
    }
    ctx->pc = 0x18A578u;
label_18a578:
    // 0x18a578: 0x3c130001  lui         $s3, 0x1
    ctx->pc = 0x18a578u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)1 << 16));
    // 0x18a57c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x18a57cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a580: 0xc07d2ca  jal         func_1F4B28
    ctx->pc = 0x18A580u;
    SET_GPR_U32(ctx, 31, 0x18A588u);
    ctx->pc = 0x18A584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A580u;
    // 0x18a584: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4B28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4B28u, 0x18A580u, 0x18A588u)) {
        return;
    }
    ctx->pc = 0x18A588u;
label_18a588:
    // 0x18a588: 0x8e260028  lw          $a2, 0x28($s1)
    ctx->pc = 0x18a588u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x18a58c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x18a58cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x18a590: 0x24a58e40  addiu       $a1, $a1, -0x71C0
    ctx->pc = 0x18a590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938176));
    // 0x18a594: 0xc07d2f8  jal         func_1F4BE0
    ctx->pc = 0x18A594u;
    SET_GPR_U32(ctx, 31, 0x18A59Cu);
    ctx->pc = 0x18A598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A594u;
    // 0x18a598: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4BE0u, 0x18A594u, 0x18A59Cu)) {
        return;
    }
    ctx->pc = 0x18A59Cu;
label_18a59c:
    // 0x18a59c: 0x8e140004  lw          $s4, 0x4($s0)
    ctx->pc = 0x18a59cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18a5a0: 0x1280003d  beqz        $s4, . + 4 + (0x3D << 2)
    ctx->pc = 0x18A5A0u;
    {
        const bool branch_taken_0x18a5a0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A5A0u;
        // 0x18a5a4: 0x3c1e006a  lui         $fp, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a5a0) {
            ctx->pc = 0x18A698u;
            goto label_18a698;
        }
    }
    ctx->pc = 0x18A5A8u;
    // 0x18a5a8: 0x3c17006a  lui         $s7, 0x6A
    ctx->pc = 0x18a5a8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)106 << 16));
    // 0x18a5ac: 0x0  nop
    ctx->pc = 0x18a5acu;
    // NOP
label_18a5b0:
    // 0x18a5b0: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x18a5b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x18a5b4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18a5b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a5b8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x18a5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a5bc: 0xc07d3f4  jal         func_1F4FD0
    ctx->pc = 0x18A5BCu;
    SET_GPR_U32(ctx, 31, 0x18A5C4u);
    ctx->pc = 0x18A5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A5BCu;
    // 0x18a5c0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4FD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4FD0u, 0x18A5BCu, 0x18A5C4u)) {
        return;
    }
    ctx->pc = 0x18A5C4u;
label_18a5c4:
    // 0x18a5c4: 0x26110024  addiu       $s1, $s0, 0x24
    ctx->pc = 0x18a5c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x18a5c8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x18a5c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a5cc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x18a5ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a5d0: 0x27c58e48  addiu       $a1, $fp, -0x71B8
    ctx->pc = 0x18a5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294938184));
    // 0x18a5d4: 0xc07d320  jal         func_1F4C80
    ctx->pc = 0x18A5D4u;
    SET_GPR_U32(ctx, 31, 0x18A5DCu);
    ctx->pc = 0x18A5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A5D4u;
    // 0x18a5d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4C80u, 0x18A5D4u, 0x18A5DCu)) {
        return;
    }
    ctx->pc = 0x18A5DCu;
label_18a5dc:
    // 0x18a5dc: 0x26750001  addiu       $s5, $s3, 0x1
    ctx->pc = 0x18a5dcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x18a5e0: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x18a5e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x18a5e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18a5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a5e8: 0x26e58e50  addiu       $a1, $s7, -0x71B0
    ctx->pc = 0x18a5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294938192));
    // 0x18a5ec: 0xc07d2f8  jal         func_1F4BE0
    ctx->pc = 0x18A5ECu;
    SET_GPR_U32(ctx, 31, 0x18A5F4u);
    ctx->pc = 0x18A5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A5ECu;
    // 0x18a5f0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4BE0u, 0x18A5ECu, 0x18A5F4u)) {
        return;
    }
    ctx->pc = 0x18A5F4u;
label_18a5f4:
    // 0x18a5f4: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x18a5f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x18a5f8: 0x52000025  beql        $s0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x18A5F8u;
    {
        const bool branch_taken_0x18a5f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a5f8) {
            ctx->pc = 0x18A5FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A5F8u;
            // 0x18a5fc: 0x8e940004  lw          $s4, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A690u;
            goto label_18a690;
        }
    }
    ctx->pc = 0x18A600u;
    // 0x18a600: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x18a600u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18a604: 0x0  nop
    ctx->pc = 0x18a604u;
    // NOP
label_18a608:
    // 0x18a608: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18a608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a60c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18a60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a610: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18a610u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a614: 0x69020007  ldl         $v0, 0x7($t0)
    ctx->pc = 0x18a614u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x18a618: 0x6d020000  ldr         $v0, 0x0($t0)
    ctx->pc = 0x18a618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x18a61c: 0x6903000f  ldl         $v1, 0xF($t0)
    ctx->pc = 0x18a61cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x18a620: 0x6d030008  ldr         $v1, 0x8($t0)
    ctx->pc = 0x18a620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x18a624: 0x69070017  ldl         $a3, 0x17($t0)
    ctx->pc = 0x18a624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x18a628: 0x6d070010  ldr         $a3, 0x10($t0)
    ctx->pc = 0x18a628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x18a62c: 0x6909001f  ldl         $t1, 0x1F($t0)
    ctx->pc = 0x18a62cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x18a630: 0x6d090018  ldr         $t1, 0x18($t0)
    ctx->pc = 0x18a630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x18a634: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x18a634u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18a638: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x18a638u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18a63c: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x18a63cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18a640: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x18a640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18a644: 0xb3a70017  sdl         $a3, 0x17($sp)
    ctx->pc = 0x18a644u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18a648: 0xb7a70010  sdr         $a3, 0x10($sp)
    ctx->pc = 0x18a648u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18a64c: 0xb3a9001f  sdl         $t1, 0x1F($sp)
    ctx->pc = 0x18a64cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18a650: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18a650u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x18a654: 0xb7a90018  sdr         $t1, 0x18($sp)
    ctx->pc = 0x18a654u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18a658: 0x8d020024  lw          $v0, 0x24($t0)
    ctx->pc = 0x18a658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x18a65c: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x18a65cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x18a660: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x18a660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x18a664: 0x8d030028  lw          $v1, 0x28($t0)
    ctx->pc = 0x18a664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 40)));
    // 0x18a668: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x18a668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x18a66c: 0xc500002c  lwc1        $f0, 0x2C($t0)
    ctx->pc = 0x18a66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a670: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x18a670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x18a674: 0x8d020030  lw          $v0, 0x30($t0)
    ctx->pc = 0x18a674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x18a678: 0xc07d33e  jal         func_1F4CF8
    ctx->pc = 0x18A678u;
    SET_GPR_U32(ctx, 31, 0x18A680u);
    ctx->pc = 0x18A67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A678u;
    // 0x18a67c: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4CF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4CF8u, 0x18A678u, 0x18A680u)) {
        return;
    }
    ctx->pc = 0x18A680u;
label_18a680:
    // 0x18a680: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x18a680u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18a684: 0x5600ffe0  bnel        $s0, $zero, . + 4 + (-0x20 << 2)
    ctx->pc = 0x18A684u;
    {
        const bool branch_taken_0x18a684 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a684) {
            ctx->pc = 0x18A688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A684u;
            // 0x18a688: 0x8e080000  lw          $t0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18a608;
        }
    }
    ctx->pc = 0x18A68Cu;
    // 0x18a68c: 0x8e940004  lw          $s4, 0x4($s4)
    ctx->pc = 0x18a68cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_18a690:
    // 0x18a690: 0x1680ffc7  bnez        $s4, . + 4 + (-0x39 << 2)
    ctx->pc = 0x18A690u;
    {
        const bool branch_taken_0x18a690 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A690u;
        // 0x18a694: 0x2a0982d  daddu       $s3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a690) {
            ctx->pc = 0x18A5B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18a5b0;
        }
    }
    ctx->pc = 0x18A698u;
label_18a698:
    // 0x18a698: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x18a698u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x18a69c: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x18a69cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18a6a0: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x18a6a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x18a6a4: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x18a6a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18a6a8: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x18a6a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18a6ac: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x18a6acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18a6b0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x18a6b0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18a6b4: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x18a6b4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18a6b8: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x18a6b8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18a6bc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18a6bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18a6c0: 0x3e00008  jr          $ra
    ctx->pc = 0x18A6C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A6C0u;
        // 0x18a6c4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A6C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A6C8u;
}
