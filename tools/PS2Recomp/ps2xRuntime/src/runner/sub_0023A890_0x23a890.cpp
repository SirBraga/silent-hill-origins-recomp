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

// Function: sub_0023A890
// Address: 0x23a890 - 0x23a9f8
void sub_0023A890_0x23a890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A890_0x23a890");
#endif

    switch (ctx->pc) {
        case 0x23a8d0u: goto label_23a8d0;
        case 0x23a8e8u: goto label_23a8e8;
        case 0x23a910u: goto label_23a910;
        case 0x23a988u: goto label_23a988;
        case 0x23a9a8u: goto label_23a9a8;
        case 0x23a9c0u: goto label_23a9c0;
        default: break;
    }

    ctx->pc = 0x23a890u;

    // 0x23a890: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23a890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23a894: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23a894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a898: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x23a898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x23a89c: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x23a89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x23a8a0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x23a8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x23a8a4: 0x24423c90  addiu       $v0, $v0, 0x3C90
    ctx->pc = 0x23a8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15504));
    // 0x23a8a8: 0xa3838434  sb          $v1, -0x7BCC($gp)
    ctx->pc = 0x23a8a8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935604), (uint8_t)GPR_U32(ctx, 3));
    // 0x23a8ac: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x23a8acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a8b0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x23a8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x23a8b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23a8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23a8b8: 0x8c47002c  lw          $a3, 0x2C($v0)
    ctx->pc = 0x23a8b8u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x703CBCu));
    // 0x23a8bc: 0x8c460020  lw          $a2, 0x20($v0)
    ctx->pc = 0x23a8bcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x703CB0u));
    // 0x23a8c0: 0x8c45001c  lw          $a1, 0x1C($v0)
    ctx->pc = 0x23a8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x703CACu));
    // 0x23a8c4: 0x34e70002  ori         $a3, $a3, 0x2
    ctx->pc = 0x23a8c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)2);
    // 0x23a8c8: 0xc08a1b0  jal         func_2286C0
    ctx->pc = 0x23A8C8u;
    SET_GPR_U32(ctx, 31, 0x23A8D0u);
    ctx->pc = 0x23A8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A8C8u;
    // 0x23a8cc: 0x8c440018  lw          $a0, 0x18($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2286C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2286C0u, 0x23A8C8u, 0x23A8D0u)) {
        return;
    }
    ctx->pc = 0x23A8D0u;
label_23a8d0:
    // 0x23a8d0: 0xa3808434  sb          $zero, -0x7BCC($gp)
    ctx->pc = 0x23a8d0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935604), (uint8_t)GPR_U32(ctx, 0));
    // 0x23a8d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23a8d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a8d8: 0x24020085  addiu       $v0, $zero, 0x85
    ctx->pc = 0x23a8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
    // 0x23a8dc: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x23a8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x23a8e0: 0xc08c0c4  jal         func_230310
    ctx->pc = 0x23A8E0u;
    SET_GPR_U32(ctx, 31, 0x23A8E8u);
    ctx->pc = 0x23A8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A8E0u;
    // 0x23a8e4: 0xa2220020  sb          $v0, 0x20($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 32), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x230310u, 0x23A8E0u, 0x23A8E8u)) {
        return;
    }
    ctx->pc = 0x23A8E8u;
label_23a8e8:
    // 0x23a8e8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x23a8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x23a8ec: 0x521004  sllv        $v0, $s2, $v0
    ctx->pc = 0x23a8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 2) & 0x1F));
    // 0x23a8f0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23a8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23a8f4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x23a8f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x23a8f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23A8F8u;
    {
        const bool branch_taken_0x23a8f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A8F8u;
        // 0x23a8fc: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a8f8) {
            ctx->pc = 0x23A908u;
            goto label_23a908;
        }
    }
    ctx->pc = 0x23A900u;
    // 0x23a900: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x23a900u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x23a904: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x23a904u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_23a908:
    // 0x23a908: 0xc08c0c4  jal         func_230310
    ctx->pc = 0x23A908u;
    SET_GPR_U32(ctx, 31, 0x23A910u);
    ctx->pc = 0x23A90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A908u;
    // 0x23a90c: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x230310u, 0x23A908u, 0x23A910u)) {
        return;
    }
    ctx->pc = 0x23A910u;
label_23a910:
    // 0x23a910: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x23a910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x23a914: 0x521004  sllv        $v0, $s2, $v0
    ctx->pc = 0x23a914u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 2) & 0x1F));
    // 0x23a918: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23a918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23a91c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x23a91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x23a920: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23A920u;
    {
        const bool branch_taken_0x23a920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A920u;
        // 0x23a924: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a920) {
            ctx->pc = 0x23A930u;
            goto label_23a930;
        }
    }
    ctx->pc = 0x23A928u;
    // 0x23a928: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x23a928u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x23a92c: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x23a92cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_23a930:
    // 0x23a930: 0x3c10006b  lui         $s0, 0x6B
    ctx->pc = 0x23a930u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)107 << 16));
    // 0x23a934: 0x8e10416c  lw          $s0, 0x416C($s0)
    ctx->pc = 0x23a934u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x6B416Cu));
    // 0x23a938: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x23a938u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x23a93c: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x23a93cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x23a940: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x23a940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x23a944: 0xdc8350d0  ld          $v1, 0x50D0($a0)
    ctx->pc = 0x23a944u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x7350D0u));
    // 0x23a948: 0x31a7b  dsra        $v1, $v1, 9
    ctx->pc = 0x23a948u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 9);
    // 0x23a94c: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x23a94cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x23a950: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x23a950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x23a954: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x23a954u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x23a958: 0x31b80  sll         $v1, $v1, 14
    ctx->pc = 0x23a958u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 14));
    // 0x23a95c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x23a95cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x23a960: 0xdc8250d0  ld          $v0, 0x50D0($a0)
    ctx->pc = 0x23a960u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 20688)));
    // 0x23a964: 0x213fb  dsra        $v0, $v0, 15
    ctx->pc = 0x23a964u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 15);
    // 0x23a968: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x23a968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x23a96c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23a96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23a970: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x23a970u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x23a974: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x23a974u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x23a978: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x23a978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x23a97c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x23a97cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x23a980: 0xc08c0c4  jal         func_230310
    ctx->pc = 0x23A980u;
    SET_GPR_U32(ctx, 31, 0x23A988u);
    ctx->pc = 0x23A984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A980u;
    // 0x23a984: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x230310u, 0x23A980u, 0x23A988u)) {
        return;
    }
    ctx->pc = 0x23A988u;
label_23a988:
    // 0x23a988: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x23a988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x23a98c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23a98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x23a990: 0x21680  sll         $v0, $v0, 26
    ctx->pc = 0x23a990u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 26));
    // 0x23a994: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x23a994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x23a998: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x23a998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x23a99c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x23a99cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x23a9a0: 0xc08c0c4  jal         func_230310
    ctx->pc = 0x23A9A0u;
    SET_GPR_U32(ctx, 31, 0x23A9A8u);
    ctx->pc = 0x23A9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A9A0u;
    // 0x23a9a4: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x230310u, 0x23A9A0u, 0x23A9A8u)) {
        return;
    }
    ctx->pc = 0x23A9A8u;
label_23a9a8:
    // 0x23a9a8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x23a9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x23a9ac: 0x21780  sll         $v0, $v0, 30
    ctx->pc = 0x23a9acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 30));
    // 0x23a9b0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x23a9b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x23a9b4: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x23a9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x23a9b8: 0xc08c0c4  jal         func_230310
    ctx->pc = 0x23A9B8u;
    SET_GPR_U32(ctx, 31, 0x23A9C0u);
    ctx->pc = 0x23A9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A9B8u;
    // 0x23a9bc: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x230310u, 0x23A9B8u, 0x23A9C0u)) {
        return;
    }
    ctx->pc = 0x23A9C0u;
label_23a9c0:
    // 0x23a9c0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x23a9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x23a9c4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23a9c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x23a9c8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x23a9c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x23a9cc: 0xa2120017  sb          $s2, 0x17($s0)
    ctx->pc = 0x23a9ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 23), (uint8_t)GPR_U32(ctx, 18));
    // 0x23a9d0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x23a9d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x23a9d4: 0xa2000016  sb          $zero, 0x16($s0)
    ctx->pc = 0x23a9d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 22), (uint8_t)GPR_U32(ctx, 0));
    // 0x23a9d8: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x23a9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x23a9dc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x23a9dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a9e0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x23a9e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23a9e4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x23a9e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23a9e8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x23a9e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23a9ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23a9ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a9f0: 0x3e00008  jr          $ra
    ctx->pc = 0x23A9F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A9F0u;
        // 0x23a9f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A9F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A9F8u;
}
