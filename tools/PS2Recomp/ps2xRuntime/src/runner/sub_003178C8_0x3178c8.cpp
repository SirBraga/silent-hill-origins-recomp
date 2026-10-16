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

// Function: sub_003178C8
// Address: 0x3178c8 - 0x317e88
void sub_003178C8_0x3178c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003178C8_0x3178c8");
#endif

    switch (ctx->pc) {
        case 0x3179acu: goto label_3179ac;
        case 0x3179e8u: goto label_3179e8;
        case 0x317a04u: goto label_317a04;
        case 0x317a14u: goto label_317a14;
        case 0x317a24u: goto label_317a24;
        case 0x317a30u: goto label_317a30;
        case 0x317a48u: goto label_317a48;
        case 0x317a50u: goto label_317a50;
        case 0x317a68u: goto label_317a68;
        case 0x317a78u: goto label_317a78;
        case 0x317a9cu: goto label_317a9c;
        case 0x317ab0u: goto label_317ab0;
        case 0x317ad0u: goto label_317ad0;
        case 0x317b18u: goto label_317b18;
        case 0x317b20u: goto label_317b20;
        case 0x317b30u: goto label_317b30;
        case 0x317b44u: goto label_317b44;
        case 0x317b68u: goto label_317b68;
        case 0x317b98u: goto label_317b98;
        case 0x317bf0u: goto label_317bf0;
        case 0x317bfcu: goto label_317bfc;
        case 0x317c08u: goto label_317c08;
        case 0x317c14u: goto label_317c14;
        case 0x317c20u: goto label_317c20;
        case 0x317c30u: goto label_317c30;
        case 0x317c48u: goto label_317c48;
        case 0x317c60u: goto label_317c60;
        case 0x317c6cu: goto label_317c6c;
        case 0x317c94u: goto label_317c94;
        case 0x317cc0u: goto label_317cc0;
        case 0x317ce4u: goto label_317ce4;
        case 0x317d30u: goto label_317d30;
        case 0x317d80u: goto label_317d80;
        case 0x317e40u: goto label_317e40;
        default: break;
    }

    ctx->pc = 0x3178c8u;

    // 0x3178c8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3178c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x3178cc: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x3178ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x3178d0: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3178d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x3178d4: 0x63603  sra         $a2, $a2, 24
    ctx->pc = 0x3178d4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 24));
    // 0x3178d8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3178d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x3178dc: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x3178dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x3178e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3178e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3178e4: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x3178e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x3178e8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3178e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x3178ec: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x3178ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x3178f0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3178f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x3178f4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3178f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3178f8: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x3178f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x3178fc: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x3178fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x317900: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x317900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x317904: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x317904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x317908: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x317908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x31790c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x31790cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317910: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x317910u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x317914: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x317914u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x317918: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x317918u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x31791c: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x31791cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x317920: 0x22502  srl         $a0, $v0, 20
    ctx->pc = 0x317920u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
    // 0x317924: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x317924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x317928: 0x30850800  andi        $a1, $a0, 0x800
    ctx->pc = 0x317928u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2048);
    // 0x31792c: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x31792cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x317930: 0x308407ff  andi        $a0, $a0, 0x7FF
    ctx->pc = 0x317930u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2047);
    // 0x317934: 0x240207ff  addiu       $v0, $zero, 0x7FF
    ctx->pc = 0x317934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x317938: 0x14820017  bne         $a0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x317938u;
    {
        const bool branch_taken_0x317938 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x31793Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317938u;
        // 0x31793c: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317938) {
            ctx->pc = 0x317998u;
            goto label_317998;
        }
    }
    ctx->pc = 0x317940u;
    // 0x317940: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x317940u;
    {
        const bool branch_taken_0x317940 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x317944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317940u;
        // 0x317944: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317940) {
            ctx->pc = 0x317988u;
            goto label_317988;
        }
    }
    ctx->pc = 0x317948u;
    // 0x317948: 0x14c00010  bnez        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x317948u;
    {
        const bool branch_taken_0x317948 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x31794Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317948u;
        // 0x31794c: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317948) {
            ctx->pc = 0x31798Cu;
            goto label_31798c;
        }
    }
    ctx->pc = 0x317950u;
    // 0x317950: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x317950u;
    {
        const bool branch_taken_0x317950 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x317954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317950u;
        // 0x317954: 0x3c03006b  lui         $v1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317950) {
            ctx->pc = 0x317978u;
            goto label_317978;
        }
    }
    ctx->pc = 0x317958u;
    // 0x317958: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x317958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x31795c: 0x8c651860  lw          $a1, 0x1860($v1)
    ctx->pc = 0x31795cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6240)));
    // 0x317960: 0x24641860  addiu       $a0, $v1, 0x1860
    ctx->pc = 0x317960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6240));
    // 0x317964: 0x90860004  lbu         $a2, 0x4($a0)
    ctx->pc = 0x317964u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x317968: 0x24438f40  addiu       $v1, $v0, -0x70C0
    ctx->pc = 0x317968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938432));
    // 0x31796c: 0xac458f40  sw          $a1, -0x70C0($v0)
    ctx->pc = 0x31796cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x728F40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x728F40u, _value); } while (0);
    // 0x317970: 0x10000136  b           . + 4 + (0x136 << 2)
    ctx->pc = 0x317970u;
    {
        const bool branch_taken_0x317970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317970u;
        // 0x317974: 0xa0660004  sb          $a2, 0x4($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317970) {
            ctx->pc = 0x317E4Cu;
            goto label_317e4c;
        }
    }
    ctx->pc = 0x317978u;
label_317978:
    // 0x317978: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x317978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x31797c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x31797cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x317980: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x317980u;
    {
        const bool branch_taken_0x317980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317980u;
        // 0x317984: 0x8c441868  lw          $a0, 0x1868($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317980) {
            ctx->pc = 0x317990u;
            goto label_317990;
        }
    }
    ctx->pc = 0x317988u;
label_317988:
    // 0x317988: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x317988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_31798c:
    // 0x31798c: 0x8c441870  lw          $a0, 0x1870($v0)
    ctx->pc = 0x31798cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6256)));
label_317990:
    // 0x317990: 0x1000012e  b           . + 4 + (0x12E << 2)
    ctx->pc = 0x317990u;
    {
        const bool branch_taken_0x317990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317990u;
        // 0x317994: 0xac648f40  sw          $a0, -0x70C0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294938432), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317990) {
            ctx->pc = 0x317E4Cu;
            goto label_317e4c;
        }
    }
    ctx->pc = 0x317998u;
label_317998:
    // 0x317998: 0x8fb50000  lw          $s5, 0x0($sp)
    ctx->pc = 0x317998u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31799c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x31799cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3179a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3179a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3179a4: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x3179A4u;
    SET_GPR_U32(ctx, 31, 0x3179ACu);
    ctx->pc = 0x3179A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3179A4u;
    // 0x3179a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x3179A4u, 0x3179ACu)) {
        return;
    }
    ctx->pc = 0x3179ACu;
label_3179ac:
    // 0x3179ac: 0x4410010  bgez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3179ACu;
    {
        const bool branch_taken_0x3179ac = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x3179B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3179ACu;
        // 0x3179b0: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3179ac) {
            ctx->pc = 0x3179F0u;
            goto label_3179f0;
        }
    }
    ctx->pc = 0x3179B4u;
    // 0x3179b4: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3179B4u;
    {
        const bool branch_taken_0x3179b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3179B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3179B4u;
        // 0x3179b8: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3179b4) {
            ctx->pc = 0x3179CCu;
            goto label_3179cc;
        }
    }
    ctx->pc = 0x3179BCu;
    // 0x3179bc: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x3179bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x3179c0: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x3179c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3179c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3179C4u;
    {
        const bool branch_taken_0x3179c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3179C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3179C4u;
        // 0x3179c8: 0x24768f40  addiu       $s6, $v1, -0x70C0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3179c4) {
            ctx->pc = 0x3179DCu;
            goto label_3179dc;
        }
    }
    ctx->pc = 0x3179CCu;
label_3179cc:
    // 0x3179cc: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x3179ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x3179d0: 0x24448f40  addiu       $a0, $v0, -0x70C0
    ctx->pc = 0x3179d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938432));
    // 0x3179d4: 0xa0438f40  sb          $v1, -0x70C0($v0)
    ctx->pc = 0x3179d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294938432), (uint8_t)GPR_U32(ctx, 3));
    // 0x3179d8: 0x24960001  addiu       $s6, $a0, 0x1
    ctx->pc = 0x3179d8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3179dc:
    // 0x3179dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3179dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3179e0: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x3179E0u;
    SET_GPR_U32(ctx, 31, 0x3179E8u);
    ctx->pc = 0x3179E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3179E0u;
    // 0x3179e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x3179E0u, 0x3179E8u)) {
        return;
    }
    ctx->pc = 0x3179E8u;
label_3179e8:
    // 0x3179e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3179E8u;
    {
        const bool branch_taken_0x3179e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3179ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3179E8u;
        // 0x3179ec: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3179e8) {
            ctx->pc = 0x3179F4u;
            goto label_3179f4;
        }
    }
    ctx->pc = 0x3179F0u;
label_3179f0:
    // 0x3179f0: 0x24568f40  addiu       $s6, $v0, -0x70C0
    ctx->pc = 0x3179f0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938432));
label_3179f4:
    // 0x3179f4: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x3179f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x3179f8: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x3179f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x3179fc: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x3179FCu;
    SET_GPR_U32(ctx, 31, 0x317A04u);
    ctx->pc = 0x317A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3179FCu;
    // 0x317a00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x3179FCu, 0x317A04u)) {
        return;
    }
    ctx->pc = 0x317A04u;
label_317a04:
    // 0x317a04: 0x440003d  bltz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x317A04u;
    {
        const bool branch_taken_0x317a04 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x317A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317A04u;
        // 0x317a08: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317a04) {
            ctx->pc = 0x317AFCu;
            goto label_317afc;
        }
    }
    ctx->pc = 0x317A0Cu;
    // 0x317a0c: 0xc0c79da  jal         func_31E768
    ctx->pc = 0x317A0Cu;
    SET_GPR_U32(ctx, 31, 0x317A14u);
    ctx->pc = 0x317A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317A0Cu;
    // 0x317a10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E768u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31E768u, 0x317A0Cu, 0x317A14u)) {
        return;
    }
    ctx->pc = 0x317A14u;
label_317a14:
    // 0x317a14: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x317a14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317a18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x317a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317a1c: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x317A1Cu;
    SET_GPR_U32(ctx, 31, 0x317A24u);
    ctx->pc = 0x317A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317A1Cu;
    // 0x317a20: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x317A1Cu, 0x317A24u)) {
        return;
    }
    ctx->pc = 0x317A24u;
label_317a24:
    // 0x317a24: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x317a24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317a28: 0x2a8200a3  slti        $v0, $s4, 0xA3
    ctx->pc = 0x317a28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)163) ? 1 : 0);
    // 0x317a2c: 0x0  nop
    ctx->pc = 0x317a2cu;
    // NOP
label_317a30:
    // 0x317a30: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x317A30u;
    {
        const bool branch_taken_0x317a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x317A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317A30u;
        // 0x317a34: 0x2687ffff  addiu       $a3, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317a30) {
            ctx->pc = 0x317ABCu;
            goto label_317abc;
        }
    }
    ctx->pc = 0x317A38u;
    // 0x317a38: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x317a38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x317a3c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x317a3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x317a40: 0xc0c7a56  jal         func_31E958
    ctx->pc = 0x317A40u;
    SET_GPR_U32(ctx, 31, 0x317A48u);
    ctx->pc = 0x317A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317A40u;
    // 0x317a44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E958u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31E958u, 0x317A40u, 0x317A48u)) {
        return;
    }
    ctx->pc = 0x317A48u;
label_317a48:
    // 0x317a48: 0xc07df3e  jal         func_1F7CF8
    ctx->pc = 0x317A48u;
    SET_GPR_U32(ctx, 31, 0x317A50u);
    ctx->pc = 0x317A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317A48u;
    // 0x317a4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7CF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7CF8u, 0x317A48u, 0x317A50u)) {
        return;
    }
    ctx->pc = 0x317A50u;
label_317a50:
    // 0x317a50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x317a50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317a54: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x317a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x317a58: 0x2d41021  addu        $v0, $s6, $s4
    ctx->pc = 0x317a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x317a5c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x317a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x317a60: 0xc07df10  jal         func_1F7C40
    ctx->pc = 0x317A60u;
    SET_GPR_U32(ctx, 31, 0x317A68u);
    ctx->pc = 0x317A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317A60u;
    // 0x317a64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7C40u, 0x317A60u, 0x317A68u)) {
        return;
    }
    ctx->pc = 0x317A68u;
label_317a68:
    // 0x317a68: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x317a68u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x317a6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x317a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317a70: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x317A70u;
    SET_GPR_U32(ctx, 31, 0x317A78u);
    ctx->pc = 0x317A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317A70u;
    // 0x317a74: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x317A70u, 0x317A78u)) {
        return;
    }
    ctx->pc = 0x317A78u;
label_317a78:
    // 0x317a78: 0x3405fee6  ori         $a1, $zero, 0xFEE6
    ctx->pc = 0x317a78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65254);
    // 0x317a7c: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x317a7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x317a80: 0x34a5cccc  ori         $a1, $a1, 0xCCCC
    ctx->pc = 0x317a80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52428);
    // 0x317a84: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x317a84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x317a88: 0x34a5cccc  ori         $a1, $a1, 0xCCCC
    ctx->pc = 0x317a88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52428);
    // 0x317a8c: 0x52b78  dsll        $a1, $a1, 13
    ctx->pc = 0x317a8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 13);
    // 0x317a90: 0x34a5199a  ori         $a1, $a1, 0x199A
    ctx->pc = 0x317a90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6554);
    // 0x317a94: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x317A94u;
    SET_GPR_U32(ctx, 31, 0x317A9Cu);
    ctx->pc = 0x317A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317A94u;
    // 0x317a98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x317A94u, 0x317A9Cu)) {
        return;
    }
    ctx->pc = 0x317A9Cu;
label_317a9c:
    // 0x317a9c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x317a9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317aa0: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x317aa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x317aa4: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x317aa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x317aa8: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x317AA8u;
    SET_GPR_U32(ctx, 31, 0x317AB0u);
    ctx->pc = 0x317AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317AA8u;
    // 0x317aac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x317AA8u, 0x317AB0u)) {
        return;
    }
    ctx->pc = 0x317AB0u;
label_317ab0:
    // 0x317ab0: 0x441ffdf  bgez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x317AB0u;
    {
        const bool branch_taken_0x317ab0 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x317AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317AB0u;
        // 0x317ab4: 0x2a8200a3  slti        $v0, $s4, 0xA3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)163) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x317ab0) {
            ctx->pc = 0x317A30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317a30;
        }
    }
    ctx->pc = 0x317AB8u;
    // 0x317ab8: 0x2687ffff  addiu       $a3, $s4, -0x1
    ctx->pc = 0x317ab8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_317abc:
    // 0x317abc: 0x18e0000e  blez        $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x317ABCu;
    {
        const bool branch_taken_0x317abc = (GPR_S64(ctx, 7) <= 0);
        ctx->pc = 0x317AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317ABCu;
        // 0x317ac0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317abc) {
            ctx->pc = 0x317AF8u;
            goto label_317af8;
        }
    }
    ctx->pc = 0x317AC4u;
    // 0x317ac4: 0xf63021  addu        $a2, $a3, $s6
    ctx->pc = 0x317ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 22)));
    // 0x317ac8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x317ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317acc: 0x0  nop
    ctx->pc = 0x317accu;
    // NOP
label_317ad0:
    // 0x317ad0: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x317ad0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x317ad4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x317ad4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x317ad8: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x317ad8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x317adc: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x317adcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x317ae0: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x317ae0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x317ae4: 0x207202a  slt         $a0, $s0, $a3
    ctx->pc = 0x317ae4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x317ae8: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x317ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x317aec: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x317aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x317af0: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x317AF0u;
    {
        const bool branch_taken_0x317af0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x317AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317AF0u;
        // 0x317af4: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317af0) {
            ctx->pc = 0x317AD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317ad0;
        }
    }
    ctx->pc = 0x317AF8u;
label_317af8:
    // 0x317af8: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x317af8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_317afc:
    // 0x317afc: 0x1660002b  bnez        $s3, . + 4 + (0x2B << 2)
    ctx->pc = 0x317AFCu;
    {
        const bool branch_taken_0x317afc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x317B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317AFCu;
        // 0x317b00: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317afc) {
            ctx->pc = 0x317BACu;
            goto label_317bac;
        }
    }
    ctx->pc = 0x317B04u;
    // 0x317b04: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x317b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x317b08: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x317B08u;
    {
        const bool branch_taken_0x317b08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x317B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317B08u;
        // 0x317b0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317b08) {
            ctx->pc = 0x317BA0u;
            goto label_317ba0;
        }
    }
    ctx->pc = 0x317B10u;
    // 0x317b10: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x317B10u;
    SET_GPR_U32(ctx, 31, 0x317B18u);
    ctx->pc = 0x317B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317B10u;
    // 0x317b14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x317B10u, 0x317B18u)) {
        return;
    }
    ctx->pc = 0x317B18u;
label_317b18:
    // 0x317b18: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x317B18u;
    {
        const bool branch_taken_0x317b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x317b18) {
            ctx->pc = 0x317B58u;
            goto label_317b58;
        }
    }
    ctx->pc = 0x317B20u;
label_317b20:
    // 0x317b20: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x317b20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x317b24: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x317b24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x317b28: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x317B28u;
    SET_GPR_U32(ctx, 31, 0x317B30u);
    ctx->pc = 0x317B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317B28u;
    // 0x317b2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x317B28u, 0x317B30u)) {
        return;
    }
    ctx->pc = 0x317B30u;
label_317b30:
    // 0x317b30: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x317b30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317b34: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x317b34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x317b38: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x317b38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x317b3c: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x317B3Cu;
    SET_GPR_U32(ctx, 31, 0x317B44u);
    ctx->pc = 0x317B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317B3Cu;
    // 0x317b40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x317B3Cu, 0x317B44u)) {
        return;
    }
    ctx->pc = 0x317B44u;
label_317b44:
    // 0x317b44: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x317B44u;
    {
        const bool branch_taken_0x317b44 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x317B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317B44u;
        // 0x317b48: 0x2a62fc04  slti        $v0, $s3, -0x3FC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4294966276) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x317b44) {
            ctx->pc = 0x317B54u;
            goto label_317b54;
        }
    }
    ctx->pc = 0x317B4Cu;
    // 0x317b4c: 0x5040fff4  beql        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x317B4Cu;
    {
        const bool branch_taken_0x317b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x317b4c) {
            ctx->pc = 0x317B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317B4Cu;
            // 0x317b50: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317B20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317b20;
        }
    }
    ctx->pc = 0x317B54u;
label_317b54:
    // 0x317b54: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x317b54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_317b58:
    // 0x317b58: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x317b58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x317b5c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x317b5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x317b60: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x317B60u;
    SET_GPR_U32(ctx, 31, 0x317B68u);
    ctx->pc = 0x317B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317B60u;
    // 0x317b64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x317B60u, 0x317B68u)) {
        return;
    }
    ctx->pc = 0x317B68u;
label_317b68:
    // 0x317b68: 0x4400010  bltz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x317B68u;
    {
        const bool branch_taken_0x317b68 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x317B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317B68u;
        // 0x317b6c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317b68) {
            ctx->pc = 0x317BACu;
            goto label_317bac;
        }
    }
    ctx->pc = 0x317B70u;
    // 0x317b70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x317b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317b74: 0x3405fee6  ori         $a1, $zero, 0xFEE6
    ctx->pc = 0x317b74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65254);
    // 0x317b78: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x317b78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x317b7c: 0x34a5cccc  ori         $a1, $a1, 0xCCCC
    ctx->pc = 0x317b7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52428);
    // 0x317b80: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x317b80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x317b84: 0x34a5cccc  ori         $a1, $a1, 0xCCCC
    ctx->pc = 0x317b84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52428);
    // 0x317b88: 0x52b78  dsll        $a1, $a1, 13
    ctx->pc = 0x317b88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 13);
    // 0x317b8c: 0x34a5199a  ori         $a1, $a1, 0x199A
    ctx->pc = 0x317b8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6554);
    // 0x317b90: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x317B90u;
    SET_GPR_U32(ctx, 31, 0x317B98u);
    ctx->pc = 0x317B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317B90u;
    // 0x317b94: 0x24550001  addiu       $s5, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x317B90u, 0x317B98u)) {
        return;
    }
    ctx->pc = 0x317B98u;
label_317b98:
    // 0x317b98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x317B98u;
    {
        const bool branch_taken_0x317b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317B98u;
        // 0x317b9c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317b98) {
            ctx->pc = 0x317BACu;
            goto label_317bac;
        }
    }
    ctx->pc = 0x317BA0u;
label_317ba0:
    // 0x317ba0: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x317ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x317ba4: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x317ba4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x317ba8: 0xa2c20000  sb          $v0, 0x0($s6)
    ctx->pc = 0x317ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 2));
label_317bac:
    // 0x317bac: 0x6610003  bgez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x317BACu;
    {
        const bool branch_taken_0x317bac = (GPR_S64(ctx, 19) >= 0);
        ctx->pc = 0x317BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317BACu;
        // 0x317bb0: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317bac) {
            ctx->pc = 0x317BBCu;
            goto label_317bbc;
        }
    }
    ctx->pc = 0x317BB4u;
    // 0x317bb4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x317BB4u;
    {
        const bool branch_taken_0x317bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317BB4u;
        // 0x317bb8: 0x2a0882d  daddu       $s1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317bb4) {
            ctx->pc = 0x317BD8u;
            goto label_317bd8;
        }
    }
    ctx->pc = 0x317BBCu;
label_317bbc:
    // 0x317bbc: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x317bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x317bc0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x317BC0u;
    {
        const bool branch_taken_0x317bc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x317BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317BC0u;
        // 0x317bc4: 0x26b10001  addiu       $s1, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317bc0) {
            ctx->pc = 0x317BD8u;
            goto label_317bd8;
        }
    }
    ctx->pc = 0x317BC8u;
    // 0x317bc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x317bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x317bcc: 0x13182a  slt         $v1, $zero, $s3
    ctx->pc = 0x317bccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x317bd0: 0x263100b  movn        $v0, $s3, $v1
    ctx->pc = 0x317bd0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19));
    // 0x317bd4: 0x2a28821  addu        $s1, $s5, $v0
    ctx->pc = 0x317bd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_317bd8:
    // 0x317bd8: 0x3415f240  ori         $s5, $zero, 0xF240
    ctx->pc = 0x317bd8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62016);
    // 0x317bdc: 0x15abbc  dsll32      $s5, $s5, 14
    ctx->pc = 0x317bdcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 14));
    // 0x317be0: 0x263e0001  addiu       $fp, $s1, 0x1
    ctx->pc = 0x317be0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x317be4: 0x34178048  ori         $s7, $zero, 0x8048
    ctx->pc = 0x317be4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x317be8: 0x17bbfc  dsll32      $s7, $s7, 15
    ctx->pc = 0x317be8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) << (32 + 15));
    // 0x317bec: 0x0  nop
    ctx->pc = 0x317becu;
    // NOP
label_317bf0:
    // 0x317bf0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x317bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317bf4: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x317BF4u;
    SET_GPR_U32(ctx, 31, 0x317BFCu);
    ctx->pc = 0x317BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317BF4u;
    // 0x317bf8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x317BF4u, 0x317BFCu)) {
        return;
    }
    ctx->pc = 0x317BFCu;
label_317bfc:
    // 0x317bfc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x317bfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317c00: 0xc07df3e  jal         func_1F7CF8
    ctx->pc = 0x317C00u;
    SET_GPR_U32(ctx, 31, 0x317C08u);
    ctx->pc = 0x317C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317C00u;
    // 0x317c04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7CF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7CF8u, 0x317C00u, 0x317C08u)) {
        return;
    }
    ctx->pc = 0x317C08u;
label_317c08:
    // 0x317c08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x317c08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317c0c: 0xc07df10  jal         func_1F7C40
    ctx->pc = 0x317C0Cu;
    SET_GPR_U32(ctx, 31, 0x317C14u);
    ctx->pc = 0x317C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317C0Cu;
    // 0x317c10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7C40u, 0x317C0Cu, 0x317C14u)) {
        return;
    }
    ctx->pc = 0x317C14u;
label_317c14:
    // 0x317c14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x317c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317c18: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x317C18u;
    SET_GPR_U32(ctx, 31, 0x317C20u);
    ctx->pc = 0x317C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317C18u;
    // 0x317c1c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x317C18u, 0x317C20u)) {
        return;
    }
    ctx->pc = 0x317C20u;
label_317c20:
    // 0x317c20: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x317c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317c24: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x317c24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317c28: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x317C28u;
    SET_GPR_U32(ctx, 31, 0x317C30u);
    ctx->pc = 0x317C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317C28u;
    // 0x317c2c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x317C28u, 0x317C30u)) {
        return;
    }
    ctx->pc = 0x317C30u;
label_317c30:
    // 0x317c30: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x317c30u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317c34: 0x291102a  slt         $v0, $s4, $s1
    ctx->pc = 0x317c34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x317c38: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x317C38u;
    {
        const bool branch_taken_0x317c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x317C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317C38u;
        // 0x317c3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317c38) {
            ctx->pc = 0x317C84u;
            goto label_317c84;
        }
    }
    ctx->pc = 0x317C40u;
    // 0x317c40: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x317C40u;
    SET_GPR_U32(ctx, 31, 0x317C48u);
    ctx->pc = 0x317C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317C40u;
    // 0x317c44: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x317C40u, 0x317C48u)) {
        return;
    }
    ctx->pc = 0x317C48u;
label_317c48:
    // 0x317c48: 0x440000e  bltz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x317C48u;
    {
        const bool branch_taken_0x317c48 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x317c48) {
            ctx->pc = 0x317C84u;
            goto label_317c84;
        }
    }
    ctx->pc = 0x317C50u;
    // 0x317c50: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x317c50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x317c54: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x317c54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x317c58: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x317C58u;
    SET_GPR_U32(ctx, 31, 0x317C60u);
    ctx->pc = 0x317C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317C58u;
    // 0x317c5c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x317C58u, 0x317C60u)) {
        return;
    }
    ctx->pc = 0x317C60u;
label_317c60:
    // 0x317c60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x317c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317c64: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x317C64u;
    SET_GPR_U32(ctx, 31, 0x317C6Cu);
    ctx->pc = 0x317C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317C64u;
    // 0x317c68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x317C64u, 0x317C6Cu)) {
        return;
    }
    ctx->pc = 0x317C6Cu;
label_317c6c:
    // 0x317c6c: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x317C6Cu;
    {
        const bool branch_taken_0x317c6c = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x317C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317C6Cu;
        // 0x317c70: 0x2d41021  addu        $v0, $s6, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317c6c) {
            ctx->pc = 0x317C84u;
            goto label_317c84;
        }
    }
    ctx->pc = 0x317C74u;
    // 0x317c74: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x317c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x317c78: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x317c78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x317c7c: 0x1000ffdc  b           . + 4 + (-0x24 << 2)
    ctx->pc = 0x317C7Cu;
    {
        const bool branch_taken_0x317c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317C7Cu;
        // 0x317c80: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317c7c) {
            ctx->pc = 0x317BF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317bf0;
        }
    }
    ctx->pc = 0x317C84u;
label_317c84:
    // 0x317c84: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x317c84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x317c88: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x317c88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x317c8c: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x317C8Cu;
    SET_GPR_U32(ctx, 31, 0x317C94u);
    ctx->pc = 0x317C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317C8Cu;
    // 0x317c90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x317C8Cu, 0x317C94u)) {
        return;
    }
    ctx->pc = 0x317C94u;
label_317c94:
    // 0x317c94: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x317c94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x317c98: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x317c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x317c9c: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x317c9cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3));
    // 0x317ca0: 0x2d42021  addu        $a0, $s6, $s4
    ctx->pc = 0x317ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x317ca4: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x317ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x317ca8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x317ca8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x317cac: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x317cacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x317cb0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x317CB0u;
    {
        const bool branch_taken_0x317cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x317CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317CB0u;
        // 0x317cb4: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317cb0) {
            ctx->pc = 0x317CD8u;
            goto label_317cd8;
        }
    }
    ctx->pc = 0x317CB8u;
    // 0x317cb8: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x317cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x317cbc: 0x0  nop
    ctx->pc = 0x317cbcu;
    // NOP
label_317cc0:
    // 0x317cc0: 0x2d41821  addu        $v1, $s6, $s4
    ctx->pc = 0x317cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x317cc4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x317cc4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x317cc8: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x317cc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x317ccc: 0x0  nop
    ctx->pc = 0x317cccu;
    // NOP
    // 0x317cd0: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x317CD0u;
    {
        const bool branch_taken_0x317cd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x317CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317CD0u;
        // 0x317cd4: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317cd0) {
            ctx->pc = 0x317CC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317cc0;
        }
    }
    ctx->pc = 0x317CD8u;
label_317cd8:
    // 0x317cd8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x317cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317cdc: 0xc0c5dd0  jal         func_317740
    ctx->pc = 0x317CDCu;
    SET_GPR_U32(ctx, 31, 0x317CE4u);
    ctx->pc = 0x317CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317CDCu;
    // 0x317ce0: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317740u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317740u, 0x317CDCu, 0x317CE4u)) {
        return;
    }
    ctx->pc = 0x317CE4u;
label_317ce4:
    // 0x317ce4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x317CE4u;
    {
        const bool branch_taken_0x317ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x317CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317CE4u;
        // 0x317ce8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317ce4) {
            ctx->pc = 0x317D00u;
            goto label_317d00;
        }
    }
    ctx->pc = 0x317CECu;
    // 0x317cec: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x317cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x317cf0: 0x3c0882d  daddu       $s1, $fp, $zero
    ctx->pc = 0x317cf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317cf4: 0xa2c20000  sb          $v0, 0x0($s6)
    ctx->pc = 0x317cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x317cf8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x317cf8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x317cfc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x317cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_317d00:
    // 0x317d00: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x317D00u;
    {
        const bool branch_taken_0x317d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x317D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317D00u;
        // 0x317d04: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317d00) {
            ctx->pc = 0x317D54u;
            goto label_317d54;
        }
    }
    ctx->pc = 0x317D08u;
    // 0x317d08: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x317d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x317d0c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x317D0Cu;
    {
        const bool branch_taken_0x317d0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x317D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317D0Cu;
        // 0x317d10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317d0c) {
            ctx->pc = 0x317D1Cu;
            goto label_317d1c;
        }
    }
    ctx->pc = 0x317D14u;
    // 0x317d14: 0x2a620001  slti        $v0, $s3, 0x1
    ctx->pc = 0x317d14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x317d18: 0x262280a  movz        $a1, $s3, $v0
    ctx->pc = 0x317d18u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19));
label_317d1c:
    // 0x317d1c: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x317d1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317d20: 0xb1102a  slt         $v0, $a1, $s1
    ctx->pc = 0x317d20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x317d24: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x317D24u;
    {
        const bool branch_taken_0x317d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x317D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317D24u;
        // 0x317d28: 0x2c53021  addu        $a2, $s6, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317d24) {
            ctx->pc = 0x317D48u;
            goto label_317d48;
        }
    }
    ctx->pc = 0x317D2Cu;
    // 0x317d2c: 0x2362021  addu        $a0, $s1, $s6
    ctx->pc = 0x317d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
label_317d30:
    // 0x317d30: 0x9082ffff  lbu         $v0, -0x1($a0)
    ctx->pc = 0x317d30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967295)));
    // 0x317d34: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x317d34u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x317d38: 0xb4182a  slt         $v1, $a1, $s4
    ctx->pc = 0x317d38u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x317d3c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x317d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x317d40: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x317D40u;
    {
        const bool branch_taken_0x317d40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x317D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317D40u;
        // 0x317d44: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317d40) {
            ctx->pc = 0x317D30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317d30;
        }
    }
    ctx->pc = 0x317D48u;
label_317d48:
    // 0x317d48: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x317d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x317d4c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x317D4Cu;
    {
        const bool branch_taken_0x317d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317D4Cu;
        // 0x317d50: 0xa0c20000  sb          $v0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317d4c) {
            ctx->pc = 0x317D58u;
            goto label_317d58;
        }
    }
    ctx->pc = 0x317D54u;
label_317d54:
    // 0x317d54: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x317d54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_317d58:
    // 0x317d58: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x317d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x317d5c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x317D5Cu;
    {
        const bool branch_taken_0x317d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x317D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317D5Cu;
        // 0x317d60: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317d5c) {
            ctx->pc = 0x317DB0u;
            goto label_317db0;
        }
    }
    ctx->pc = 0x317D64u;
    // 0x317d64: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x317D64u;
    {
        const bool branch_taken_0x317d64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x317D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317D64u;
        // 0x317d68: 0x2d11021  addu        $v0, $s6, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317d64) {
            ctx->pc = 0x317D98u;
            goto label_317d98;
        }
    }
    ctx->pc = 0x317D6Cu;
    // 0x317d6c: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x317d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x317d70: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x317d70u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x317d74: 0x5464000b  bnel        $v1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x317D74u;
    {
        const bool branch_taken_0x317d74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x317d74) {
            ctx->pc = 0x317D78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317D74u;
            // 0x317d78: 0x2624ffff  addiu       $a0, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317DA4u;
            goto label_317da4;
        }
    }
    ctx->pc = 0x317D7Cu;
    // 0x317d7c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x317d7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_317d80:
    // 0x317d80: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x317D80u;
    {
        const bool branch_taken_0x317d80 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x317D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317D80u;
        // 0x317d84: 0x2d11021  addu        $v0, $s6, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317d80) {
            ctx->pc = 0x317D98u;
            goto label_317d98;
        }
    }
    ctx->pc = 0x317D88u;
    // 0x317d88: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x317d88u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x317d8c: 0x0  nop
    ctx->pc = 0x317d8cu;
    // NOP
    // 0x317d90: 0x5064fffb  beql        $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x317D90u;
    {
        const bool branch_taken_0x317d90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x317d90) {
            ctx->pc = 0x317D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317D90u;
            // 0x317d94: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317D80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317d80;
        }
    }
    ctx->pc = 0x317D98u;
label_317d98:
    // 0x317d98: 0x2d11021  addu        $v0, $s6, $s1
    ctx->pc = 0x317d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x317d9c: 0x2624ffff  addiu       $a0, $s1, -0x1
    ctx->pc = 0x317d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x317da0: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x317da0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_317da4:
    // 0x317da4: 0x3863002e  xori        $v1, $v1, 0x2E
    ctx->pc = 0x317da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)46);
    // 0x317da8: 0x83880a  movz        $s1, $a0, $v1
    ctx->pc = 0x317da8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4));
    // 0x317dac: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x317dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_317db0:
    // 0x317db0: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x317db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x317db4: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x317DB4u;
    {
        const bool branch_taken_0x317db4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x317DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317DB4u;
        // 0x317db8: 0x2361021  addu        $v0, $s1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317db4) {
            ctx->pc = 0x317E48u;
            goto label_317e48;
        }
    }
    ctx->pc = 0x317DBCu;
    // 0x317dbc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x317dbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x317dc0: 0x2d11021  addu        $v0, $s6, $s1
    ctx->pc = 0x317dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x317dc4: 0x660000e  bltz        $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x317DC4u;
    {
        const bool branch_taken_0x317dc4 = (GPR_S64(ctx, 19) < 0);
        ctx->pc = 0x317DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317DC4u;
        // 0x317dc8: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317dc4) {
            ctx->pc = 0x317E00u;
            goto label_317e00;
        }
    }
    ctx->pc = 0x317DCCu;
    // 0x317dcc: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x317dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x317dd0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x317dd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x317dd4: 0x53980b  movn        $s3, $v0, $s3
    ctx->pc = 0x317dd4u;
    if (GPR_U64(ctx, 19) != 0) SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2));
    // 0x317dd8: 0x2d12021  addu        $a0, $s6, $s1
    ctx->pc = 0x317dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x317ddc: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x317ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x317de0: 0x2a63000a  slti        $v1, $s3, 0xA
    ctx->pc = 0x317de0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x317de4: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x317DE4u;
    {
        const bool branch_taken_0x317de4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x317DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317DE4u;
        // 0x317de8: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317de4) {
            ctx->pc = 0x317E2Cu;
            goto label_317e2c;
        }
    }
    ctx->pc = 0x317DECu;
    // 0x317dec: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x317decu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x317df0: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x317df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x317df4: 0x2d11021  addu        $v0, $s6, $s1
    ctx->pc = 0x317df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x317df8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x317DF8u;
    {
        const bool branch_taken_0x317df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317DF8u;
        // 0x317dfc: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317df8) {
            ctx->pc = 0x317E2Cu;
            goto label_317e2c;
        }
    }
    ctx->pc = 0x317E00u;
label_317e00:
    // 0x317e00: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x317e00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x317e04: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x317e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x317e08: 0x2d11821  addu        $v1, $s6, $s1
    ctx->pc = 0x317e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x317e0c: 0x2a64fff7  slti        $a0, $s3, -0x9
    ctx->pc = 0x317e0cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4294967287) ? 1 : 0);
    // 0x317e10: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x317E10u;
    {
        const bool branch_taken_0x317e10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x317E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317E10u;
        // 0x317e14: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317e10) {
            ctx->pc = 0x317E28u;
            goto label_317e28;
        }
    }
    ctx->pc = 0x317E18u;
    // 0x317e18: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x317e18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x317e1c: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x317e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x317e20: 0x2d11021  addu        $v0, $s6, $s1
    ctx->pc = 0x317e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x317e24: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x317e24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_317e28:
    // 0x317e28: 0x139823  negu        $s3, $s3
    ctx->pc = 0x317e28u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
label_317e2c:
    // 0x317e2c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x317e2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x317e30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x317e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317e34: 0x2d12821  addu        $a1, $s6, $s1
    ctx->pc = 0x317e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x317e38: 0xc0c5e0a  jal         func_317828
    ctx->pc = 0x317E38u;
    SET_GPR_U32(ctx, 31, 0x317E40u);
    ctx->pc = 0x317E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317E38u;
    // 0x317e3c: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317828u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317828u, 0x317E38u, 0x317E40u)) {
        return;
    }
    ctx->pc = 0x317E40u;
label_317e40:
    // 0x317e40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x317E40u;
    {
        const bool branch_taken_0x317e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317E40u;
        // 0x317e44: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317e40) {
            ctx->pc = 0x317E50u;
            goto label_317e50;
        }
    }
    ctx->pc = 0x317E48u;
label_317e48:
    // 0x317e48: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x317e48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
label_317e4c:
    // 0x317e4c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x317e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_317e50:
    // 0x317e50: 0x24628f40  addiu       $v0, $v1, -0x70C0
    ctx->pc = 0x317e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938432));
    // 0x317e54: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x317e54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x317e58: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x317e58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x317e5c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x317e5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x317e60: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x317e60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x317e64: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x317e64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x317e68: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x317e68u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x317e6c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x317e6cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x317e70: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x317e70u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x317e74: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x317e74u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x317e78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x317e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x317e7c: 0x3e00008  jr          $ra
    ctx->pc = 0x317E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x317E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317E7Cu;
        // 0x317e80: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317E7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x317E84u;
    // 0x317e84: 0x0  nop
    ctx->pc = 0x317e84u;
    // NOP
    ctx->pc = 0x317e88u;
}
