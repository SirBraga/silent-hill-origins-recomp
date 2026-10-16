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

// Function: sub_002BEFB0
// Address: 0x2befb0 - 0x2bfbd8
void sub_002BEFB0_0x2befb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BEFB0_0x2befb0");
#endif

    switch (ctx->pc) {
        case 0x2bf010u: goto label_2bf010;
        case 0x2bf148u: goto label_2bf148;
        case 0x2bf178u: goto label_2bf178;
        case 0x2bf260u: goto label_2bf260;
        case 0x2bf290u: goto label_2bf290;
        case 0x2bf340u: goto label_2bf340;
        case 0x2bf370u: goto label_2bf370;
        case 0x2bf4e0u: goto label_2bf4e0;
        case 0x2bf510u: goto label_2bf510;
        case 0x2bf568u: goto label_2bf568;
        case 0x2bf598u: goto label_2bf598;
        case 0x2bf5c4u: goto label_2bf5c4;
        case 0x2bf5f0u: goto label_2bf5f0;
        case 0x2bf738u: goto label_2bf738;
        case 0x2bf768u: goto label_2bf768;
        case 0x2bf848u: goto label_2bf848;
        case 0x2bf878u: goto label_2bf878;
        case 0x2bf920u: goto label_2bf920;
        case 0x2bf950u: goto label_2bf950;
        case 0x2bfab0u: goto label_2bfab0;
        case 0x2bfae0u: goto label_2bfae0;
        case 0x2bfb38u: goto label_2bfb38;
        case 0x2bfb68u: goto label_2bfb68;
        case 0x2bfb94u: goto label_2bfb94;
        default: break;
    }

    ctx->pc = 0x2befb0u;

    // 0x2befb0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2befb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2befb4: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x2befb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x2befb8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2befb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x2befbc: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x2befbcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2befc0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2befc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x2befc4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2befc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2befc8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2befc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x2befcc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2befccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2befd0: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x2befd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x2befd4: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x2befd4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2befd8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2befd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x2befdc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2befdcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2befe0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2befe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x2befe4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2befe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2befe8: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x2befe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x2befec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2befecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2beff0: 0xafab0000  sw          $t3, 0x0($sp)
    ctx->pc = 0x2beff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 11));
    // 0x2beff4: 0x12800177  beqz        $s4, . + 4 + (0x177 << 2)
    ctx->pc = 0x2BEFF4u;
    {
        const bool branch_taken_0x2beff4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEFF4u;
        // 0x2beff8: 0x8fbe00b0  lw          $fp, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2beff4) {
            ctx->pc = 0x2BF5D4u;
            goto label_2bf5d4;
        }
    }
    ctx->pc = 0x2BEFFCu;
    // 0x2beffc: 0x3416ffff  ori         $s6, $zero, 0xFFFF
    ctx->pc = 0x2beffcu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2bf000: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2bf000u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bf004: 0x24150028  addiu       $s5, $zero, 0x28
    ctx->pc = 0x2bf004u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2bf008: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x2bf008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2bf00c: 0x0  nop
    ctx->pc = 0x2bf00cu;
    // NOP
label_2bf010:
    // 0x2bf010: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x2bf010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x2bf014: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x2bf014u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bf018: 0x95030054  lhu         $v1, 0x54($t0)
    ctx->pc = 0x2bf018u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 84)));
    // 0x2bf01c: 0x1076000e  beq         $v1, $s6, . + 4 + (0xE << 2)
    ctx->pc = 0x2BF01Cu;
    {
        const bool branch_taken_0x2bf01c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 22));
        ctx->pc = 0x2BF020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF01Cu;
        // 0x2bf020: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf01c) {
            ctx->pc = 0x2BF058u;
            goto label_2bf058;
        }
    }
    ctx->pc = 0x2BF024u;
    // 0x2bf024: 0x8d020050  lw          $v0, 0x50($t0)
    ctx->pc = 0x2bf024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 80)));
    // 0x2bf028: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x2bf028u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf02c: 0x94440020  lhu         $a0, 0x20($v0)
    ctx->pc = 0x2bf02cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2bf030: 0x8c450024  lw          $a1, 0x24($v0)
    ctx->pc = 0x2bf030u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2bf034: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x2bf034u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x2bf038: 0x8ca60060  lw          $a2, 0x60($a1)
    ctx->pc = 0x2bf038u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x2bf03c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2bf03cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2bf040: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x2bf040u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2bf044: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2bf044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2bf048: 0x922004  sllv        $a0, $s2, $a0
    ctx->pc = 0x2bf048u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 4) & 0x1F));
    // 0x2bf04c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2bf04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bf050: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2bf050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2bf054: 0x2500a  movz        $t2, $zero, $v0
    ctx->pc = 0x2bf054u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0));
label_2bf058:
    // 0x2bf058: 0x9502005c  lhu         $v0, 0x5C($t0)
    ctx->pc = 0x2bf058u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 92)));
    // 0x2bf05c: 0x1056000e  beq         $v0, $s6, . + 4 + (0xE << 2)
    ctx->pc = 0x2BF05Cu;
    {
        const bool branch_taken_0x2bf05c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x2BF060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF05Cu;
        // 0x2bf060: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf05c) {
            ctx->pc = 0x2BF098u;
            goto label_2bf098;
        }
    }
    ctx->pc = 0x2BF064u;
    // 0x2bf064: 0x8d020058  lw          $v0, 0x58($t0)
    ctx->pc = 0x2bf064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 88)));
    // 0x2bf068: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2bf068u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf06c: 0x94440020  lhu         $a0, 0x20($v0)
    ctx->pc = 0x2bf06cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2bf070: 0x8c450024  lw          $a1, 0x24($v0)
    ctx->pc = 0x2bf070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2bf074: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x2bf074u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x2bf078: 0x8ca60060  lw          $a2, 0x60($a1)
    ctx->pc = 0x2bf078u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x2bf07c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2bf07cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2bf080: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x2bf080u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2bf084: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2bf084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2bf088: 0x922004  sllv        $a0, $s2, $a0
    ctx->pc = 0x2bf088u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 4) & 0x1F));
    // 0x2bf08c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2bf08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bf090: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2bf090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2bf094: 0x2380a  movz        $a3, $zero, $v0
    ctx->pc = 0x2bf094u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0));
label_2bf098:
    // 0x2bf098: 0x5147004e  beql        $t2, $a3, . + 4 + (0x4E << 2)
    ctx->pc = 0x2BF098u;
    {
        const bool branch_taken_0x2bf098 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 7));
        if (branch_taken_0x2bf098) {
            ctx->pc = 0x2BF09Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF098u;
            // 0x2bf09c: 0x8d040050  lw          $a0, 0x50($t0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF1D4u;
            goto label_2bf1d4;
        }
    }
    ctx->pc = 0x2BF0A0u;
    // 0x2bf0a0: 0x51400002  beql        $t2, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BF0A0u;
    {
        const bool branch_taken_0x2bf0a0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf0a0) {
            ctx->pc = 0x2BF0A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF0A0u;
            // 0x2bf0a4: 0x8d030058  lw          $v1, 0x58($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF0ACu;
            goto label_2bf0ac;
        }
    }
    ctx->pc = 0x2BF0A8u;
    // 0x2bf0a8: 0x8d030050  lw          $v1, 0x50($t0)
    ctx->pc = 0x2bf0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 80)));
label_2bf0ac:
    // 0x2bf0ac: 0x94620020  lhu         $v0, 0x20($v1)
    ctx->pc = 0x2bf0acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2bf0b0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2bf0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2bf0b4: 0x2622821  addu        $a1, $s3, $v0
    ctx->pc = 0x2bf0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2bf0b8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2bf0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bf0bc: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2BF0BCu;
    {
        const bool branch_taken_0x2bf0bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF0BCu;
        // 0x2bf0c0: 0x25060008  addiu       $a2, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf0bc) {
            ctx->pc = 0x2BF120u;
            goto label_2bf120;
        }
    }
    ctx->pc = 0x2BF0C4u;
    // 0x2bf0c4: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x2bf0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x2bf0c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2bf0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bf0cc: 0x25300001  addiu       $s0, $t1, 0x1
    ctx->pc = 0x2bf0ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2bf0d0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2bf0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2bf0d4: 0x551818  mult        $v1, $v0, $s5
    ctx->pc = 0x2bf0d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2bf0d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2bf0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2bf0dc: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2bf0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2bf0e0: 0xaca50000  sw          $a1, 0x0($a1)
    ctx->pc = 0x2bf0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 5));
    // 0x2bf0e4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2bf0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2bf0e8: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x2bf0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x2bf0ec: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x2bf0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2bf0f0: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x2bf0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x2bf0f4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2bf0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2bf0f8: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2bf0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x2bf0fc: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x2bf0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    // 0x2bf100: 0x10c00130  beqz        $a2, . + 4 + (0x130 << 2)
    ctx->pc = 0x2BF100u;
    {
        const bool branch_taken_0x2bf100 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF100u;
        // 0x2bf104: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf100) {
            ctx->pc = 0x2BF5C4u;
            goto label_2bf5c4;
        }
    }
    ctx->pc = 0x2BF108u;
    // 0x2bf108: 0xad000008  sw          $zero, 0x8($t0)
    ctx->pc = 0x2bf108u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
    // 0x2bf10c: 0xac460014  sw          $a2, 0x14($v0)
    ctx->pc = 0x2bf10cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 6));
    // 0x2bf110: 0xac440010  sw          $a0, 0x10($v0)
    ctx->pc = 0x2bf110u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
    // 0x2bf114: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x2bf114u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x2bf118: 0x1000012a  b           . + 4 + (0x12A << 2)
    ctx->pc = 0x2BF118u;
    {
        const bool branch_taken_0x2bf118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF118u;
        // 0x2bf11c: 0xac460018  sw          $a2, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf118) {
            ctx->pc = 0x2BF5C4u;
            goto label_2bf5c4;
        }
    }
    ctx->pc = 0x2BF120u;
label_2bf120:
    // 0x2bf120: 0x14450004  bne         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BF120u;
    {
        const bool branch_taken_0x2bf120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2BF124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF120u;
        // 0x2bf124: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf120) {
            ctx->pc = 0x2BF134u;
            goto label_2bf134;
        }
    }
    ctx->pc = 0x2BF128u;
    // 0x2bf128: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2bf128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2bf12c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2BF12Cu;
    {
        const bool branch_taken_0x2bf12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF12Cu;
        // 0x2bf130: 0x25300001  addiu       $s0, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf12c) {
            ctx->pc = 0x2BF198u;
            goto label_2bf198;
        }
    }
    ctx->pc = 0x2BF134u;
label_2bf134:
    // 0x2bf134: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2bf134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bf138: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2BF138u;
    {
        const bool branch_taken_0x2bf138 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BF13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF138u;
        // 0x2bf13c: 0x25300001  addiu       $s0, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf138) {
            ctx->pc = 0x2BF164u;
            goto label_2bf164;
        }
    }
    ctx->pc = 0x2BF140u;
    // 0x2bf140: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2bf140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bf144: 0x0  nop
    ctx->pc = 0x2bf144u;
    // NOP
label_2bf148:
    // 0x2bf148: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2bf148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bf14c: 0x0  nop
    ctx->pc = 0x2bf14cu;
    // NOP
    // 0x2bf150: 0x0  nop
    ctx->pc = 0x2bf150u;
    // NOP
    // 0x2bf154: 0x0  nop
    ctx->pc = 0x2bf154u;
    // NOP
    // 0x2bf158: 0x0  nop
    ctx->pc = 0x2bf158u;
    // NOP
    // 0x2bf15c: 0x5482fffa  bnel        $a0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2BF15Cu;
    {
        const bool branch_taken_0x2bf15c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bf15c) {
            ctx->pc = 0x2BF160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF15Cu;
            // 0x2bf160: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bf148;
        }
    }
    ctx->pc = 0x2BF164u;
label_2bf164:
    // 0x2bf164: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2bf164u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf168: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2bf168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bf16c: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2BF16Cu;
    {
        const bool branch_taken_0x2bf16c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bf16c) {
            ctx->pc = 0x2BF170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF16Cu;
            // 0x2bf170: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF198u;
            goto label_2bf198;
        }
    }
    ctx->pc = 0x2BF174u;
    // 0x2bf174: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2bf174u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_2bf178:
    // 0x2bf178: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2bf178u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf17c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2bf17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bf180: 0x0  nop
    ctx->pc = 0x2bf180u;
    // NOP
    // 0x2bf184: 0x0  nop
    ctx->pc = 0x2bf184u;
    // NOP
    // 0x2bf188: 0x0  nop
    ctx->pc = 0x2bf188u;
    // NOP
    // 0x2bf18c: 0x5462fffa  bnel        $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2BF18Cu;
    {
        const bool branch_taken_0x2bf18c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bf18c) {
            ctx->pc = 0x2BF190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF18Cu;
            // 0x2bf190: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bf178;
        }
    }
    ctx->pc = 0x2BF194u;
    // 0x2bf194: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2bf194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2bf198:
    // 0x2bf198: 0x10c0010b  beqz        $a2, . + 4 + (0x10B << 2)
    ctx->pc = 0x2BF198u;
    {
        const bool branch_taken_0x2bf198 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF198u;
        // 0x2bf19c: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf198) {
            ctx->pc = 0x2BF5C8u;
            goto label_2bf5c8;
        }
    }
    ctx->pc = 0x2BF1A0u;
    // 0x2bf1a0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2bf1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2bf1a4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BF1A4u;
    {
        const bool branch_taken_0x2bf1a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF1A4u;
        // 0x2bf1a8: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf1a4) {
            ctx->pc = 0x2BF1BCu;
            goto label_2bf1bc;
        }
    }
    ctx->pc = 0x2BF1ACu;
    // 0x2bf1ac: 0xac860014  sw          $a2, 0x14($a0)
    ctx->pc = 0x2bf1acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 6));
    // 0x2bf1b0: 0xac920010  sw          $s2, 0x10($a0)
    ctx->pc = 0x2bf1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 18));
    // 0x2bf1b4: 0x10000104  b           . + 4 + (0x104 << 2)
    ctx->pc = 0x2BF1B4u;
    {
        const bool branch_taken_0x2bf1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF1B4u;
        // 0x2bf1b8: 0xac860018  sw          $a2, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf1b4) {
            ctx->pc = 0x2BF5C8u;
            goto label_2bf5c8;
        }
    }
    ctx->pc = 0x2BF1BCu;
label_2bf1bc:
    // 0x2bf1bc: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x2bf1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2bf1c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2bf1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2bf1c4: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x2bf1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x2bf1c8: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x2bf1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x2bf1cc: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x2BF1CCu;
    {
        const bool branch_taken_0x2bf1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF1CCu;
        // 0x2bf1d0: 0xac860018  sw          $a2, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf1cc) {
            ctx->pc = 0x2BF5C4u;
            goto label_2bf5c4;
        }
    }
    ctx->pc = 0x2BF1D4u;
label_2bf1d4:
    // 0x2bf1d4: 0x25070008  addiu       $a3, $t0, 0x8
    ctx->pc = 0x2bf1d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2bf1d8: 0x8d050058  lw          $a1, 0x58($t0)
    ctx->pc = 0x2bf1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 88)));
    // 0x2bf1dc: 0x94820020  lhu         $v0, 0x20($a0)
    ctx->pc = 0x2bf1dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2bf1e0: 0x94a30020  lhu         $v1, 0x20($a1)
    ctx->pc = 0x2bf1e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2bf1e4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2bf1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2bf1e8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2bf1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2bf1ec: 0x2624021  addu        $t0, $s3, $v0
    ctx->pc = 0x2bf1ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2bf1f0: 0x2633021  addu        $a2, $s3, $v1
    ctx->pc = 0x2bf1f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2bf1f4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2bf1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2bf1f8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2bf1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2bf1fc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2bf1fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2bf200: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BF200u;
    {
        const bool branch_taken_0x2bf200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF200u;
        // 0x2bf204: 0x2c630001  sltiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf200) {
            ctx->pc = 0x2BF20Cu;
            goto label_2bf20c;
        }
    }
    ctx->pc = 0x2BF208u;
    // 0x2bf208: 0xad04000c  sw          $a0, 0xC($t0)
    ctx->pc = 0x2bf208u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 4));
label_2bf20c:
    // 0x2bf20c: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2BF20Cu;
    {
        const bool branch_taken_0x2bf20c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bf20c) {
            ctx->pc = 0x2BF210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF20Cu;
            // 0x2bf210: 0xacc5000c  sw          $a1, 0xC($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF214u;
            goto label_2bf214;
        }
    }
    ctx->pc = 0x2BF214u;
label_2bf214:
    // 0x2bf214: 0x1043007b  beq         $v0, $v1, . + 4 + (0x7B << 2)
    ctx->pc = 0x2BF214u;
    {
        const bool branch_taken_0x2bf214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2bf214) {
            ctx->pc = 0x2BF404u;
            goto label_2bf404;
        }
    }
    ctx->pc = 0x2BF21Cu;
    // 0x2bf21c: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x2BF21Cu;
    {
        const bool branch_taken_0x2bf21c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf21c) {
            ctx->pc = 0x2BF220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF21Cu;
            // 0x2bf220: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF304u;
            goto label_2bf304;
        }
    }
    ctx->pc = 0x2BF224u;
    // 0x2bf224: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2bf224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2bf228: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BF228u;
    {
        const bool branch_taken_0x2bf228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF228u;
        // 0x2bf22c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf228) {
            ctx->pc = 0x2BF23Cu;
            goto label_2bf23c;
        }
    }
    ctx->pc = 0x2BF230u;
    // 0x2bf230: 0x25300001  addiu       $s0, $t1, 0x1
    ctx->pc = 0x2bf230u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2bf234: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2BF234u;
    {
        const bool branch_taken_0x2bf234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF234u;
        // 0x2bf238: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf234) {
            ctx->pc = 0x2BF2B0u;
            goto label_2bf2b0;
        }
    }
    ctx->pc = 0x2BF23Cu;
label_2bf23c:
    // 0x2bf23c: 0x14860004  bne         $a0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BF23Cu;
    {
        const bool branch_taken_0x2bf23c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x2BF240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF23Cu;
        // 0x2bf240: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf23c) {
            ctx->pc = 0x2BF250u;
            goto label_2bf250;
        }
    }
    ctx->pc = 0x2BF244u;
    // 0x2bf244: 0x25300001  addiu       $s0, $t1, 0x1
    ctx->pc = 0x2bf244u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2bf248: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2BF248u;
    {
        const bool branch_taken_0x2bf248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF248u;
        // 0x2bf24c: 0x8cc50004  lw          $a1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf248) {
            ctx->pc = 0x2BF2B0u;
            goto label_2bf2b0;
        }
    }
    ctx->pc = 0x2BF250u;
label_2bf250:
    // 0x2bf250: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2bf250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bf254: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BF254u;
    {
        const bool branch_taken_0x2bf254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BF258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF254u;
        // 0x2bf258: 0x25300001  addiu       $s0, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf254) {
            ctx->pc = 0x2BF27Cu;
            goto label_2bf27c;
        }
    }
    ctx->pc = 0x2BF25Cu;
    // 0x2bf25c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2bf25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2bf260:
    // 0x2bf260: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2bf260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bf264: 0x0  nop
    ctx->pc = 0x2bf264u;
    // NOP
    // 0x2bf268: 0x0  nop
    ctx->pc = 0x2bf268u;
    // NOP
    // 0x2bf26c: 0x0  nop
    ctx->pc = 0x2bf26cu;
    // NOP
    // 0x2bf270: 0x0  nop
    ctx->pc = 0x2bf270u;
    // NOP
    // 0x2bf274: 0x5462fffa  bnel        $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2BF274u;
    {
        const bool branch_taken_0x2bf274 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bf274) {
            ctx->pc = 0x2BF278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF274u;
            // 0x2bf278: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bf260;
        }
    }
    ctx->pc = 0x2BF27Cu;
label_2bf27c:
    // 0x2bf27c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2bf27cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf280: 0x10c2000a  beq         $a2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2BF280u;
    {
        const bool branch_taken_0x2bf280 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BF284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF280u;
        // 0x2bf284: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf280) {
            ctx->pc = 0x2BF2ACu;
            goto label_2bf2ac;
        }
    }
    ctx->pc = 0x2BF288u;
    // 0x2bf288: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2bf288u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2bf28c: 0x0  nop
    ctx->pc = 0x2bf28cu;
    // NOP
label_2bf290:
    // 0x2bf290: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bf290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf294: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2bf294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bf298: 0x0  nop
    ctx->pc = 0x2bf298u;
    // NOP
    // 0x2bf29c: 0x0  nop
    ctx->pc = 0x2bf29cu;
    // NOP
    // 0x2bf2a0: 0x0  nop
    ctx->pc = 0x2bf2a0u;
    // NOP
    // 0x2bf2a4: 0x5482fffa  bnel        $a0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2BF2A4u;
    {
        const bool branch_taken_0x2bf2a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bf2a4) {
            ctx->pc = 0x2BF2A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF2A4u;
            // 0x2bf2a8: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bf290;
        }
    }
    ctx->pc = 0x2BF2ACu;
label_2bf2ac:
    // 0x2bf2ac: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x2bf2acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2bf2b0:
    // 0x2bf2b0: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x2BF2B0u;
    {
        const bool branch_taken_0x2bf2b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf2b0) {
            ctx->pc = 0x2BF2E8u;
            goto label_2bf2e8;
        }
    }
    ctx->pc = 0x2BF2B8u;
    // 0x2bf2b8: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x2bf2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x2bf2bc: 0xad000008  sw          $zero, 0x8($t0)
    ctx->pc = 0x2bf2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
    // 0x2bf2c0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2bf2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bf2c4: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x2bf2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2bf2c8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2bf2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2bf2cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2bf2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2bf2d0: 0xac880008  sw          $t0, 0x8($a0)
    ctx->pc = 0x2bf2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 8));
    // 0x2bf2d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2bf2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2bf2d8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2bf2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2bf2dc: 0xaca8000c  sw          $t0, 0xC($a1)
    ctx->pc = 0x2bf2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 8));
    // 0x2bf2e0: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x2bf2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x2bf2e4: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x2bf2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
label_2bf2e8:
    // 0x2bf2e8: 0x10e000b7  beqz        $a3, . + 4 + (0xB7 << 2)
    ctx->pc = 0x2BF2E8u;
    {
        const bool branch_taken_0x2bf2e8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF2E8u;
        // 0x2bf2ec: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf2e8) {
            ctx->pc = 0x2BF5C8u;
            goto label_2bf5c8;
        }
    }
    ctx->pc = 0x2BF2F0u;
    // 0x2bf2f0: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x2bf2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2bf2f4: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x2BF2F4u;
    {
        const bool branch_taken_0x2bf2f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF2F4u;
        // 0x2bf2f8: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf2f4) {
            ctx->pc = 0x2BF3DCu;
            goto label_2bf3dc;
        }
    }
    ctx->pc = 0x2BF2FCu;
    // 0x2bf2fc: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2BF2FCu;
    {
        const bool branch_taken_0x2bf2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF2FCu;
        // 0x2bf300: 0x8ca30018  lw          $v1, 0x18($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf2fc) {
            ctx->pc = 0x2BF3F0u;
            goto label_2bf3f0;
        }
    }
    ctx->pc = 0x2BF304u;
label_2bf304:
    // 0x2bf304: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BF304u;
    {
        const bool branch_taken_0x2bf304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF304u;
        // 0x2bf308: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf304) {
            ctx->pc = 0x2BF318u;
            goto label_2bf318;
        }
    }
    ctx->pc = 0x2BF30Cu;
    // 0x2bf30c: 0x25300001  addiu       $s0, $t1, 0x1
    ctx->pc = 0x2bf30cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2bf310: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2BF310u;
    {
        const bool branch_taken_0x2bf310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF310u;
        // 0x2bf314: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf310) {
            ctx->pc = 0x2BF390u;
            goto label_2bf390;
        }
    }
    ctx->pc = 0x2BF318u;
label_2bf318:
    // 0x2bf318: 0x14880004  bne         $a0, $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BF318u;
    {
        const bool branch_taken_0x2bf318 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 8));
        ctx->pc = 0x2BF31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF318u;
        // 0x2bf31c: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf318) {
            ctx->pc = 0x2BF32Cu;
            goto label_2bf32c;
        }
    }
    ctx->pc = 0x2BF320u;
    // 0x2bf320: 0x25300001  addiu       $s0, $t1, 0x1
    ctx->pc = 0x2bf320u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2bf324: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2BF324u;
    {
        const bool branch_taken_0x2bf324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF324u;
        // 0x2bf328: 0x8d050004  lw          $a1, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf324) {
            ctx->pc = 0x2BF390u;
            goto label_2bf390;
        }
    }
    ctx->pc = 0x2BF32Cu;
label_2bf32c:
    // 0x2bf32c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2bf32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bf330: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2BF330u;
    {
        const bool branch_taken_0x2bf330 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BF334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF330u;
        // 0x2bf334: 0x25300001  addiu       $s0, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf330) {
            ctx->pc = 0x2BF35Cu;
            goto label_2bf35c;
        }
    }
    ctx->pc = 0x2BF338u;
    // 0x2bf338: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2bf338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bf33c: 0x0  nop
    ctx->pc = 0x2bf33cu;
    // NOP
label_2bf340:
    // 0x2bf340: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2bf340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bf344: 0x0  nop
    ctx->pc = 0x2bf344u;
    // NOP
    // 0x2bf348: 0x0  nop
    ctx->pc = 0x2bf348u;
    // NOP
    // 0x2bf34c: 0x0  nop
    ctx->pc = 0x2bf34cu;
    // NOP
    // 0x2bf350: 0x0  nop
    ctx->pc = 0x2bf350u;
    // NOP
    // 0x2bf354: 0x5462fffa  bnel        $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2BF354u;
    {
        const bool branch_taken_0x2bf354 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bf354) {
            ctx->pc = 0x2BF358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF354u;
            // 0x2bf358: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bf340;
        }
    }
    ctx->pc = 0x2BF35Cu;
label_2bf35c:
    // 0x2bf35c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2bf35cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf360: 0x1102000a  beq         $t0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2BF360u;
    {
        const bool branch_taken_0x2bf360 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BF364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF360u;
        // 0x2bf364: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf360) {
            ctx->pc = 0x2BF38Cu;
            goto label_2bf38c;
        }
    }
    ctx->pc = 0x2BF368u;
    // 0x2bf368: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2bf368u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2bf36c: 0x0  nop
    ctx->pc = 0x2bf36cu;
    // NOP
label_2bf370:
    // 0x2bf370: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bf370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf374: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2bf374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bf378: 0x0  nop
    ctx->pc = 0x2bf378u;
    // NOP
    // 0x2bf37c: 0x0  nop
    ctx->pc = 0x2bf37cu;
    // NOP
    // 0x2bf380: 0x0  nop
    ctx->pc = 0x2bf380u;
    // NOP
    // 0x2bf384: 0x5482fffa  bnel        $a0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2BF384u;
    {
        const bool branch_taken_0x2bf384 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bf384) {
            ctx->pc = 0x2BF388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF384u;
            // 0x2bf388: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bf370;
        }
    }
    ctx->pc = 0x2BF38Cu;
label_2bf38c:
    // 0x2bf38c: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x2bf38cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2bf390:
    // 0x2bf390: 0x1100000d  beqz        $t0, . + 4 + (0xD << 2)
    ctx->pc = 0x2BF390u;
    {
        const bool branch_taken_0x2bf390 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf390) {
            ctx->pc = 0x2BF3C8u;
            goto label_2bf3c8;
        }
    }
    ctx->pc = 0x2BF398u;
    // 0x2bf398: 0xacc80000  sw          $t0, 0x0($a2)
    ctx->pc = 0x2bf398u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
    // 0x2bf39c: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x2bf39cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x2bf3a0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2bf3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bf3a4: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x2bf3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2bf3a8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2bf3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2bf3ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2bf3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2bf3b0: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x2bf3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x2bf3b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2bf3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2bf3b8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2bf3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2bf3bc: 0xaca6000c  sw          $a2, 0xC($a1)
    ctx->pc = 0x2bf3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 6));
    // 0x2bf3c0: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x2bf3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x2bf3c4: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x2bf3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_2bf3c8:
    // 0x2bf3c8: 0x10e0007f  beqz        $a3, . + 4 + (0x7F << 2)
    ctx->pc = 0x2BF3C8u;
    {
        const bool branch_taken_0x2bf3c8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF3C8u;
        // 0x2bf3cc: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf3c8) {
            ctx->pc = 0x2BF5C8u;
            goto label_2bf5c8;
        }
    }
    ctx->pc = 0x2BF3D0u;
    // 0x2bf3d0: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x2bf3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2bf3d4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BF3D4u;
    {
        const bool branch_taken_0x2bf3d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF3D4u;
        // 0x2bf3d8: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf3d4) {
            ctx->pc = 0x2BF3ECu;
            goto label_2bf3ec;
        }
    }
    ctx->pc = 0x2BF3DCu;
label_2bf3dc:
    // 0x2bf3dc: 0xaca70014  sw          $a3, 0x14($a1)
    ctx->pc = 0x2bf3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 7));
    // 0x2bf3e0: 0xacb20010  sw          $s2, 0x10($a1)
    ctx->pc = 0x2bf3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 18));
    // 0x2bf3e4: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x2BF3E4u;
    {
        const bool branch_taken_0x2bf3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF3E4u;
        // 0x2bf3e8: 0xaca70018  sw          $a3, 0x18($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf3e4) {
            ctx->pc = 0x2BF5C4u;
            goto label_2bf5c4;
        }
    }
    ctx->pc = 0x2BF3ECu;
label_2bf3ec:
    // 0x2bf3ec: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x2bf3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_2bf3f0:
    // 0x2bf3f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2bf3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2bf3f4: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x2bf3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    // 0x2bf3f8: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x2bf3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x2bf3fc: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x2BF3FCu;
    {
        const bool branch_taken_0x2bf3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF3FCu;
        // 0x2bf400: 0xaca70018  sw          $a3, 0x18($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf3fc) {
            ctx->pc = 0x2BF5C4u;
            goto label_2bf5c4;
        }
    }
    ctx->pc = 0x2BF404u;
label_2bf404:
    // 0x2bf404: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2BF404u;
    {
        const bool branch_taken_0x2bf404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF404u;
        // 0x2bf408: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf404) {
            ctx->pc = 0x2BF4A4u;
            goto label_2bf4a4;
        }
    }
    ctx->pc = 0x2BF40Cu;
    // 0x2bf40c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2bf40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2bf410: 0x551818  mult        $v1, $v0, $s5
    ctx->pc = 0x2bf410u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2bf414: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2bf414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2bf418: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2bf418u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2bf41c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2bf41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2bf420: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2bf420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2bf424: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BF424u;
    {
        const bool branch_taken_0x2bf424 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF424u;
        // 0x2bf428: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf424) {
            ctx->pc = 0x2BF434u;
            goto label_2bf434;
        }
    }
    ctx->pc = 0x2BF42Cu;
    // 0x2bf42c: 0x55060008  bnel        $t0, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BF42Cu;
    {
        const bool branch_taken_0x2bf42c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 6));
        if (branch_taken_0x2bf42c) {
            ctx->pc = 0x2BF430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF42Cu;
            // 0x2bf430: 0xad080000  sw          $t0, 0x0($t0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF450u;
            goto label_2bf450;
        }
    }
    ctx->pc = 0x2BF434u;
label_2bf434:
    // 0x2bf434: 0xad080000  sw          $t0, 0x0($t0)
    ctx->pc = 0x2bf434u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 8));
    // 0x2bf438: 0xad000008  sw          $zero, 0x8($t0)
    ctx->pc = 0x2bf438u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
    // 0x2bf43c: 0xac680008  sw          $t0, 0x8($v1)
    ctx->pc = 0x2bf43cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 8));
    // 0x2bf440: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x2bf440u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x2bf444: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x2bf444u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
    // 0x2bf448: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2BF448u;
    {
        const bool branch_taken_0x2bf448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF448u;
        // 0x2bf44c: 0xac68000c  sw          $t0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf448) {
            ctx->pc = 0x2BF484u;
            goto label_2bf484;
        }
    }
    ctx->pc = 0x2BF450u;
label_2bf450:
    // 0x2bf450: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x2bf450u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
    // 0x2bf454: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BF454u;
    {
        const bool branch_taken_0x2bf454 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF454u;
        // 0x2bf458: 0xad060008  sw          $a2, 0x8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf454) {
            ctx->pc = 0x2BF464u;
            goto label_2bf464;
        }
    }
    ctx->pc = 0x2BF45Cu;
    // 0x2bf45c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2BF45Cu;
    {
        const bool branch_taken_0x2bf45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF45Cu;
        // 0x2bf460: 0xacc60000  sw          $a2, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf45c) {
            ctx->pc = 0x2BF468u;
            goto label_2bf468;
        }
    }
    ctx->pc = 0x2BF464u;
label_2bf464:
    // 0x2bf464: 0xacc80000  sw          $t0, 0x0($a2)
    ctx->pc = 0x2bf464u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
label_2bf468:
    // 0x2bf468: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x2bf468u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x2bf46c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2bf46cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bf470: 0xac680008  sw          $t0, 0x8($v1)
    ctx->pc = 0x2bf470u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 8));
    // 0x2bf474: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x2bf474u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x2bf478: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x2bf478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x2bf47c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x2bf47cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x2bf480: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x2bf480u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_2bf484:
    // 0x2bf484: 0x10e0004f  beqz        $a3, . + 4 + (0x4F << 2)
    ctx->pc = 0x2BF484u;
    {
        const bool branch_taken_0x2bf484 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF484u;
        // 0x2bf488: 0x25300001  addiu       $s0, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf484) {
            ctx->pc = 0x2BF5C4u;
            goto label_2bf5c4;
        }
    }
    ctx->pc = 0x2BF48Cu;
    // 0x2bf48c: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x2bf48cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x2bf490: 0xac670014  sw          $a3, 0x14($v1)
    ctx->pc = 0x2bf490u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 7));
    // 0x2bf494: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x2bf494u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x2bf498: 0xac670018  sw          $a3, 0x18($v1)
    ctx->pc = 0x2bf498u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 7));
    // 0x2bf49c: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x2BF49Cu;
    {
        const bool branch_taken_0x2bf49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF49Cu;
        // 0x2bf4a0: 0xac720010  sw          $s2, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf49c) {
            ctx->pc = 0x2BF5C4u;
            goto label_2bf5c4;
        }
    }
    ctx->pc = 0x2BF4A4u;
label_2bf4a4:
    // 0x2bf4a4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2bf4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2bf4a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BF4A8u;
    {
        const bool branch_taken_0x2bf4a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF4A8u;
        // 0x2bf4ac: 0x25300001  addiu       $s0, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf4a8) {
            ctx->pc = 0x2BF4B8u;
            goto label_2bf4b8;
        }
    }
    ctx->pc = 0x2BF4B0u;
    // 0x2bf4b0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2BF4B0u;
    {
        const bool branch_taken_0x2bf4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF4B0u;
        // 0x2bf4b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf4b0) {
            ctx->pc = 0x2BF530u;
            goto label_2bf530;
        }
    }
    ctx->pc = 0x2BF4B8u;
label_2bf4b8:
    // 0x2bf4b8: 0x14480004  bne         $v0, $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BF4B8u;
    {
        const bool branch_taken_0x2bf4b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        ctx->pc = 0x2BF4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF4B8u;
        // 0x2bf4bc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf4b8) {
            ctx->pc = 0x2BF4CCu;
            goto label_2bf4cc;
        }
    }
    ctx->pc = 0x2BF4C0u;
    // 0x2bf4c0: 0x8d050004  lw          $a1, 0x4($t0)
    ctx->pc = 0x2bf4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2bf4c4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2BF4C4u;
    {
        const bool branch_taken_0x2bf4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF4C4u;
        // 0x2bf4c8: 0x25300001  addiu       $s0, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf4c4) {
            ctx->pc = 0x2BF530u;
            goto label_2bf530;
        }
    }
    ctx->pc = 0x2BF4CCu;
label_2bf4cc:
    // 0x2bf4cc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2bf4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bf4d0: 0x10a2000a  beq         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2BF4D0u;
    {
        const bool branch_taken_0x2bf4d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BF4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF4D0u;
        // 0x2bf4d4: 0x25300001  addiu       $s0, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf4d0) {
            ctx->pc = 0x2BF4FCu;
            goto label_2bf4fc;
        }
    }
    ctx->pc = 0x2BF4D8u;
    // 0x2bf4d8: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2bf4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bf4dc: 0x0  nop
    ctx->pc = 0x2bf4dcu;
    // NOP
label_2bf4e0:
    // 0x2bf4e0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2bf4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bf4e4: 0x0  nop
    ctx->pc = 0x2bf4e4u;
    // NOP
    // 0x2bf4e8: 0x0  nop
    ctx->pc = 0x2bf4e8u;
    // NOP
    // 0x2bf4ec: 0x0  nop
    ctx->pc = 0x2bf4ecu;
    // NOP
    // 0x2bf4f0: 0x0  nop
    ctx->pc = 0x2bf4f0u;
    // NOP
    // 0x2bf4f4: 0x54a2fffa  bnel        $a1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2BF4F4u;
    {
        const bool branch_taken_0x2bf4f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bf4f4) {
            ctx->pc = 0x2BF4F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF4F4u;
            // 0x2bf4f8: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF4E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bf4e0;
        }
    }
    ctx->pc = 0x2BF4FCu;
label_2bf4fc:
    // 0x2bf4fc: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x2bf4fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf500: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2bf500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bf504: 0x5043000a  beql        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2BF504u;
    {
        const bool branch_taken_0x2bf504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2bf504) {
            ctx->pc = 0x2BF508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF504u;
            // 0x2bf508: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF530u;
            goto label_2bf530;
        }
    }
    ctx->pc = 0x2BF50Cu;
    // 0x2bf50c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2bf50cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_2bf510:
    // 0x2bf510: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2bf510u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf514: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2bf514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bf518: 0x0  nop
    ctx->pc = 0x2bf518u;
    // NOP
    // 0x2bf51c: 0x0  nop
    ctx->pc = 0x2bf51cu;
    // NOP
    // 0x2bf520: 0x0  nop
    ctx->pc = 0x2bf520u;
    // NOP
    // 0x2bf524: 0x5443fffa  bnel        $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2BF524u;
    {
        const bool branch_taken_0x2bf524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2bf524) {
            ctx->pc = 0x2BF528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF524u;
            // 0x2bf528: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bf510;
        }
    }
    ctx->pc = 0x2BF52Cu;
    // 0x2bf52c: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x2bf52cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2bf530:
    // 0x2bf530: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2bf530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2bf534: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BF534u;
    {
        const bool branch_taken_0x2bf534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bf534) {
            ctx->pc = 0x2BF544u;
            goto label_2bf544;
        }
    }
    ctx->pc = 0x2BF53Cu;
    // 0x2bf53c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2BF53Cu;
    {
        const bool branch_taken_0x2bf53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF53Cu;
        // 0x2bf540: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf53c) {
            ctx->pc = 0x2BF5B8u;
            goto label_2bf5b8;
        }
    }
    ctx->pc = 0x2BF544u;
label_2bf544:
    // 0x2bf544: 0x14460003  bne         $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BF544u;
    {
        const bool branch_taken_0x2bf544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x2BF548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF544u;
        // 0x2bf548: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf544) {
            ctx->pc = 0x2BF554u;
            goto label_2bf554;
        }
    }
    ctx->pc = 0x2BF54Cu;
    // 0x2bf54c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2BF54Cu;
    {
        const bool branch_taken_0x2bf54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF54Cu;
        // 0x2bf550: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf54c) {
            ctx->pc = 0x2BF5B8u;
            goto label_2bf5b8;
        }
    }
    ctx->pc = 0x2BF554u;
label_2bf554:
    // 0x2bf554: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2bf554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bf558: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2BF558u;
    {
        const bool branch_taken_0x2bf558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BF55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF558u;
        // 0x2bf55c: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf558) {
            ctx->pc = 0x2BF588u;
            goto label_2bf588;
        }
    }
    ctx->pc = 0x2BF560u;
    // 0x2bf560: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2bf560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bf564: 0x0  nop
    ctx->pc = 0x2bf564u;
    // NOP
label_2bf568:
    // 0x2bf568: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2bf568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bf56c: 0x0  nop
    ctx->pc = 0x2bf56cu;
    // NOP
    // 0x2bf570: 0x0  nop
    ctx->pc = 0x2bf570u;
    // NOP
    // 0x2bf574: 0x0  nop
    ctx->pc = 0x2bf574u;
    // NOP
    // 0x2bf578: 0x0  nop
    ctx->pc = 0x2bf578u;
    // NOP
    // 0x2bf57c: 0x5462fffa  bnel        $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2BF57Cu;
    {
        const bool branch_taken_0x2bf57c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bf57c) {
            ctx->pc = 0x2BF580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF57Cu;
            // 0x2bf580: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bf568;
        }
    }
    ctx->pc = 0x2BF584u;
    // 0x2bf584: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2bf584u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2bf588:
    // 0x2bf588: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2bf588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bf58c: 0x5044000a  beql        $v0, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2BF58Cu;
    {
        const bool branch_taken_0x2bf58c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2bf58c) {
            ctx->pc = 0x2BF590u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF58Cu;
            // 0x2bf590: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF5B8u;
            goto label_2bf5b8;
        }
    }
    ctx->pc = 0x2BF594u;
    // 0x2bf594: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2bf594u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2bf598:
    // 0x2bf598: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2bf598u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf59c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2bf59cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bf5a0: 0x0  nop
    ctx->pc = 0x2bf5a0u;
    // NOP
    // 0x2bf5a4: 0x0  nop
    ctx->pc = 0x2bf5a4u;
    // NOP
    // 0x2bf5a8: 0x0  nop
    ctx->pc = 0x2bf5a8u;
    // NOP
    // 0x2bf5ac: 0x5444fffa  bnel        $v0, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2BF5ACu;
    {
        const bool branch_taken_0x2bf5ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2bf5ac) {
            ctx->pc = 0x2BF5B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF5ACu;
            // 0x2bf5b0: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bf598;
        }
    }
    ctx->pc = 0x2BF5B4u;
    // 0x2bf5b4: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x2bf5b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2bf5b8:
    // 0x2bf5b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bf5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf5bc: 0xc0afb5a  jal         func_2BED68
    ctx->pc = 0x2BF5BCu;
    SET_GPR_U32(ctx, 31, 0x2BF5C4u);
    ctx->pc = 0x2BF5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF5BCu;
    // 0x2bf5c0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BED68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2BED68u, 0x2BF5BCu, 0x2BF5C4u)) {
        return;
    }
    ctx->pc = 0x2BF5C4u;
label_2bf5c4:
    // 0x2bf5c4: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2bf5c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bf5c8:
    // 0x2bf5c8: 0x134102b  sltu        $v0, $t1, $s4
    ctx->pc = 0x2bf5c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x2bf5cc: 0x1440fe90  bnez        $v0, . + 4 + (-0x170 << 2)
    ctx->pc = 0x2BF5CCu;
    {
        const bool branch_taken_0x2bf5cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF5CCu;
        // 0x2bf5d0: 0x91080  sll         $v0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf5cc) {
            ctx->pc = 0x2BF010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bf010;
        }
    }
    ctx->pc = 0x2BF5D4u;
label_2bf5d4:
    // 0x2bf5d4: 0x13c00173  beqz        $fp, . + 4 + (0x173 << 2)
    ctx->pc = 0x2BF5D4u;
    {
        const bool branch_taken_0x2bf5d4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF5D4u;
        // 0x2bf5d8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf5d4) {
            ctx->pc = 0x2BFBA4u;
            goto label_2bfba4;
        }
    }
    ctx->pc = 0x2BF5DCu;
    // 0x2bf5dc: 0x241500e0  addiu       $s5, $zero, 0xE0
    ctx->pc = 0x2bf5dcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x2bf5e0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2bf5e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bf5e4: 0x24140028  addiu       $s4, $zero, 0x28
    ctx->pc = 0x2bf5e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2bf5e8: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x2bf5e8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bf5ec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2bf5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2bf5f0:
    // 0x2bf5f0: 0x400013  mtlo        $v0
    ctx->pc = 0x2bf5f0u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x2bf5f4: 0x71353800  madd        $a3, $t1, $s5
    ctx->pc = 0x2bf5f4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 21); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2bf5f8: 0x8ce200ac  lw          $v0, 0xAC($a3)
    ctx->pc = 0x2bf5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 172)));
    // 0x2bf5fc: 0x10400165  beqz        $v0, . + 4 + (0x165 << 2)
    ctx->pc = 0x2BF5FCu;
    {
        const bool branch_taken_0x2bf5fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF5FCu;
        // 0x2bf600: 0x25300001  addiu       $s0, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf5fc) {
            ctx->pc = 0x2BFB94u;
            goto label_2bfb94;
        }
    }
    ctx->pc = 0x2BF604u;
    // 0x2bf604: 0x94e200b8  lhu         $v0, 0xB8($a3)
    ctx->pc = 0x2bf604u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 184)));
    // 0x2bf608: 0x340bffff  ori         $t3, $zero, 0xFFFF
    ctx->pc = 0x2bf608u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2bf60c: 0x104b000e  beq         $v0, $t3, . + 4 + (0xE << 2)
    ctx->pc = 0x2BF60Cu;
    {
        const bool branch_taken_0x2bf60c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BF610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF60Cu;
        // 0x2bf610: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf60c) {
            ctx->pc = 0x2BF648u;
            goto label_2bf648;
        }
    }
    ctx->pc = 0x2BF614u;
    // 0x2bf614: 0x8ce200b4  lw          $v0, 0xB4($a3)
    ctx->pc = 0x2bf614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 180)));
    // 0x2bf618: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x2bf618u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf61c: 0x94440020  lhu         $a0, 0x20($v0)
    ctx->pc = 0x2bf61cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2bf620: 0x8c450024  lw          $a1, 0x24($v0)
    ctx->pc = 0x2bf620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2bf624: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x2bf624u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x2bf628: 0x8ca60060  lw          $a2, 0x60($a1)
    ctx->pc = 0x2bf628u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x2bf62c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2bf62cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2bf630: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x2bf630u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2bf634: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2bf634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2bf638: 0x922004  sllv        $a0, $s2, $a0
    ctx->pc = 0x2bf638u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 4) & 0x1F));
    // 0x2bf63c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2bf63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bf640: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2bf640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2bf644: 0x2500a  movz        $t2, $zero, $v0
    ctx->pc = 0x2bf644u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0));
label_2bf648:
    // 0x2bf648: 0x94e200c0  lhu         $v0, 0xC0($a3)
    ctx->pc = 0x2bf648u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 192)));
    // 0x2bf64c: 0x104b000e  beq         $v0, $t3, . + 4 + (0xE << 2)
    ctx->pc = 0x2BF64Cu;
    {
        const bool branch_taken_0x2bf64c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BF650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF64Cu;
        // 0x2bf650: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf64c) {
            ctx->pc = 0x2BF688u;
            goto label_2bf688;
        }
    }
    ctx->pc = 0x2BF654u;
    // 0x2bf654: 0x8ce200bc  lw          $v0, 0xBC($a3)
    ctx->pc = 0x2bf654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 188)));
    // 0x2bf658: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2bf658u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf65c: 0x94440020  lhu         $a0, 0x20($v0)
    ctx->pc = 0x2bf65cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2bf660: 0x8c450024  lw          $a1, 0x24($v0)
    ctx->pc = 0x2bf660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2bf664: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x2bf664u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x2bf668: 0x8ca60060  lw          $a2, 0x60($a1)
    ctx->pc = 0x2bf668u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x2bf66c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2bf66cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2bf670: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x2bf670u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2bf674: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2bf674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2bf678: 0x922004  sllv        $a0, $s2, $a0
    ctx->pc = 0x2bf678u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 4) & 0x1F));
    // 0x2bf67c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2bf67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bf680: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2bf680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2bf684: 0x2400a  movz        $t0, $zero, $v0
    ctx->pc = 0x2bf684u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0));
label_2bf688:
    // 0x2bf688: 0x5148004e  beql        $t2, $t0, . + 4 + (0x4E << 2)
    ctx->pc = 0x2BF688u;
    {
        const bool branch_taken_0x2bf688 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 8));
        if (branch_taken_0x2bf688) {
            ctx->pc = 0x2BF68Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF688u;
            // 0x2bf68c: 0x8ce400b4  lw          $a0, 0xB4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF7C4u;
            goto label_2bf7c4;
        }
    }
    ctx->pc = 0x2BF690u;
    // 0x2bf690: 0x51400002  beql        $t2, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BF690u;
    {
        const bool branch_taken_0x2bf690 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf690) {
            ctx->pc = 0x2BF694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF690u;
            // 0x2bf694: 0x8ce300bc  lw          $v1, 0xBC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF69Cu;
            goto label_2bf69c;
        }
    }
    ctx->pc = 0x2BF698u;
    // 0x2bf698: 0x8ce300b4  lw          $v1, 0xB4($a3)
    ctx->pc = 0x2bf698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 180)));
label_2bf69c:
    // 0x2bf69c: 0x94620020  lhu         $v0, 0x20($v1)
    ctx->pc = 0x2bf69cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2bf6a0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2bf6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2bf6a4: 0x2622821  addu        $a1, $s3, $v0
    ctx->pc = 0x2bf6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2bf6a8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2bf6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bf6ac: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2BF6ACu;
    {
        const bool branch_taken_0x2bf6ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF6ACu;
        // 0x2bf6b0: 0x24e600d4  addiu       $a2, $a3, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 212));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf6ac) {
            ctx->pc = 0x2BF710u;
            goto label_2bf710;
        }
    }
    ctx->pc = 0x2BF6B4u;
    // 0x2bf6b4: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x2bf6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x2bf6b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2bf6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bf6bc: 0x25300001  addiu       $s0, $t1, 0x1
    ctx->pc = 0x2bf6bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2bf6c0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2bf6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2bf6c4: 0x541818  mult        $v1, $v0, $s4
    ctx->pc = 0x2bf6c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2bf6c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2bf6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2bf6cc: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2bf6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2bf6d0: 0xaca50000  sw          $a1, 0x0($a1)
    ctx->pc = 0x2bf6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 5));
    // 0x2bf6d4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2bf6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2bf6d8: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x2bf6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x2bf6dc: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x2bf6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2bf6e0: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x2bf6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x2bf6e4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2bf6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2bf6e8: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2bf6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x2bf6ec: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x2bf6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    // 0x2bf6f0: 0x10c00128  beqz        $a2, . + 4 + (0x128 << 2)
    ctx->pc = 0x2BF6F0u;
    {
        const bool branch_taken_0x2bf6f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF6F0u;
        // 0x2bf6f4: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf6f0) {
            ctx->pc = 0x2BFB94u;
            goto label_2bfb94;
        }
    }
    ctx->pc = 0x2BF6F8u;
    // 0x2bf6f8: 0xace000d4  sw          $zero, 0xD4($a3)
    ctx->pc = 0x2bf6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 212), GPR_U32(ctx, 0));
    // 0x2bf6fc: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x2bf6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
    // 0x2bf700: 0xac460020  sw          $a2, 0x20($v0)
    ctx->pc = 0x2bf700u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 6));
    // 0x2bf704: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x2bf704u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x2bf708: 0x10000122  b           . + 4 + (0x122 << 2)
    ctx->pc = 0x2BF708u;
    {
        const bool branch_taken_0x2bf708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF708u;
        // 0x2bf70c: 0xac460024  sw          $a2, 0x24($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf708) {
            ctx->pc = 0x2BFB94u;
            goto label_2bfb94;
        }
    }
    ctx->pc = 0x2BF710u;
label_2bf710:
    // 0x2bf710: 0x14450004  bne         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BF710u;
    {
        const bool branch_taken_0x2bf710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2BF714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF710u;
        // 0x2bf714: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf710) {
            ctx->pc = 0x2BF724u;
            goto label_2bf724;
        }
    }
    ctx->pc = 0x2BF718u;
    // 0x2bf718: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2bf718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2bf71c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2BF71Cu;
    {
        const bool branch_taken_0x2bf71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF71Cu;
        // 0x2bf720: 0x25300001  addiu       $s0, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf71c) {
            ctx->pc = 0x2BF788u;
            goto label_2bf788;
        }
    }
    ctx->pc = 0x2BF724u;
label_2bf724:
    // 0x2bf724: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2bf724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bf728: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2BF728u;
    {
        const bool branch_taken_0x2bf728 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BF72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF728u;
        // 0x2bf72c: 0x25300001  addiu       $s0, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf728) {
            ctx->pc = 0x2BF754u;
            goto label_2bf754;
        }
    }
    ctx->pc = 0x2BF730u;
    // 0x2bf730: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2bf730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bf734: 0x0  nop
    ctx->pc = 0x2bf734u;
    // NOP
label_2bf738:
    // 0x2bf738: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2bf738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bf73c: 0x0  nop
    ctx->pc = 0x2bf73cu;
    // NOP
    // 0x2bf740: 0x0  nop
    ctx->pc = 0x2bf740u;
    // NOP
    // 0x2bf744: 0x0  nop
    ctx->pc = 0x2bf744u;
    // NOP
    // 0x2bf748: 0x0  nop
    ctx->pc = 0x2bf748u;
    // NOP
    // 0x2bf74c: 0x5482fffa  bnel        $a0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2BF74Cu;
    {
        const bool branch_taken_0x2bf74c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bf74c) {
            ctx->pc = 0x2BF750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF74Cu;
            // 0x2bf750: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bf738;
        }
    }
    ctx->pc = 0x2BF754u;
label_2bf754:
    // 0x2bf754: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2bf754u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf758: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2bf758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bf75c: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2BF75Cu;
    {
        const bool branch_taken_0x2bf75c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bf75c) {
            ctx->pc = 0x2BF760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF75Cu;
            // 0x2bf760: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF788u;
            goto label_2bf788;
        }
    }
    ctx->pc = 0x2BF764u;
    // 0x2bf764: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2bf764u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_2bf768:
    // 0x2bf768: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2bf768u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf76c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2bf76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bf770: 0x0  nop
    ctx->pc = 0x2bf770u;
    // NOP
    // 0x2bf774: 0x0  nop
    ctx->pc = 0x2bf774u;
    // NOP
    // 0x2bf778: 0x0  nop
    ctx->pc = 0x2bf778u;
    // NOP
    // 0x2bf77c: 0x5462fffa  bnel        $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2BF77Cu;
    {
        const bool branch_taken_0x2bf77c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bf77c) {
            ctx->pc = 0x2BF780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF77Cu;
            // 0x2bf780: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bf768;
        }
    }
    ctx->pc = 0x2BF784u;
    // 0x2bf784: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2bf784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2bf788:
    // 0x2bf788: 0x10c00103  beqz        $a2, . + 4 + (0x103 << 2)
    ctx->pc = 0x2BF788u;
    {
        const bool branch_taken_0x2bf788 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF788u;
        // 0x2bf78c: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf788) {
            ctx->pc = 0x2BFB98u;
            goto label_2bfb98;
        }
    }
    ctx->pc = 0x2BF790u;
    // 0x2bf790: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x2bf790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2bf794: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BF794u;
    {
        const bool branch_taken_0x2bf794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF794u;
        // 0x2bf798: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf794) {
            ctx->pc = 0x2BF7ACu;
            goto label_2bf7ac;
        }
    }
    ctx->pc = 0x2BF79Cu;
    // 0x2bf79c: 0xac860020  sw          $a2, 0x20($a0)
    ctx->pc = 0x2bf79cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 6));
    // 0x2bf7a0: 0xac92001c  sw          $s2, 0x1C($a0)
    ctx->pc = 0x2bf7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 18));
    // 0x2bf7a4: 0x100000fc  b           . + 4 + (0xFC << 2)
    ctx->pc = 0x2BF7A4u;
    {
        const bool branch_taken_0x2bf7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7A4u;
        // 0x2bf7a8: 0xac860024  sw          $a2, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf7a4) {
            ctx->pc = 0x2BFB98u;
            goto label_2bfb98;
        }
    }
    ctx->pc = 0x2BF7ACu;
label_2bf7ac:
    // 0x2bf7ac: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x2bf7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2bf7b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2bf7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2bf7b4: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x2bf7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x2bf7b8: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x2bf7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x2bf7bc: 0x100000f5  b           . + 4 + (0xF5 << 2)
    ctx->pc = 0x2BF7BCu;
    {
        const bool branch_taken_0x2bf7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7BCu;
        // 0x2bf7c0: 0xac860024  sw          $a2, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf7bc) {
            ctx->pc = 0x2BFB94u;
            goto label_2bfb94;
        }
    }
    ctx->pc = 0x2BF7C4u;
label_2bf7c4:
    // 0x2bf7c4: 0x24e800d4  addiu       $t0, $a3, 0xD4
    ctx->pc = 0x2bf7c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 212));
    // 0x2bf7c8: 0x8ce500bc  lw          $a1, 0xBC($a3)
    ctx->pc = 0x2bf7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 188)));
    // 0x2bf7cc: 0x94820020  lhu         $v0, 0x20($a0)
    ctx->pc = 0x2bf7ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2bf7d0: 0x94a30020  lhu         $v1, 0x20($a1)
    ctx->pc = 0x2bf7d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2bf7d4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2bf7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2bf7d8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2bf7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2bf7dc: 0x2623821  addu        $a3, $s3, $v0
    ctx->pc = 0x2bf7dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2bf7e0: 0x2633021  addu        $a2, $s3, $v1
    ctx->pc = 0x2bf7e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2bf7e4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2bf7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2bf7e8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2bf7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2bf7ec: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2bf7ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2bf7f0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BF7F0u;
    {
        const bool branch_taken_0x2bf7f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7F0u;
        // 0x2bf7f4: 0x2c630001  sltiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf7f0) {
            ctx->pc = 0x2BF7FCu;
            goto label_2bf7fc;
        }
    }
    ctx->pc = 0x2BF7F8u;
    // 0x2bf7f8: 0xace4000c  sw          $a0, 0xC($a3)
    ctx->pc = 0x2bf7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 4));
label_2bf7fc:
    // 0x2bf7fc: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2BF7FCu;
    {
        const bool branch_taken_0x2bf7fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bf7fc) {
            ctx->pc = 0x2BF800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF7FCu;
            // 0x2bf800: 0xacc5000c  sw          $a1, 0xC($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF804u;
            goto label_2bf804;
        }
    }
    ctx->pc = 0x2BF804u;
label_2bf804:
    // 0x2bf804: 0x10430077  beq         $v0, $v1, . + 4 + (0x77 << 2)
    ctx->pc = 0x2BF804u;
    {
        const bool branch_taken_0x2bf804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2bf804) {
            ctx->pc = 0x2BF9E4u;
            goto label_2bf9e4;
        }
    }
    ctx->pc = 0x2BF80Cu;
    // 0x2bf80c: 0x50400037  beql        $v0, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x2BF80Cu;
    {
        const bool branch_taken_0x2bf80c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf80c) {
            ctx->pc = 0x2BF810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF80Cu;
            // 0x2bf810: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF8ECu;
            goto label_2bf8ec;
        }
    }
    ctx->pc = 0x2BF814u;
    // 0x2bf814: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2bf814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2bf818: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BF818u;
    {
        const bool branch_taken_0x2bf818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF818u;
        // 0x2bf81c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf818) {
            ctx->pc = 0x2BF828u;
            goto label_2bf828;
        }
    }
    ctx->pc = 0x2BF820u;
    // 0x2bf820: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2BF820u;
    {
        const bool branch_taken_0x2bf820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF820u;
        // 0x2bf824: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf820) {
            ctx->pc = 0x2BF898u;
            goto label_2bf898;
        }
    }
    ctx->pc = 0x2BF828u;
label_2bf828:
    // 0x2bf828: 0x14860003  bne         $a0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BF828u;
    {
        const bool branch_taken_0x2bf828 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x2BF82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF828u;
        // 0x2bf82c: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf828) {
            ctx->pc = 0x2BF838u;
            goto label_2bf838;
        }
    }
    ctx->pc = 0x2BF830u;
    // 0x2bf830: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2BF830u;
    {
        const bool branch_taken_0x2bf830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF830u;
        // 0x2bf834: 0x8cc50004  lw          $a1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf830) {
            ctx->pc = 0x2BF898u;
            goto label_2bf898;
        }
    }
    ctx->pc = 0x2BF838u;
label_2bf838:
    // 0x2bf838: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2bf838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bf83c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2BF83Cu;
    {
        const bool branch_taken_0x2bf83c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BF840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF83Cu;
        // 0x2bf840: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf83c) {
            ctx->pc = 0x2BF868u;
            goto label_2bf868;
        }
    }
    ctx->pc = 0x2BF844u;
    // 0x2bf844: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2bf844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2bf848:
    // 0x2bf848: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2bf848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bf84c: 0x0  nop
    ctx->pc = 0x2bf84cu;
    // NOP
    // 0x2bf850: 0x0  nop
    ctx->pc = 0x2bf850u;
    // NOP
    // 0x2bf854: 0x0  nop
    ctx->pc = 0x2bf854u;
    // NOP
    // 0x2bf858: 0x0  nop
    ctx->pc = 0x2bf858u;
    // NOP
    // 0x2bf85c: 0x5462fffa  bnel        $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2BF85Cu;
    {
        const bool branch_taken_0x2bf85c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bf85c) {
            ctx->pc = 0x2BF860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF85Cu;
            // 0x2bf860: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bf848;
        }
    }
    ctx->pc = 0x2BF864u;
    // 0x2bf864: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2bf864u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bf868:
    // 0x2bf868: 0x10c2000a  beq         $a2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2BF868u;
    {
        const bool branch_taken_0x2bf868 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BF86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF868u;
        // 0x2bf86c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf868) {
            ctx->pc = 0x2BF894u;
            goto label_2bf894;
        }
    }
    ctx->pc = 0x2BF870u;
    // 0x2bf870: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2bf870u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2bf874: 0x0  nop
    ctx->pc = 0x2bf874u;
    // NOP
label_2bf878:
    // 0x2bf878: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bf878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf87c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2bf87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bf880: 0x0  nop
    ctx->pc = 0x2bf880u;
    // NOP
    // 0x2bf884: 0x0  nop
    ctx->pc = 0x2bf884u;
    // NOP
    // 0x2bf888: 0x0  nop
    ctx->pc = 0x2bf888u;
    // NOP
    // 0x2bf88c: 0x5482fffa  bnel        $a0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2BF88Cu;
    {
        const bool branch_taken_0x2bf88c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bf88c) {
            ctx->pc = 0x2BF890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF88Cu;
            // 0x2bf890: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bf878;
        }
    }
    ctx->pc = 0x2BF894u;
label_2bf894:
    // 0x2bf894: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x2bf894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2bf898:
    // 0x2bf898: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x2BF898u;
    {
        const bool branch_taken_0x2bf898 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf898) {
            ctx->pc = 0x2BF8D0u;
            goto label_2bf8d0;
        }
    }
    ctx->pc = 0x2BF8A0u;
    // 0x2bf8a0: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x2bf8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x2bf8a4: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x2bf8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x2bf8a8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2bf8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bf8ac: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x2bf8acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2bf8b0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2bf8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2bf8b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2bf8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2bf8b8: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x2bf8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
    // 0x2bf8bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2bf8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2bf8c0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2bf8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2bf8c4: 0xaca7000c  sw          $a3, 0xC($a1)
    ctx->pc = 0x2bf8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 7));
    // 0x2bf8c8: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x2bf8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x2bf8cc: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x2bf8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
label_2bf8d0:
    // 0x2bf8d0: 0x110000b1  beqz        $t0, . + 4 + (0xB1 << 2)
    ctx->pc = 0x2BF8D0u;
    {
        const bool branch_taken_0x2bf8d0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8D0u;
        // 0x2bf8d4: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf8d0) {
            ctx->pc = 0x2BFB98u;
            goto label_2bfb98;
        }
    }
    ctx->pc = 0x2BF8D8u;
    // 0x2bf8d8: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x2bf8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x2bf8dc: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x2BF8DCu;
    {
        const bool branch_taken_0x2bf8dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8DCu;
        // 0x2bf8e0: 0xad000000  sw          $zero, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf8dc) {
            ctx->pc = 0x2BF9BCu;
            goto label_2bf9bc;
        }
    }
    ctx->pc = 0x2BF8E4u;
    // 0x2bf8e4: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2BF8E4u;
    {
        const bool branch_taken_0x2bf8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8E4u;
        // 0x2bf8e8: 0x8ca30024  lw          $v1, 0x24($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf8e4) {
            ctx->pc = 0x2BF9D0u;
            goto label_2bf9d0;
        }
    }
    ctx->pc = 0x2BF8ECu;
label_2bf8ec:
    // 0x2bf8ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BF8ECu;
    {
        const bool branch_taken_0x2bf8ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8ECu;
        // 0x2bf8f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf8ec) {
            ctx->pc = 0x2BF8FCu;
            goto label_2bf8fc;
        }
    }
    ctx->pc = 0x2BF8F4u;
    // 0x2bf8f4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2BF8F4u;
    {
        const bool branch_taken_0x2bf8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8F4u;
        // 0x2bf8f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf8f4) {
            ctx->pc = 0x2BF970u;
            goto label_2bf970;
        }
    }
    ctx->pc = 0x2BF8FCu;
label_2bf8fc:
    // 0x2bf8fc: 0x14870003  bne         $a0, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BF8FCu;
    {
        const bool branch_taken_0x2bf8fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 7));
        ctx->pc = 0x2BF900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8FCu;
        // 0x2bf900: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf8fc) {
            ctx->pc = 0x2BF90Cu;
            goto label_2bf90c;
        }
    }
    ctx->pc = 0x2BF904u;
    // 0x2bf904: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2BF904u;
    {
        const bool branch_taken_0x2bf904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF904u;
        // 0x2bf908: 0x8ce50004  lw          $a1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf904) {
            ctx->pc = 0x2BF970u;
            goto label_2bf970;
        }
    }
    ctx->pc = 0x2BF90Cu;
label_2bf90c:
    // 0x2bf90c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2bf90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bf910: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2BF910u;
    {
        const bool branch_taken_0x2bf910 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BF914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF910u;
        // 0x2bf914: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf910) {
            ctx->pc = 0x2BF940u;
            goto label_2bf940;
        }
    }
    ctx->pc = 0x2BF918u;
    // 0x2bf918: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2bf918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bf91c: 0x0  nop
    ctx->pc = 0x2bf91cu;
    // NOP
label_2bf920:
    // 0x2bf920: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2bf920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bf924: 0x0  nop
    ctx->pc = 0x2bf924u;
    // NOP
    // 0x2bf928: 0x0  nop
    ctx->pc = 0x2bf928u;
    // NOP
    // 0x2bf92c: 0x0  nop
    ctx->pc = 0x2bf92cu;
    // NOP
    // 0x2bf930: 0x0  nop
    ctx->pc = 0x2bf930u;
    // NOP
    // 0x2bf934: 0x5462fffa  bnel        $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2BF934u;
    {
        const bool branch_taken_0x2bf934 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bf934) {
            ctx->pc = 0x2BF938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF934u;
            // 0x2bf938: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bf920;
        }
    }
    ctx->pc = 0x2BF93Cu;
    // 0x2bf93c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2bf93cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bf940:
    // 0x2bf940: 0x10e2000a  beq         $a3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2BF940u;
    {
        const bool branch_taken_0x2bf940 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BF944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF940u;
        // 0x2bf944: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf940) {
            ctx->pc = 0x2BF96Cu;
            goto label_2bf96c;
        }
    }
    ctx->pc = 0x2BF948u;
    // 0x2bf948: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2bf948u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2bf94c: 0x0  nop
    ctx->pc = 0x2bf94cu;
    // NOP
label_2bf950:
    // 0x2bf950: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bf950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf954: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2bf954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bf958: 0x0  nop
    ctx->pc = 0x2bf958u;
    // NOP
    // 0x2bf95c: 0x0  nop
    ctx->pc = 0x2bf95cu;
    // NOP
    // 0x2bf960: 0x0  nop
    ctx->pc = 0x2bf960u;
    // NOP
    // 0x2bf964: 0x5482fffa  bnel        $a0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2BF964u;
    {
        const bool branch_taken_0x2bf964 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bf964) {
            ctx->pc = 0x2BF968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF964u;
            // 0x2bf968: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bf950;
        }
    }
    ctx->pc = 0x2BF96Cu;
label_2bf96c:
    // 0x2bf96c: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x2bf96cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2bf970:
    // 0x2bf970: 0x10e0000d  beqz        $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x2BF970u;
    {
        const bool branch_taken_0x2bf970 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf970) {
            ctx->pc = 0x2BF9A8u;
            goto label_2bf9a8;
        }
    }
    ctx->pc = 0x2BF978u;
    // 0x2bf978: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x2bf978u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x2bf97c: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x2bf97cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x2bf980: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2bf980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bf984: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x2bf984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2bf988: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2bf988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2bf98c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2bf98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2bf990: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x2bf990u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x2bf994: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2bf994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2bf998: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2bf998u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2bf99c: 0xaca6000c  sw          $a2, 0xC($a1)
    ctx->pc = 0x2bf99cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 6));
    // 0x2bf9a0: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x2bf9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x2bf9a4: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x2bf9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_2bf9a8:
    // 0x2bf9a8: 0x1100007b  beqz        $t0, . + 4 + (0x7B << 2)
    ctx->pc = 0x2BF9A8u;
    {
        const bool branch_taken_0x2bf9a8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF9A8u;
        // 0x2bf9ac: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf9a8) {
            ctx->pc = 0x2BFB98u;
            goto label_2bfb98;
        }
    }
    ctx->pc = 0x2BF9B0u;
    // 0x2bf9b0: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x2bf9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x2bf9b4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BF9B4u;
    {
        const bool branch_taken_0x2bf9b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF9B4u;
        // 0x2bf9b8: 0xad000000  sw          $zero, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf9b4) {
            ctx->pc = 0x2BF9CCu;
            goto label_2bf9cc;
        }
    }
    ctx->pc = 0x2BF9BCu;
label_2bf9bc:
    // 0x2bf9bc: 0xaca80020  sw          $t0, 0x20($a1)
    ctx->pc = 0x2bf9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 8));
    // 0x2bf9c0: 0xacb2001c  sw          $s2, 0x1C($a1)
    ctx->pc = 0x2bf9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 18));
    // 0x2bf9c4: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x2BF9C4u;
    {
        const bool branch_taken_0x2bf9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF9C4u;
        // 0x2bf9c8: 0xaca80024  sw          $t0, 0x24($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf9c4) {
            ctx->pc = 0x2BFB94u;
            goto label_2bfb94;
        }
    }
    ctx->pc = 0x2BF9CCu;
label_2bf9cc:
    // 0x2bf9cc: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x2bf9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_2bf9d0:
    // 0x2bf9d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2bf9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2bf9d4: 0xaca2001c  sw          $v0, 0x1C($a1)
    ctx->pc = 0x2bf9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
    // 0x2bf9d8: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x2bf9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x2bf9dc: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x2BF9DCu;
    {
        const bool branch_taken_0x2bf9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF9DCu;
        // 0x2bf9e0: 0xaca80024  sw          $t0, 0x24($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf9dc) {
            ctx->pc = 0x2BFB94u;
            goto label_2bfb94;
        }
    }
    ctx->pc = 0x2BF9E4u;
label_2bf9e4:
    // 0x2bf9e4: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2BF9E4u;
    {
        const bool branch_taken_0x2bf9e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF9E4u;
        // 0x2bf9e8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf9e4) {
            ctx->pc = 0x2BFA80u;
            goto label_2bfa80;
        }
    }
    ctx->pc = 0x2BF9ECu;
    // 0x2bf9ec: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2bf9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2bf9f0: 0x541818  mult        $v1, $v0, $s4
    ctx->pc = 0x2bf9f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2bf9f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2bf9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2bf9f8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2bf9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2bf9fc: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2bf9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2bfa00: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2bfa00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2bfa04: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BFA04u;
    {
        const bool branch_taken_0x2bfa04 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFA04u;
        // 0x2bfa08: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfa04) {
            ctx->pc = 0x2BFA14u;
            goto label_2bfa14;
        }
    }
    ctx->pc = 0x2BFA0Cu;
    // 0x2bfa0c: 0x54e60008  bnel        $a3, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BFA0Cu;
    {
        const bool branch_taken_0x2bfa0c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x2bfa0c) {
            ctx->pc = 0x2BFA10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BFA0Cu;
            // 0x2bfa10: 0xace70000  sw          $a3, 0x0($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BFA30u;
            goto label_2bfa30;
        }
    }
    ctx->pc = 0x2BFA14u;
label_2bfa14:
    // 0x2bfa14: 0xace70000  sw          $a3, 0x0($a3)
    ctx->pc = 0x2bfa14u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 7));
    // 0x2bfa18: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x2bfa18u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x2bfa1c: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x2bfa1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x2bfa20: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x2bfa20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x2bfa24: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x2bfa24u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x2bfa28: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2BFA28u;
    {
        const bool branch_taken_0x2bfa28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFA28u;
        // 0x2bfa2c: 0xac67000c  sw          $a3, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfa28) {
            ctx->pc = 0x2BFA60u;
            goto label_2bfa60;
        }
    }
    ctx->pc = 0x2BFA30u;
label_2bfa30:
    // 0x2bfa30: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x2bfa30u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x2bfa34: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BFA34u;
    {
        const bool branch_taken_0x2bfa34 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BFA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFA34u;
        // 0x2bfa38: 0xace60008  sw          $a2, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfa34) {
            ctx->pc = 0x2BFA44u;
            goto label_2bfa44;
        }
    }
    ctx->pc = 0x2BFA3Cu;
    // 0x2bfa3c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2BFA3Cu;
    {
        const bool branch_taken_0x2bfa3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFA3Cu;
        // 0x2bfa40: 0xacc60000  sw          $a2, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfa3c) {
            ctx->pc = 0x2BFA48u;
            goto label_2bfa48;
        }
    }
    ctx->pc = 0x2BFA44u;
label_2bfa44:
    // 0x2bfa44: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x2bfa44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
label_2bfa48:
    // 0x2bfa48: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x2bfa48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x2bfa4c: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x2bfa4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x2bfa50: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x2bfa50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x2bfa54: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x2bfa54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2bfa58: 0xac760004  sw          $s6, 0x4($v1)
    ctx->pc = 0x2bfa58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 22));
    // 0x2bfa5c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x2bfa5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_2bfa60:
    // 0x2bfa60: 0x1100004c  beqz        $t0, . + 4 + (0x4C << 2)
    ctx->pc = 0x2BFA60u;
    {
        const bool branch_taken_0x2bfa60 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFA60u;
        // 0x2bfa64: 0x25300001  addiu       $s0, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfa60) {
            ctx->pc = 0x2BFB94u;
            goto label_2bfb94;
        }
    }
    ctx->pc = 0x2BFA68u;
    // 0x2bfa68: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x2bfa68u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x2bfa6c: 0xac680020  sw          $t0, 0x20($v1)
    ctx->pc = 0x2bfa6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 8));
    // 0x2bfa70: 0xac72001c  sw          $s2, 0x1C($v1)
    ctx->pc = 0x2bfa70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 18));
    // 0x2bfa74: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x2bfa74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x2bfa78: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x2BFA78u;
    {
        const bool branch_taken_0x2bfa78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFA78u;
        // 0x2bfa7c: 0xac680024  sw          $t0, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfa78) {
            ctx->pc = 0x2BFB94u;
            goto label_2bfb94;
        }
    }
    ctx->pc = 0x2BFA80u;
label_2bfa80:
    // 0x2bfa80: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2bfa80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2bfa84: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2BFA84u;
    {
        const bool branch_taken_0x2bfa84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFA84u;
        // 0x2bfa88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfa84) {
            ctx->pc = 0x2BFB00u;
            goto label_2bfb00;
        }
    }
    ctx->pc = 0x2BFA8Cu;
    // 0x2bfa8c: 0x14470003  bne         $v0, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BFA8Cu;
    {
        const bool branch_taken_0x2bfa8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x2BFA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFA8Cu;
        // 0x2bfa90: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfa8c) {
            ctx->pc = 0x2BFA9Cu;
            goto label_2bfa9c;
        }
    }
    ctx->pc = 0x2BFA94u;
    // 0x2bfa94: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2BFA94u;
    {
        const bool branch_taken_0x2bfa94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFA94u;
        // 0x2bfa98: 0x8ce50004  lw          $a1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfa94) {
            ctx->pc = 0x2BFB00u;
            goto label_2bfb00;
        }
    }
    ctx->pc = 0x2BFA9Cu;
label_2bfa9c:
    // 0x2bfa9c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2bfa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bfaa0: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2BFAA0u;
    {
        const bool branch_taken_0x2bfaa0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BFAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFAA0u;
        // 0x2bfaa4: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfaa0) {
            ctx->pc = 0x2BFAD0u;
            goto label_2bfad0;
        }
    }
    ctx->pc = 0x2BFAA8u;
    // 0x2bfaa8: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2bfaa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bfaac: 0x0  nop
    ctx->pc = 0x2bfaacu;
    // NOP
label_2bfab0:
    // 0x2bfab0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2bfab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bfab4: 0x0  nop
    ctx->pc = 0x2bfab4u;
    // NOP
    // 0x2bfab8: 0x0  nop
    ctx->pc = 0x2bfab8u;
    // NOP
    // 0x2bfabc: 0x0  nop
    ctx->pc = 0x2bfabcu;
    // NOP
    // 0x2bfac0: 0x0  nop
    ctx->pc = 0x2bfac0u;
    // NOP
    // 0x2bfac4: 0x54a2fffa  bnel        $a1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2BFAC4u;
    {
        const bool branch_taken_0x2bfac4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bfac4) {
            ctx->pc = 0x2BFAC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BFAC4u;
            // 0x2bfac8: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BFAB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bfab0;
        }
    }
    ctx->pc = 0x2BFACCu;
    // 0x2bfacc: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x2bfaccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2bfad0:
    // 0x2bfad0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2bfad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bfad4: 0x5043000a  beql        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2BFAD4u;
    {
        const bool branch_taken_0x2bfad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2bfad4) {
            ctx->pc = 0x2BFAD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BFAD4u;
            // 0x2bfad8: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BFB00u;
            goto label_2bfb00;
        }
    }
    ctx->pc = 0x2BFADCu;
    // 0x2bfadc: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2bfadcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_2bfae0:
    // 0x2bfae0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2bfae0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfae4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2bfae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bfae8: 0x0  nop
    ctx->pc = 0x2bfae8u;
    // NOP
    // 0x2bfaec: 0x0  nop
    ctx->pc = 0x2bfaecu;
    // NOP
    // 0x2bfaf0: 0x0  nop
    ctx->pc = 0x2bfaf0u;
    // NOP
    // 0x2bfaf4: 0x5443fffa  bnel        $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2BFAF4u;
    {
        const bool branch_taken_0x2bfaf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2bfaf4) {
            ctx->pc = 0x2BFAF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BFAF4u;
            // 0x2bfaf8: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BFAE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bfae0;
        }
    }
    ctx->pc = 0x2BFAFCu;
    // 0x2bfafc: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x2bfafcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2bfb00:
    // 0x2bfb00: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2bfb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2bfb04: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BFB04u;
    {
        const bool branch_taken_0x2bfb04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bfb04) {
            ctx->pc = 0x2BFB14u;
            goto label_2bfb14;
        }
    }
    ctx->pc = 0x2BFB0Cu;
    // 0x2bfb0c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2BFB0Cu;
    {
        const bool branch_taken_0x2bfb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFB0Cu;
        // 0x2bfb10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfb0c) {
            ctx->pc = 0x2BFB88u;
            goto label_2bfb88;
        }
    }
    ctx->pc = 0x2BFB14u;
label_2bfb14:
    // 0x2bfb14: 0x14460003  bne         $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BFB14u;
    {
        const bool branch_taken_0x2bfb14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x2BFB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFB14u;
        // 0x2bfb18: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfb14) {
            ctx->pc = 0x2BFB24u;
            goto label_2bfb24;
        }
    }
    ctx->pc = 0x2BFB1Cu;
    // 0x2bfb1c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2BFB1Cu;
    {
        const bool branch_taken_0x2bfb1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFB1Cu;
        // 0x2bfb20: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfb1c) {
            ctx->pc = 0x2BFB88u;
            goto label_2bfb88;
        }
    }
    ctx->pc = 0x2BFB24u;
label_2bfb24:
    // 0x2bfb24: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2bfb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bfb28: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2BFB28u;
    {
        const bool branch_taken_0x2bfb28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BFB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFB28u;
        // 0x2bfb2c: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfb28) {
            ctx->pc = 0x2BFB58u;
            goto label_2bfb58;
        }
    }
    ctx->pc = 0x2BFB30u;
    // 0x2bfb30: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2bfb30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bfb34: 0x0  nop
    ctx->pc = 0x2bfb34u;
    // NOP
label_2bfb38:
    // 0x2bfb38: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2bfb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bfb3c: 0x0  nop
    ctx->pc = 0x2bfb3cu;
    // NOP
    // 0x2bfb40: 0x0  nop
    ctx->pc = 0x2bfb40u;
    // NOP
    // 0x2bfb44: 0x0  nop
    ctx->pc = 0x2bfb44u;
    // NOP
    // 0x2bfb48: 0x0  nop
    ctx->pc = 0x2bfb48u;
    // NOP
    // 0x2bfb4c: 0x5462fffa  bnel        $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2BFB4Cu;
    {
        const bool branch_taken_0x2bfb4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bfb4c) {
            ctx->pc = 0x2BFB50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BFB4Cu;
            // 0x2bfb50: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BFB38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bfb38;
        }
    }
    ctx->pc = 0x2BFB54u;
    // 0x2bfb54: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2bfb54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2bfb58:
    // 0x2bfb58: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2bfb58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bfb5c: 0x5044000a  beql        $v0, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2BFB5Cu;
    {
        const bool branch_taken_0x2bfb5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2bfb5c) {
            ctx->pc = 0x2BFB60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BFB5Cu;
            // 0x2bfb60: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BFB88u;
            goto label_2bfb88;
        }
    }
    ctx->pc = 0x2BFB64u;
    // 0x2bfb64: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2bfb64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2bfb68:
    // 0x2bfb68: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2bfb68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfb6c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2bfb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bfb70: 0x0  nop
    ctx->pc = 0x2bfb70u;
    // NOP
    // 0x2bfb74: 0x0  nop
    ctx->pc = 0x2bfb74u;
    // NOP
    // 0x2bfb78: 0x0  nop
    ctx->pc = 0x2bfb78u;
    // NOP
    // 0x2bfb7c: 0x5444fffa  bnel        $v0, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2BFB7Cu;
    {
        const bool branch_taken_0x2bfb7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2bfb7c) {
            ctx->pc = 0x2BFB80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BFB7Cu;
            // 0x2bfb80: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BFB68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bfb68;
        }
    }
    ctx->pc = 0x2BFB84u;
    // 0x2bfb84: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x2bfb84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2bfb88:
    // 0x2bfb88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bfb88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfb8c: 0xc0afb5a  jal         func_2BED68
    ctx->pc = 0x2BFB8Cu;
    SET_GPR_U32(ctx, 31, 0x2BFB94u);
    ctx->pc = 0x2BFB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFB8Cu;
    // 0x2bfb90: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BED68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2BED68u, 0x2BFB8Cu, 0x2BFB94u)) {
        return;
    }
    ctx->pc = 0x2BFB94u;
label_2bfb94:
    // 0x2bfb94: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2bfb94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bfb98:
    // 0x2bfb98: 0x13e102b  sltu        $v0, $t1, $fp
    ctx->pc = 0x2bfb98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x2bfb9c: 0x1440fe94  bnez        $v0, . + 4 + (-0x16C << 2)
    ctx->pc = 0x2BFB9Cu;
    {
        const bool branch_taken_0x2bfb9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BFBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFB9Cu;
        // 0x2bfba0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfb9c) {
            ctx->pc = 0x2BF5F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bf5f0;
        }
    }
    ctx->pc = 0x2BFBA4u;
label_2bfba4:
    // 0x2bfba4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2bfba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2bfba8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2bfba8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2bfbac: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2bfbacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2bfbb0: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2bfbb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bfbb4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2bfbb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bfbb8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2bfbb8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bfbbc: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x2bfbbcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bfbc0: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x2bfbc0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bfbc4: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x2bfbc4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bfbc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bfbc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bfbcc: 0x3e00008  jr          $ra
    ctx->pc = 0x2BFBCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BFBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFBCCu;
        // 0x2bfbd0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BFBCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BFBD4u;
    // 0x2bfbd4: 0x0  nop
    ctx->pc = 0x2bfbd4u;
    // NOP
    ctx->pc = 0x2bfbd8u;
}
