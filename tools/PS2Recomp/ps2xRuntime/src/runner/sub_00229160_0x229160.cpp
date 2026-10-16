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

// Function: sub_00229160
// Address: 0x229160 - 0x229278
void sub_00229160_0x229160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229160_0x229160");
#endif

    switch (ctx->pc) {
        case 0x229188u: goto label_229188;
        case 0x22919cu: goto label_22919c;
        case 0x2291bcu: goto label_2291bc;
        case 0x2291d0u: goto label_2291d0;
        case 0x2291e0u: goto label_2291e0;
        case 0x2291f0u: goto label_2291f0;
        case 0x2291fcu: goto label_2291fc;
        case 0x22920cu: goto label_22920c;
        case 0x229214u: goto label_229214;
        case 0x229224u: goto label_229224;
        case 0x22922cu: goto label_22922c;
        case 0x229240u: goto label_229240;
        case 0x229250u: goto label_229250;
        case 0x229258u: goto label_229258;
        default: break;
    }

    ctx->pc = 0x229160u;

    // 0x229160: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x229160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x229164: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x229164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x229168: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x229168u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22916c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x22916cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x229170: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x229170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229174: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x229174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x229178: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x229178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22917c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22917cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x229180: 0xc089b6c  jal         func_226DB0
    ctx->pc = 0x229180u;
    SET_GPR_U32(ctx, 31, 0x229188u);
    ctx->pc = 0x229184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229180u;
    // 0x229184: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226DB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226DB0u, 0x229180u, 0x229188u)) {
        return;
    }
    ctx->pc = 0x229188u;
label_229188:
    // 0x229188: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x229188u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22918c: 0x12200033  beqz        $s1, . + 4 + (0x33 << 2)
    ctx->pc = 0x22918Cu;
    {
        const bool branch_taken_0x22918c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x229190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22918Cu;
        // 0x229190: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22918c) {
            ctx->pc = 0x22925Cu;
            goto label_22925c;
        }
    }
    ctx->pc = 0x229194u;
    // 0x229194: 0xc089bb2  jal         func_226EC8
    ctx->pc = 0x229194u;
    SET_GPR_U32(ctx, 31, 0x22919Cu);
    ctx->pc = 0x229198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229194u;
    // 0x229198: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226EC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226EC8u, 0x229194u, 0x22919Cu)) {
        return;
    }
    ctx->pc = 0x22919Cu;
label_22919c:
    // 0x22919c: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x22919Cu;
    {
        const bool branch_taken_0x22919c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2291A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22919Cu;
        // 0x2291a0: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22919c) {
            ctx->pc = 0x229250u;
            goto label_229250;
        }
    }
    ctx->pc = 0x2291A4u;
    // 0x2291a4: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x2291a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2291a8: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2291A8u;
    {
        const bool branch_taken_0x2291a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2291ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2291A8u;
        // 0x2291ac: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2291a8) {
            ctx->pc = 0x229234u;
            goto label_229234;
        }
    }
    ctx->pc = 0x2291B0u;
    // 0x2291b0: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2291b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2291b4: 0xc089b6c  jal         func_226DB0
    ctx->pc = 0x2291B4u;
    SET_GPR_U32(ctx, 31, 0x2291BCu);
    ctx->pc = 0x2291B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2291B4u;
    // 0x2291b8: 0x8e450008  lw          $a1, 0x8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226DB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226DB0u, 0x2291B4u, 0x2291BCu)) {
        return;
    }
    ctx->pc = 0x2291BCu;
label_2291bc:
    // 0x2291bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2291bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2291c0: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2291C0u;
    {
        const bool branch_taken_0x2291c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2291c0) {
            ctx->pc = 0x229248u;
            goto label_229248;
        }
    }
    ctx->pc = 0x2291C8u;
    // 0x2291c8: 0xc089bb2  jal         func_226EC8
    ctx->pc = 0x2291C8u;
    SET_GPR_U32(ctx, 31, 0x2291D0u);
    ctx->pc = 0x2291CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2291C8u;
    // 0x2291cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226EC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226EC8u, 0x2291C8u, 0x2291D0u)) {
        return;
    }
    ctx->pc = 0x2291D0u;
label_2291d0:
    // 0x2291d0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2291D0u;
    {
        const bool branch_taken_0x2291d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2291D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2291D0u;
        // 0x2291d4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2291d0) {
            ctx->pc = 0x2291E8u;
            goto label_2291e8;
        }
    }
    ctx->pc = 0x2291D8u;
    // 0x2291d8: 0xc089b96  jal         func_226E58
    ctx->pc = 0x2291D8u;
    SET_GPR_U32(ctx, 31, 0x2291E0u);
    ctx->pc = 0x2291DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2291D8u;
    // 0x2291dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226E58u, 0x2291D8u, 0x2291E0u)) {
        return;
    }
    ctx->pc = 0x2291E0u;
label_2291e0:
    // 0x2291e0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2291E0u;
    {
        const bool branch_taken_0x2291e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2291e0) {
            ctx->pc = 0x229248u;
            goto label_229248;
        }
    }
    ctx->pc = 0x2291E8u;
label_2291e8:
    // 0x2291e8: 0xc089f7e  jal         func_227DF8
    ctx->pc = 0x2291E8u;
    SET_GPR_U32(ctx, 31, 0x2291F0u);
    ctx->pc = 0x2291ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2291E8u;
    // 0x2291ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x227DF8u, 0x2291E8u, 0x2291F0u)) {
        return;
    }
    ctx->pc = 0x2291F0u;
label_2291f0:
    // 0x2291f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2291f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2291f4: 0xc08a3d8  jal         func_228F60
    ctx->pc = 0x2291F4u;
    SET_GPR_U32(ctx, 31, 0x2291FCu);
    ctx->pc = 0x2291F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2291F4u;
    // 0x2291f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228F60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228F60u, 0x2291F4u, 0x2291FCu)) {
        return;
    }
    ctx->pc = 0x2291FCu;
label_2291fc:
    // 0x2291fc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2291FCu;
    {
        const bool branch_taken_0x2291fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2291fc) {
            ctx->pc = 0x22921Cu;
            goto label_22921c;
        }
    }
    ctx->pc = 0x229204u;
    // 0x229204: 0xc089bf6  jal         func_226FD8
    ctx->pc = 0x229204u;
    SET_GPR_U32(ctx, 31, 0x22920Cu);
    ctx->pc = 0x229208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229204u;
    // 0x229208: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226FD8u, 0x229204u, 0x22920Cu)) {
        return;
    }
    ctx->pc = 0x22920Cu;
label_22920c:
    // 0x22920c: 0xc089b96  jal         func_226E58
    ctx->pc = 0x22920Cu;
    SET_GPR_U32(ctx, 31, 0x229214u);
    ctx->pc = 0x229210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22920Cu;
    // 0x229210: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226E58u, 0x22920Cu, 0x229214u)) {
        return;
    }
    ctx->pc = 0x229214u;
label_229214:
    // 0x229214: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x229214u;
    {
        const bool branch_taken_0x229214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229214) {
            ctx->pc = 0x229248u;
            goto label_229248;
        }
    }
    ctx->pc = 0x22921Cu;
label_22921c:
    // 0x22921c: 0xc089bf6  jal         func_226FD8
    ctx->pc = 0x22921Cu;
    SET_GPR_U32(ctx, 31, 0x229224u);
    ctx->pc = 0x229220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22921Cu;
    // 0x229220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226FD8u, 0x22921Cu, 0x229224u)) {
        return;
    }
    ctx->pc = 0x229224u;
label_229224:
    // 0x229224: 0xc089b96  jal         func_226E58
    ctx->pc = 0x229224u;
    SET_GPR_U32(ctx, 31, 0x22922Cu);
    ctx->pc = 0x229228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229224u;
    // 0x229228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226E58u, 0x229224u, 0x22922Cu)) {
        return;
    }
    ctx->pc = 0x22922Cu;
label_22922c:
    // 0x22922c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x22922Cu;
    {
        const bool branch_taken_0x22922c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22922Cu;
        // 0x229230: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22922c) {
            ctx->pc = 0x22925Cu;
            goto label_22925c;
        }
    }
    ctx->pc = 0x229234u;
label_229234:
    // 0x229234: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x229234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229238: 0xc08a3d8  jal         func_228F60
    ctx->pc = 0x229238u;
    SET_GPR_U32(ctx, 31, 0x229240u);
    ctx->pc = 0x22923Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229238u;
    // 0x22923c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228F60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228F60u, 0x229238u, 0x229240u)) {
        return;
    }
    ctx->pc = 0x229240u;
label_229240:
    // 0x229240: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x229240u;
    {
        const bool branch_taken_0x229240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x229244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229240u;
        // 0x229244: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229240) {
            ctx->pc = 0x22925Cu;
            goto label_22925c;
        }
    }
    ctx->pc = 0x229248u;
label_229248:
    // 0x229248: 0xc089bf6  jal         func_226FD8
    ctx->pc = 0x229248u;
    SET_GPR_U32(ctx, 31, 0x229250u);
    ctx->pc = 0x22924Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229248u;
    // 0x22924c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226FD8u, 0x229248u, 0x229250u)) {
        return;
    }
    ctx->pc = 0x229250u;
label_229250:
    // 0x229250: 0xc089b96  jal         func_226E58
    ctx->pc = 0x229250u;
    SET_GPR_U32(ctx, 31, 0x229258u);
    ctx->pc = 0x229254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229250u;
    // 0x229254: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226E58u, 0x229250u, 0x229258u)) {
        return;
    }
    ctx->pc = 0x229258u;
label_229258:
    // 0x229258: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x229258u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22925c:
    // 0x22925c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x22925cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x229260: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x229260u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x229264: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x229264u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x229268: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x229268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22926c: 0x3e00008  jr          $ra
    ctx->pc = 0x22926Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22926Cu;
        // 0x229270: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22926Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x229274u;
    // 0x229274: 0x0  nop
    ctx->pc = 0x229274u;
    // NOP
    ctx->pc = 0x229278u;
}
