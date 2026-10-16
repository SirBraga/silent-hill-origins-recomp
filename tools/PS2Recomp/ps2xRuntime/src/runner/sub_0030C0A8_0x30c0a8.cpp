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

// Function: sub_0030C0A8
// Address: 0x30c0a8 - 0x30c480
void sub_0030C0A8_0x30c0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C0A8_0x30c0a8");
#endif

    switch (ctx->pc) {
        case 0x30c0d4u: goto label_30c0d4;
        case 0x30c100u: goto label_30c100;
        case 0x30c118u: goto label_30c118;
        case 0x30c144u: goto label_30c144;
        case 0x30c180u: goto label_30c180;
        case 0x30c198u: goto label_30c198;
        case 0x30c1c4u: goto label_30c1c4;
        case 0x30c208u: goto label_30c208;
        case 0x30c234u: goto label_30c234;
        case 0x30c278u: goto label_30c278;
        case 0x30c2a4u: goto label_30c2a4;
        case 0x30c2e8u: goto label_30c2e8;
        case 0x30c314u: goto label_30c314;
        case 0x30c368u: goto label_30c368;
        case 0x30c394u: goto label_30c394;
        case 0x30c3d8u: goto label_30c3d8;
        case 0x30c404u: goto label_30c404;
        default: break;
    }

    ctx->pc = 0x30c0a8u;

    // 0x30c0a8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x30c0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x30c0ac: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x30c0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x30c0b0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x30c0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x30c0b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x30c0b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c0b8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x30c0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x30c0bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30c0bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c0c0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x30c0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x30c0c4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30c0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30c0c8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30c0c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30c0cc: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30C0CCu;
    SET_GPR_U32(ctx, 31, 0x30C0D4u);
    ctx->pc = 0x30C0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C0CCu;
    // 0x30c0d0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30C0CCu, 0x30C0D4u)) {
        return;
    }
    ctx->pc = 0x30C0D4u;
label_30c0d4:
    // 0x30c0d4: 0x104000dc  beqz        $v0, . + 4 + (0xDC << 2)
    ctx->pc = 0x30C0D4u;
    {
        const bool branch_taken_0x30c0d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C0D4u;
        // 0x30c0d8: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c0d4) {
            ctx->pc = 0x30C448u;
            goto label_30c448;
        }
    }
    ctx->pc = 0x30C0DCu;
    // 0x30c0dc: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x30c0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x30c0e0: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30c0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30c0e4: 0x144300d8  bne         $v0, $v1, . + 4 + (0xD8 << 2)
    ctx->pc = 0x30C0E4u;
    {
        const bool branch_taken_0x30c0e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30C0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C0E4u;
        // 0x30c0e8: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c0e4) {
            ctx->pc = 0x30C448u;
            goto label_30c448;
        }
    }
    ctx->pc = 0x30C0ECu;
    // 0x30c0ec: 0x144000de  bnez        $v0, . + 4 + (0xDE << 2)
    ctx->pc = 0x30C0ECu;
    {
        const bool branch_taken_0x30c0ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C0ECu;
        // 0x30c0f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c0ec) {
            ctx->pc = 0x30C468u;
            goto label_30c468;
        }
    }
    ctx->pc = 0x30C0F4u;
    // 0x30c0f4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30c0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30c0f8: 0xc0c2f30  jal         func_30BCC0
    ctx->pc = 0x30C0F8u;
    SET_GPR_U32(ctx, 31, 0x30C100u);
    ctx->pc = 0x30C0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C0F8u;
    // 0x30c0fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BCC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30BCC0u, 0x30C0F8u, 0x30C100u)) {
        return;
    }
    ctx->pc = 0x30C100u;
label_30c100:
    // 0x30c100: 0x104000d1  beqz        $v0, . + 4 + (0xD1 << 2)
    ctx->pc = 0x30C100u;
    {
        const bool branch_taken_0x30c100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C100u;
        // 0x30c104: 0x26320010  addiu       $s2, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c100) {
            ctx->pc = 0x30C448u;
            goto label_30c448;
        }
    }
    ctx->pc = 0x30C108u;
    // 0x30c108: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30c108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30c10c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30c10cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30c110: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30C110u;
    SET_GPR_U32(ctx, 31, 0x30C118u);
    ctx->pc = 0x30C114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C110u;
    // 0x30c114: 0x27a50024  addiu       $a1, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30C110u, 0x30C118u)) {
        return;
    }
    ctx->pc = 0x30C118u;
label_30c118:
    // 0x30c118: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30C118u;
    {
        const bool branch_taken_0x30c118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C118u;
        // 0x30c11c: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c118) {
            ctx->pc = 0x30C150u;
            goto label_30c150;
        }
    }
    ctx->pc = 0x30C120u;
    // 0x30c120: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x30c120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30c124: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30c124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30c128: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x30C128u;
    {
        const bool branch_taken_0x30c128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30C12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C128u;
        // 0x30c12c: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c128) {
            ctx->pc = 0x30C150u;
            goto label_30c150;
        }
    }
    ctx->pc = 0x30C130u;
    // 0x30c130: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30C130u;
    {
        const bool branch_taken_0x30c130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C130u;
        // 0x30c134: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c130) {
            ctx->pc = 0x30C150u;
            goto label_30c150;
        }
    }
    ctx->pc = 0x30C138u;
    // 0x30c138: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30c138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30c13c: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x30C13Cu;
    SET_GPR_U32(ctx, 31, 0x30C144u);
    ctx->pc = 0x30C140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C13Cu;
    // 0x30c140: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x30C13Cu, 0x30C144u)) {
        return;
    }
    ctx->pc = 0x30C144u;
label_30c144:
    // 0x30c144: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30C144u;
    {
        const bool branch_taken_0x30c144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30c144) {
            ctx->pc = 0x30C158u;
            goto label_30c158;
        }
    }
    ctx->pc = 0x30C14Cu;
    // 0x30c14c: 0x0  nop
    ctx->pc = 0x30c14cu;
    // NOP
label_30c150:
    // 0x30c150: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30C150u;
    {
        const bool branch_taken_0x30c150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C150u;
        // 0x30c154: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c150) {
            ctx->pc = 0x30C170u;
            goto label_30c170;
        }
    }
    ctx->pc = 0x30C158u;
label_30c158:
    // 0x30c158: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30C158u;
    {
        const bool branch_taken_0x30c158 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C158u;
        // 0x30c15c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c158) {
            ctx->pc = 0x30C170u;
            goto label_30c170;
        }
    }
    ctx->pc = 0x30C160u;
    // 0x30c160: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30c160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30c164: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x30c164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x30c168: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30c168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30c16c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30c16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30c170:
    // 0x30c170: 0x104000b5  beqz        $v0, . + 4 + (0xB5 << 2)
    ctx->pc = 0x30C170u;
    {
        const bool branch_taken_0x30c170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C170u;
        // 0x30c174: 0x26240014  addiu       $a0, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c170) {
            ctx->pc = 0x30C448u;
            goto label_30c448;
        }
    }
    ctx->pc = 0x30C178u;
    // 0x30c178: 0xc0c2706  jal         func_309C18
    ctx->pc = 0x30C178u;
    SET_GPR_U32(ctx, 31, 0x30C180u);
    ctx->pc = 0x30C17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C178u;
    // 0x30c17c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309C18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x309C18u, 0x30C178u, 0x30C180u)) {
        return;
    }
    ctx->pc = 0x30C180u;
label_30c180:
    // 0x30c180: 0x104000b1  beqz        $v0, . + 4 + (0xB1 << 2)
    ctx->pc = 0x30C180u;
    {
        const bool branch_taken_0x30c180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C180u;
        // 0x30c184: 0x26320030  addiu       $s2, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c180) {
            ctx->pc = 0x30C448u;
            goto label_30c448;
        }
    }
    ctx->pc = 0x30C188u;
    // 0x30c188: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30c188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30c18c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30c18cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30c190: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30C190u;
    SET_GPR_U32(ctx, 31, 0x30C198u);
    ctx->pc = 0x30C194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C190u;
    // 0x30c194: 0x27a50028  addiu       $a1, $sp, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30C190u, 0x30C198u)) {
        return;
    }
    ctx->pc = 0x30C198u;
label_30c198:
    // 0x30c198: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30C198u;
    {
        const bool branch_taken_0x30c198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C198u;
        // 0x30c19c: 0x8fa40028  lw          $a0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c198) {
            ctx->pc = 0x30C1D0u;
            goto label_30c1d0;
        }
    }
    ctx->pc = 0x30C1A0u;
    // 0x30c1a0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x30c1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30c1a4: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30c1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30c1a8: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x30C1A8u;
    {
        const bool branch_taken_0x30c1a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30C1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C1A8u;
        // 0x30c1ac: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c1a8) {
            ctx->pc = 0x30C1D0u;
            goto label_30c1d0;
        }
    }
    ctx->pc = 0x30C1B0u;
    // 0x30c1b0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30C1B0u;
    {
        const bool branch_taken_0x30c1b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C1B0u;
        // 0x30c1b4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c1b0) {
            ctx->pc = 0x30C1D0u;
            goto label_30c1d0;
        }
    }
    ctx->pc = 0x30C1B8u;
    // 0x30c1b8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30c1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30c1bc: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x30C1BCu;
    SET_GPR_U32(ctx, 31, 0x30C1C4u);
    ctx->pc = 0x30C1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C1BCu;
    // 0x30c1c0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x30C1BCu, 0x30C1C4u)) {
        return;
    }
    ctx->pc = 0x30C1C4u;
label_30c1c4:
    // 0x30c1c4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30C1C4u;
    {
        const bool branch_taken_0x30c1c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30c1c4) {
            ctx->pc = 0x30C1D8u;
            goto label_30c1d8;
        }
    }
    ctx->pc = 0x30C1CCu;
    // 0x30c1cc: 0x0  nop
    ctx->pc = 0x30c1ccu;
    // NOP
label_30c1d0:
    // 0x30c1d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30C1D0u;
    {
        const bool branch_taken_0x30c1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C1D0u;
        // 0x30c1d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c1d0) {
            ctx->pc = 0x30C1F0u;
            goto label_30c1f0;
        }
    }
    ctx->pc = 0x30C1D8u;
label_30c1d8:
    // 0x30c1d8: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30C1D8u;
    {
        const bool branch_taken_0x30c1d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C1D8u;
        // 0x30c1dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c1d8) {
            ctx->pc = 0x30C1F0u;
            goto label_30c1f0;
        }
    }
    ctx->pc = 0x30C1E0u;
    // 0x30c1e0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30c1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30c1e4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x30c1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x30c1e8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30c1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30c1ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30c1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30c1f0:
    // 0x30c1f0: 0x10400095  beqz        $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x30C1F0u;
    {
        const bool branch_taken_0x30c1f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C1F0u;
        // 0x30c1f4: 0x26320034  addiu       $s2, $s1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c1f0) {
            ctx->pc = 0x30C448u;
            goto label_30c448;
        }
    }
    ctx->pc = 0x30C1F8u;
    // 0x30c1f8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30c1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30c1fc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30c1fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30c200: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30C200u;
    SET_GPR_U32(ctx, 31, 0x30C208u);
    ctx->pc = 0x30C204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C200u;
    // 0x30c204: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30C200u, 0x30C208u)) {
        return;
    }
    ctx->pc = 0x30C208u;
label_30c208:
    // 0x30c208: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30C208u;
    {
        const bool branch_taken_0x30c208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C208u;
        // 0x30c20c: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c208) {
            ctx->pc = 0x30C240u;
            goto label_30c240;
        }
    }
    ctx->pc = 0x30C210u;
    // 0x30c210: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x30c210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30c214: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30c214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30c218: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x30C218u;
    {
        const bool branch_taken_0x30c218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30C21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C218u;
        // 0x30c21c: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c218) {
            ctx->pc = 0x30C240u;
            goto label_30c240;
        }
    }
    ctx->pc = 0x30C220u;
    // 0x30c220: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30C220u;
    {
        const bool branch_taken_0x30c220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C220u;
        // 0x30c224: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c220) {
            ctx->pc = 0x30C240u;
            goto label_30c240;
        }
    }
    ctx->pc = 0x30C228u;
    // 0x30c228: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30c228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30c22c: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x30C22Cu;
    SET_GPR_U32(ctx, 31, 0x30C234u);
    ctx->pc = 0x30C230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C22Cu;
    // 0x30c230: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x30C22Cu, 0x30C234u)) {
        return;
    }
    ctx->pc = 0x30C234u;
label_30c234:
    // 0x30c234: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30C234u;
    {
        const bool branch_taken_0x30c234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30c234) {
            ctx->pc = 0x30C248u;
            goto label_30c248;
        }
    }
    ctx->pc = 0x30C23Cu;
    // 0x30c23c: 0x0  nop
    ctx->pc = 0x30c23cu;
    // NOP
label_30c240:
    // 0x30c240: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30C240u;
    {
        const bool branch_taken_0x30c240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C240u;
        // 0x30c244: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c240) {
            ctx->pc = 0x30C260u;
            goto label_30c260;
        }
    }
    ctx->pc = 0x30C248u;
label_30c248:
    // 0x30c248: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30C248u;
    {
        const bool branch_taken_0x30c248 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C248u;
        // 0x30c24c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c248) {
            ctx->pc = 0x30C260u;
            goto label_30c260;
        }
    }
    ctx->pc = 0x30C250u;
    // 0x30c250: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30c250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30c254: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x30c254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x30c258: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30c258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30c25c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30c25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30c260:
    // 0x30c260: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x30C260u;
    {
        const bool branch_taken_0x30c260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C260u;
        // 0x30c264: 0x26320038  addiu       $s2, $s1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c260) {
            ctx->pc = 0x30C448u;
            goto label_30c448;
        }
    }
    ctx->pc = 0x30C268u;
    // 0x30c268: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30c268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30c26c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30c26cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30c270: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30C270u;
    SET_GPR_U32(ctx, 31, 0x30C278u);
    ctx->pc = 0x30C274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C270u;
    // 0x30c274: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30C270u, 0x30C278u)) {
        return;
    }
    ctx->pc = 0x30C278u;
label_30c278:
    // 0x30c278: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30C278u;
    {
        const bool branch_taken_0x30c278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C278u;
        // 0x30c27c: 0x8fa40030  lw          $a0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c278) {
            ctx->pc = 0x30C2B0u;
            goto label_30c2b0;
        }
    }
    ctx->pc = 0x30C280u;
    // 0x30c280: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x30c280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30c284: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30c284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30c288: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x30C288u;
    {
        const bool branch_taken_0x30c288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30C28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C288u;
        // 0x30c28c: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c288) {
            ctx->pc = 0x30C2B0u;
            goto label_30c2b0;
        }
    }
    ctx->pc = 0x30C290u;
    // 0x30c290: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30C290u;
    {
        const bool branch_taken_0x30c290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C290u;
        // 0x30c294: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c290) {
            ctx->pc = 0x30C2B0u;
            goto label_30c2b0;
        }
    }
    ctx->pc = 0x30C298u;
    // 0x30c298: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30c298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30c29c: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x30C29Cu;
    SET_GPR_U32(ctx, 31, 0x30C2A4u);
    ctx->pc = 0x30C2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C29Cu;
    // 0x30c2a0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x30C29Cu, 0x30C2A4u)) {
        return;
    }
    ctx->pc = 0x30C2A4u;
label_30c2a4:
    // 0x30c2a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30C2A4u;
    {
        const bool branch_taken_0x30c2a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30c2a4) {
            ctx->pc = 0x30C2B8u;
            goto label_30c2b8;
        }
    }
    ctx->pc = 0x30C2ACu;
    // 0x30c2ac: 0x0  nop
    ctx->pc = 0x30c2acu;
    // NOP
label_30c2b0:
    // 0x30c2b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30C2B0u;
    {
        const bool branch_taken_0x30c2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C2B0u;
        // 0x30c2b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c2b0) {
            ctx->pc = 0x30C2D0u;
            goto label_30c2d0;
        }
    }
    ctx->pc = 0x30C2B8u;
label_30c2b8:
    // 0x30c2b8: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30C2B8u;
    {
        const bool branch_taken_0x30c2b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C2B8u;
        // 0x30c2bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c2b8) {
            ctx->pc = 0x30C2D0u;
            goto label_30c2d0;
        }
    }
    ctx->pc = 0x30C2C0u;
    // 0x30c2c0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30c2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30c2c4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x30c2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x30c2c8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30c2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30c2cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30c2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30c2d0:
    // 0x30c2d0: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x30C2D0u;
    {
        const bool branch_taken_0x30c2d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C2D0u;
        // 0x30c2d4: 0x2632003c  addiu       $s2, $s1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c2d0) {
            ctx->pc = 0x30C448u;
            goto label_30c448;
        }
    }
    ctx->pc = 0x30C2D8u;
    // 0x30c2d8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30c2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30c2dc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30c2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30c2e0: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30C2E0u;
    SET_GPR_U32(ctx, 31, 0x30C2E8u);
    ctx->pc = 0x30C2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C2E0u;
    // 0x30c2e4: 0x27a50034  addiu       $a1, $sp, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30C2E0u, 0x30C2E8u)) {
        return;
    }
    ctx->pc = 0x30C2E8u;
label_30c2e8:
    // 0x30c2e8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30C2E8u;
    {
        const bool branch_taken_0x30c2e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C2E8u;
        // 0x30c2ec: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c2e8) {
            ctx->pc = 0x30C320u;
            goto label_30c320;
        }
    }
    ctx->pc = 0x30C2F0u;
    // 0x30c2f0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x30c2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x30c2f4: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30c2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30c2f8: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x30C2F8u;
    {
        const bool branch_taken_0x30c2f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30C2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C2F8u;
        // 0x30c2fc: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c2f8) {
            ctx->pc = 0x30C320u;
            goto label_30c320;
        }
    }
    ctx->pc = 0x30C300u;
    // 0x30c300: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30C300u;
    {
        const bool branch_taken_0x30c300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C300u;
        // 0x30c304: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c300) {
            ctx->pc = 0x30C320u;
            goto label_30c320;
        }
    }
    ctx->pc = 0x30C308u;
    // 0x30c308: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30c308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30c30c: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x30C30Cu;
    SET_GPR_U32(ctx, 31, 0x30C314u);
    ctx->pc = 0x30C310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C30Cu;
    // 0x30c310: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x30C30Cu, 0x30C314u)) {
        return;
    }
    ctx->pc = 0x30C314u;
label_30c314:
    // 0x30c314: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30C314u;
    {
        const bool branch_taken_0x30c314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C314u;
        // 0x30c318: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c314) {
            ctx->pc = 0x30C328u;
            goto label_30c328;
        }
    }
    ctx->pc = 0x30C31Cu;
    // 0x30c31c: 0x0  nop
    ctx->pc = 0x30c31cu;
    // NOP
label_30c320:
    // 0x30c320: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x30C320u;
    {
        const bool branch_taken_0x30c320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C320u;
        // 0x30c324: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c320) {
            ctx->pc = 0x30C350u;
            goto label_30c350;
        }
    }
    ctx->pc = 0x30C328u;
label_30c328:
    // 0x30c328: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x30c328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30c32c: 0xe620003c  swc1        $f0, 0x3C($s1)
    ctx->pc = 0x30c32cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
    // 0x30c330: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x30c330u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x30c334: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x30c334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30c338: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30C338u;
    {
        const bool branch_taken_0x30c338 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C338u;
        // 0x30c33c: 0xe6400008  swc1        $f0, 0x8($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c338) {
            ctx->pc = 0x30C34Cu;
            goto label_30c34c;
        }
    }
    ctx->pc = 0x30C340u;
    // 0x30c340: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30c340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30c344: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x30c344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x30c348: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30c348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_30c34c:
    // 0x30c34c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30c34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30c350:
    // 0x30c350: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x30C350u;
    {
        const bool branch_taken_0x30c350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C350u;
        // 0x30c354: 0x26320048  addiu       $s2, $s1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c350) {
            ctx->pc = 0x30C448u;
            goto label_30c448;
        }
    }
    ctx->pc = 0x30C358u;
    // 0x30c358: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30c358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30c35c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30c35cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30c360: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30C360u;
    SET_GPR_U32(ctx, 31, 0x30C368u);
    ctx->pc = 0x30C364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C360u;
    // 0x30c364: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30C360u, 0x30C368u)) {
        return;
    }
    ctx->pc = 0x30C368u;
label_30c368:
    // 0x30c368: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30C368u;
    {
        const bool branch_taken_0x30c368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C368u;
        // 0x30c36c: 0x8fa40038  lw          $a0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c368) {
            ctx->pc = 0x30C3A0u;
            goto label_30c3a0;
        }
    }
    ctx->pc = 0x30C370u;
    // 0x30c370: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x30c370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30c374: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30c374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30c378: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x30C378u;
    {
        const bool branch_taken_0x30c378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30C37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C378u;
        // 0x30c37c: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c378) {
            ctx->pc = 0x30C3A0u;
            goto label_30c3a0;
        }
    }
    ctx->pc = 0x30C380u;
    // 0x30c380: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30C380u;
    {
        const bool branch_taken_0x30c380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C380u;
        // 0x30c384: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c380) {
            ctx->pc = 0x30C3A0u;
            goto label_30c3a0;
        }
    }
    ctx->pc = 0x30C388u;
    // 0x30c388: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30c388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30c38c: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30C38Cu;
    SET_GPR_U32(ctx, 31, 0x30C394u);
    ctx->pc = 0x30C390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C38Cu;
    // 0x30c390: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30C38Cu, 0x30C394u)) {
        return;
    }
    ctx->pc = 0x30C394u;
label_30c394:
    // 0x30c394: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30C394u;
    {
        const bool branch_taken_0x30c394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30c394) {
            ctx->pc = 0x30C3A8u;
            goto label_30c3a8;
        }
    }
    ctx->pc = 0x30C39Cu;
    // 0x30c39c: 0x0  nop
    ctx->pc = 0x30c39cu;
    // NOP
label_30c3a0:
    // 0x30c3a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30C3A0u;
    {
        const bool branch_taken_0x30c3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C3A0u;
        // 0x30c3a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c3a0) {
            ctx->pc = 0x30C3C0u;
            goto label_30c3c0;
        }
    }
    ctx->pc = 0x30C3A8u;
label_30c3a8:
    // 0x30c3a8: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30C3A8u;
    {
        const bool branch_taken_0x30c3a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C3A8u;
        // 0x30c3ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c3a8) {
            ctx->pc = 0x30C3C0u;
            goto label_30c3c0;
        }
    }
    ctx->pc = 0x30C3B0u;
    // 0x30c3b0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30c3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30c3b4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x30c3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x30c3b8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30c3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30c3bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30c3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30c3c0:
    // 0x30c3c0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x30C3C0u;
    {
        const bool branch_taken_0x30c3c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C3C0u;
        // 0x30c3c4: 0x26320004  addiu       $s2, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c3c0) {
            ctx->pc = 0x30C448u;
            goto label_30c448;
        }
    }
    ctx->pc = 0x30C3C8u;
    // 0x30c3c8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30c3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30c3cc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30c3ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30c3d0: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30C3D0u;
    SET_GPR_U32(ctx, 31, 0x30C3D8u);
    ctx->pc = 0x30C3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C3D0u;
    // 0x30c3d4: 0x27a5003c  addiu       $a1, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30C3D0u, 0x30C3D8u)) {
        return;
    }
    ctx->pc = 0x30C3D8u;
label_30c3d8:
    // 0x30c3d8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30C3D8u;
    {
        const bool branch_taken_0x30c3d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C3D8u;
        // 0x30c3dc: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c3d8) {
            ctx->pc = 0x30C410u;
            goto label_30c410;
        }
    }
    ctx->pc = 0x30C3E0u;
    // 0x30c3e0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x30c3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x30c3e4: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30c3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30c3e8: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x30C3E8u;
    {
        const bool branch_taken_0x30c3e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30C3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C3E8u;
        // 0x30c3ec: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c3e8) {
            ctx->pc = 0x30C410u;
            goto label_30c410;
        }
    }
    ctx->pc = 0x30C3F0u;
    // 0x30c3f0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30C3F0u;
    {
        const bool branch_taken_0x30c3f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C3F0u;
        // 0x30c3f4: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c3f0) {
            ctx->pc = 0x30C410u;
            goto label_30c410;
        }
    }
    ctx->pc = 0x30C3F8u;
    // 0x30c3f8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30c3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30c3fc: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x30C3FCu;
    SET_GPR_U32(ctx, 31, 0x30C404u);
    ctx->pc = 0x30C400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C3FCu;
    // 0x30c400: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x30C3FCu, 0x30C404u)) {
        return;
    }
    ctx->pc = 0x30C404u;
label_30c404:
    // 0x30c404: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30C404u;
    {
        const bool branch_taken_0x30c404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C404u;
        // 0x30c408: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c404) {
            ctx->pc = 0x30C418u;
            goto label_30c418;
        }
    }
    ctx->pc = 0x30C40Cu;
    // 0x30c40c: 0x0  nop
    ctx->pc = 0x30c40cu;
    // NOP
label_30c410:
    // 0x30c410: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x30C410u;
    {
        const bool branch_taken_0x30c410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C410u;
        // 0x30c414: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c410) {
            ctx->pc = 0x30C440u;
            goto label_30c440;
        }
    }
    ctx->pc = 0x30C418u;
label_30c418:
    // 0x30c418: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x30c418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30c41c: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x30c41cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x30c420: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x30c420u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x30c424: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x30c424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30c428: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30C428u;
    {
        const bool branch_taken_0x30c428 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C428u;
        // 0x30c42c: 0xe6400008  swc1        $f0, 0x8($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c428) {
            ctx->pc = 0x30C43Cu;
            goto label_30c43c;
        }
    }
    ctx->pc = 0x30C430u;
    // 0x30c430: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30c430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30c434: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x30c434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x30c438: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30c438u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_30c43c:
    // 0x30c43c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30c43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30c440:
    // 0x30c440: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30C440u;
    {
        const bool branch_taken_0x30c440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30c440) {
            ctx->pc = 0x30C450u;
            goto label_30c450;
        }
    }
    ctx->pc = 0x30C448u;
label_30c448:
    // 0x30c448: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30C448u;
    {
        const bool branch_taken_0x30c448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C448u;
        // 0x30c44c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c448) {
            ctx->pc = 0x30C468u;
            goto label_30c468;
        }
    }
    ctx->pc = 0x30C450u;
label_30c450:
    // 0x30c450: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30C450u;
    {
        const bool branch_taken_0x30c450 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C450u;
        // 0x30c454: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c450) {
            ctx->pc = 0x30C468u;
            goto label_30c468;
        }
    }
    ctx->pc = 0x30C458u;
    // 0x30c458: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30c458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30c45c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x30c45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x30c460: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30c460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30c464: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30c464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30c468:
    // 0x30c468: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x30c468u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x30c46c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x30c46cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30c470: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x30c470u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30c474: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x30c474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30c478: 0x3e00008  jr          $ra
    ctx->pc = 0x30C478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C478u;
        // 0x30c47c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C480u;
}
