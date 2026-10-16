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

// Function: sub_001D00D0
// Address: 0x1d00d0 - 0x1d0380
void sub_001D00D0_0x1d00d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D00D0_0x1d00d0");
#endif

    switch (ctx->pc) {
        case 0x1d0124u: goto label_1d0124;
        case 0x1d012cu: goto label_1d012c;
        case 0x1d0154u: goto label_1d0154;
        case 0x1d0168u: goto label_1d0168;
        case 0x1d01acu: goto label_1d01ac;
        case 0x1d01bcu: goto label_1d01bc;
        case 0x1d01c8u: goto label_1d01c8;
        case 0x1d01f8u: goto label_1d01f8;
        case 0x1d0228u: goto label_1d0228;
        case 0x1d0258u: goto label_1d0258;
        case 0x1d0288u: goto label_1d0288;
        case 0x1d02b4u: goto label_1d02b4;
        case 0x1d02c0u: goto label_1d02c0;
        case 0x1d02f4u: goto label_1d02f4;
        case 0x1d0324u: goto label_1d0324;
        case 0x1d032cu: goto label_1d032c;
        case 0x1d035cu: goto label_1d035c;
        default: break;
    }

    ctx->pc = 0x1d00d0u;

    // 0x1d00d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d00d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d00d4: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d00d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d00d8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1d00d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1d00dc: 0x8c629a08  lw          $v0, -0x65F8($v1)
    ctx->pc = 0x1d00dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x339A08u));
    // 0x1d00e0: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1d00e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d00e4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1d00e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1d00e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d00e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d00ec: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D00ECu;
    {
        const bool branch_taken_0x1d00ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D00F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D00ECu;
        // 0x1d00f0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d00ec) {
            ctx->pc = 0x1D0134u;
            goto label_1d0134;
        }
    }
    ctx->pc = 0x1D00F4u;
    // 0x1d00f4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1d00f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1d00f8: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d00f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d00fc: 0x8c4543b8  lw          $a1, 0x43B8($v0)
    ctx->pc = 0x1d00fcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B43B8u));
    // 0x1d0100: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1d0100u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1d0104: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D0104u;
    {
        const bool branch_taken_0x1d0104 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d0104) {
            ctx->pc = 0x1D0124u;
            goto label_1d0124;
        }
    }
    ctx->pc = 0x1D010Cu;
    // 0x1d010c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1d010cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d0110: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D0110u;
    {
        const bool branch_taken_0x1d0110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0110u;
        // 0x1d0114: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0110) {
            ctx->pc = 0x1D0124u;
            goto label_1d0124;
        }
    }
    ctx->pc = 0x1D0118u;
    // 0x1d0118: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1d0118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1d011c: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1D011Cu;
    SET_GPR_U32(ctx, 31, 0x1D0124u);
    ctx->pc = 0x1D0120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D011Cu;
    // 0x1d0120: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1D011Cu, 0x1D0124u)) {
        return;
    }
    ctx->pc = 0x1D0124u;
label_1d0124:
    // 0x1d0124: 0xc073f36  jal         func_1CFCD8
    ctx->pc = 0x1D0124u;
    SET_GPR_U32(ctx, 31, 0x1D012Cu);
    ctx->pc = 0x1D0128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0124u;
    // 0x1d0128: 0xae009a08  sw          $zero, -0x65F8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294941192), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFCD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CFCD8u, 0x1D0124u, 0x1D012Cu)) {
        return;
    }
    ctx->pc = 0x1D012Cu;
label_1d012c:
    // 0x1d012c: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x1D012Cu;
    {
        const bool branch_taken_0x1d012c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D012Cu;
        // 0x1d0130: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d012c) {
            ctx->pc = 0x1D0368u;
            goto label_1d0368;
        }
    }
    ctx->pc = 0x1D0134u;
label_1d0134:
    // 0x1d0134: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d0134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d0138: 0x8c509168  lw          $s0, -0x6E98($v0)
    ctx->pc = 0x1d0138u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x339168u));
    // 0x1d013c: 0x12000089  beqz        $s0, . + 4 + (0x89 << 2)
    ctx->pc = 0x1D013Cu;
    {
        const bool branch_taken_0x1d013c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D013Cu;
        // 0x1d0140: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d013c) {
            ctx->pc = 0x1D0364u;
            goto label_1d0364;
        }
    }
    ctx->pc = 0x1D0144u;
    // 0x1d0144: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d0144u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d0148: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d014c: 0xc06c994  jal         func_1B2650
    ctx->pc = 0x1D014Cu;
    SET_GPR_U32(ctx, 31, 0x1D0154u);
    ctx->pc = 0x1D0150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D014Cu;
    // 0x1d0150: 0x24a50918  addiu       $a1, $a1, 0x918 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B2650u, 0x1D014Cu, 0x1D0154u)) {
        return;
    }
    ctx->pc = 0x1D0154u;
label_1d0154:
    // 0x1d0154: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d0154u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d0158: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d0158u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d015c: 0x24a50928  addiu       $a1, $a1, 0x928
    ctx->pc = 0x1d015cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2344));
    // 0x1d0160: 0xc06c994  jal         func_1B2650
    ctx->pc = 0x1D0160u;
    SET_GPR_U32(ctx, 31, 0x1D0168u);
    ctx->pc = 0x1D0164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0160u;
    // 0x1d0164: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B2650u, 0x1D0160u, 0x1D0168u)) {
        return;
    }
    ctx->pc = 0x1D0168u;
label_1d0168:
    // 0x1d0168: 0x12200049  beqz        $s1, . + 4 + (0x49 << 2)
    ctx->pc = 0x1D0168u;
    {
        const bool branch_taken_0x1d0168 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D016Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0168u;
        // 0x1d016c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0168) {
            ctx->pc = 0x1D0290u;
            goto label_1d0290;
        }
    }
    ctx->pc = 0x1D0170u;
    // 0x1d0170: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1d0170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1d0174: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x1D0174u;
    {
        const bool branch_taken_0x1d0174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0174u;
        // 0x1d0178: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0174) {
            ctx->pc = 0x1D0290u;
            goto label_1d0290;
        }
    }
    ctx->pc = 0x1D017Cu;
    // 0x1d017c: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x1d017cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x1d0180: 0x8c64bd08  lw          $a0, -0x42F8($v1)
    ctx->pc = 0x1d0180u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6CBD08u));
    // 0x1d0184: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x1d0184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6768)));
    // 0x1d0188: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D0188u;
    {
        const bool branch_taken_0x1d0188 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D018Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0188u;
        // 0x1d018c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0188) {
            ctx->pc = 0x1D01ACu;
            goto label_1d01ac;
        }
    }
    ctx->pc = 0x1D0190u;
    // 0x1d0190: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d0190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d0194: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D0194u;
    {
        const bool branch_taken_0x1d0194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0194) {
            ctx->pc = 0x1D0198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0194u;
            // 0x1d0198: 0x8e449168  lw          $a0, -0x6E98($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294938984)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D01B0u;
            goto label_1d01b0;
        }
    }
    ctx->pc = 0x1D019Cu;
    // 0x1d019c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1d019cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1d01a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d01a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d01a4: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1D01A4u;
    SET_GPR_U32(ctx, 31, 0x1D01ACu);
    ctx->pc = 0x1D01A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D01A4u;
    // 0x1d01a8: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1D01A4u, 0x1D01ACu)) {
        return;
    }
    ctx->pc = 0x1D01ACu;
label_1d01ac:
    // 0x1d01ac: 0x8e449168  lw          $a0, -0x6E98($s2)
    ctx->pc = 0x1d01acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294938984)));
label_1d01b0:
    // 0x1d01b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d01b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d01b4: 0xc06bede  jal         func_1AFB78
    ctx->pc = 0x1D01B4u;
    SET_GPR_U32(ctx, 31, 0x1D01BCu);
    ctx->pc = 0x1D01B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D01B4u;
    // 0x1d01b8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFB78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AFB78u, 0x1D01B4u, 0x1D01BCu)) {
        return;
    }
    ctx->pc = 0x1D01BCu;
label_1d01bc:
    // 0x1d01bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d01bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d01c0: 0xc076068  jal         func_1D81A0
    ctx->pc = 0x1D01C0u;
    SET_GPR_U32(ctx, 31, 0x1D01C8u);
    ctx->pc = 0x1D01C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D01C0u;
    // 0x1d01c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D81A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D81A0u, 0x1D01C0u, 0x1D01C8u)) {
        return;
    }
    ctx->pc = 0x1D01C8u;
label_1d01c8:
    // 0x1d01c8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1d01c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1d01cc: 0x8e031a70  lw          $v1, 0x1A70($s0)
    ctx->pc = 0x1d01ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6768)));
    // 0x1d01d0: 0x8c444330  lw          $a0, 0x4330($v0)
    ctx->pc = 0x1d01d0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B4330u));
    // 0x1d01d4: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1D01D4u;
    {
        const bool branch_taken_0x1d01d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D01D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D01D4u;
        // 0x1d01d8: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d01d4) {
            ctx->pc = 0x1D0200u;
            goto label_1d0200;
        }
    }
    ctx->pc = 0x1D01DCu;
    // 0x1d01dc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d01dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d01e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D01E0u;
    {
        const bool branch_taken_0x1d01e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D01E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D01E0u;
        // 0x1d01e4: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d01e0) {
            ctx->pc = 0x1D0200u;
            goto label_1d0200;
        }
    }
    ctx->pc = 0x1D01E8u;
    // 0x1d01e8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1d01e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1d01ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d01ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d01f0: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1D01F0u;
    SET_GPR_U32(ctx, 31, 0x1D01F8u);
    ctx->pc = 0x1D01F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D01F0u;
    // 0x1d01f4: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1D01F0u, 0x1D01F8u)) {
        return;
    }
    ctx->pc = 0x1D01F8u;
label_1d01f8:
    // 0x1d01f8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1d01f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1d01fc: 0x8e031a70  lw          $v1, 0x1A70($s0)
    ctx->pc = 0x1d01fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6768)));
label_1d0200:
    // 0x1d0200: 0x8c444340  lw          $a0, 0x4340($v0)
    ctx->pc = 0x1d0200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17216)));
    // 0x1d0204: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D0204u;
    {
        const bool branch_taken_0x1d0204 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D0208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0204u;
        // 0x1d0208: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0204) {
            ctx->pc = 0x1D022Cu;
            goto label_1d022c;
        }
    }
    ctx->pc = 0x1D020Cu;
    // 0x1d020c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d020cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d0210: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D0210u;
    {
        const bool branch_taken_0x1d0210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0210u;
        // 0x1d0214: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0210) {
            ctx->pc = 0x1D022Cu;
            goto label_1d022c;
        }
    }
    ctx->pc = 0x1D0218u;
    // 0x1d0218: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1d0218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1d021c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d021cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0220: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1D0220u;
    SET_GPR_U32(ctx, 31, 0x1D0228u);
    ctx->pc = 0x1D0224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0220u;
    // 0x1d0224: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1D0220u, 0x1D0228u)) {
        return;
    }
    ctx->pc = 0x1D0228u;
label_1d0228:
    // 0x1d0228: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d0228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_1d022c:
    // 0x1d022c: 0x8e031a70  lw          $v1, 0x1A70($s0)
    ctx->pc = 0x1d022cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6768)));
    // 0x1d0230: 0x8c4486c0  lw          $a0, -0x7940($v0)
    ctx->pc = 0x1d0230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936256)));
    // 0x1d0234: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1D0234u;
    {
        const bool branch_taken_0x1d0234 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D0238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0234u;
        // 0x1d0238: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0234) {
            ctx->pc = 0x1D0260u;
            goto label_1d0260;
        }
    }
    ctx->pc = 0x1D023Cu;
    // 0x1d023c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d023cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d0240: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D0240u;
    {
        const bool branch_taken_0x1d0240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0240u;
        // 0x1d0244: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0240) {
            ctx->pc = 0x1D0260u;
            goto label_1d0260;
        }
    }
    ctx->pc = 0x1D0248u;
    // 0x1d0248: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1d0248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1d024c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d024cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0250: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1D0250u;
    SET_GPR_U32(ctx, 31, 0x1D0258u);
    ctx->pc = 0x1D0254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0250u;
    // 0x1d0254: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1D0250u, 0x1D0258u)) {
        return;
    }
    ctx->pc = 0x1D0258u;
label_1d0258:
    // 0x1d0258: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1d0258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1d025c: 0x8e031a70  lw          $v1, 0x1A70($s0)
    ctx->pc = 0x1d025cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6768)));
label_1d0260:
    // 0x1d0260: 0x8c4443b8  lw          $a0, 0x43B8($v0)
    ctx->pc = 0x1d0260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17336)));
    // 0x1d0264: 0x10830040  beq         $a0, $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x1D0264u;
    {
        const bool branch_taken_0x1d0264 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D0268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0264u;
        // 0x1d0268: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0264) {
            ctx->pc = 0x1D0368u;
            goto label_1d0368;
        }
    }
    ctx->pc = 0x1D026Cu;
    // 0x1d026c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d026cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d0270: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x1D0270u;
    {
        const bool branch_taken_0x1d0270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0270u;
        // 0x1d0274: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0270) {
            ctx->pc = 0x1D0368u;
            goto label_1d0368;
        }
    }
    ctx->pc = 0x1D0278u;
    // 0x1d0278: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1d0278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1d027c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d027cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0280: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1D0280u;
    SET_GPR_U32(ctx, 31, 0x1D0288u);
    ctx->pc = 0x1D0284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0280u;
    // 0x1d0284: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1D0280u, 0x1D0288u)) {
        return;
    }
    ctx->pc = 0x1D0288u;
label_1d0288:
    // 0x1d0288: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1D0288u;
    {
        const bool branch_taken_0x1d0288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D028Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0288u;
        // 0x1d028c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0288) {
            ctx->pc = 0x1D0368u;
            goto label_1d0368;
        }
    }
    ctx->pc = 0x1D0290u;
label_1d0290:
    // 0x1d0290: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x1D0290u;
    {
        const bool branch_taken_0x1d0290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0290u;
        // 0x1d0294: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0290) {
            ctx->pc = 0x1D0368u;
            goto label_1d0368;
        }
    }
    ctx->pc = 0x1D0298u;
    // 0x1d0298: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1d0298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1d029c: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1D029Cu;
    {
        const bool branch_taken_0x1d029c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D02A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D029Cu;
        // 0x1d02a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d029c) {
            ctx->pc = 0x1D0364u;
            goto label_1d0364;
        }
    }
    ctx->pc = 0x1D02A4u;
    // 0x1d02a4: 0xae000244  sw          $zero, 0x244($s0)
    ctx->pc = 0x1d02a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 580), GPR_U32(ctx, 0));
    // 0x1d02a8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d02a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d02ac: 0xc06bede  jal         func_1AFB78
    ctx->pc = 0x1D02ACu;
    SET_GPR_U32(ctx, 31, 0x1D02B4u);
    ctx->pc = 0x1D02B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D02ACu;
    // 0x1d02b0: 0x8e449168  lw          $a0, -0x6E98($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294938984)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFB78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AFB78u, 0x1D02ACu, 0x1D02B4u)) {
        return;
    }
    ctx->pc = 0x1D02B4u;
label_1d02b4:
    // 0x1d02b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d02b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d02b8: 0xc076068  jal         func_1D81A0
    ctx->pc = 0x1D02B8u;
    SET_GPR_U32(ctx, 31, 0x1D02C0u);
    ctx->pc = 0x1D02BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D02B8u;
    // 0x1d02bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D81A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D81A0u, 0x1D02B8u, 0x1D02C0u)) {
        return;
    }
    ctx->pc = 0x1D02C0u;
label_1d02c0:
    // 0x1d02c0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x1d02c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x1d02c4: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d02c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1d02c8: 0x8c644330  lw          $a0, 0x4330($v1)
    ctx->pc = 0x1d02c8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B4330u));
    // 0x1d02cc: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x1d02ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1d02d0: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D02D0u;
    {
        const bool branch_taken_0x1d02d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D02D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D02D0u;
        // 0x1d02d4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d02d0) {
            ctx->pc = 0x1D02F4u;
            goto label_1d02f4;
        }
    }
    ctx->pc = 0x1D02D8u;
    // 0x1d02d8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d02d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d02dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D02DCu;
    {
        const bool branch_taken_0x1d02dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D02E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D02DCu;
        // 0x1d02e0: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d02dc) {
            ctx->pc = 0x1D02F8u;
            goto label_1d02f8;
        }
    }
    ctx->pc = 0x1D02E4u;
    // 0x1d02e4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1d02e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1d02e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d02e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d02ec: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1D02ECu;
    SET_GPR_U32(ctx, 31, 0x1D02F4u);
    ctx->pc = 0x1D02F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D02ECu;
    // 0x1d02f0: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1D02ECu, 0x1D02F4u)) {
        return;
    }
    ctx->pc = 0x1D02F4u;
label_1d02f4:
    // 0x1d02f4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1d02f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_1d02f8:
    // 0x1d02f8: 0x8e031a70  lw          $v1, 0x1A70($s0)
    ctx->pc = 0x1d02f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6768)));
    // 0x1d02fc: 0x8c444340  lw          $a0, 0x4340($v0)
    ctx->pc = 0x1d02fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17216)));
    // 0x1d0300: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D0300u;
    {
        const bool branch_taken_0x1d0300 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d0300) {
            ctx->pc = 0x1D0324u;
            goto label_1d0324;
        }
    }
    ctx->pc = 0x1D0308u;
    // 0x1d0308: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d0308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d030c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D030Cu;
    {
        const bool branch_taken_0x1d030c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d030c) {
            ctx->pc = 0x1D0324u;
            goto label_1d0324;
        }
    }
    ctx->pc = 0x1D0314u;
    // 0x1d0314: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1d0314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1d0318: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d0318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d031c: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1D031Cu;
    SET_GPR_U32(ctx, 31, 0x1D0324u);
    ctx->pc = 0x1D0320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D031Cu;
    // 0x1d0320: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1D031Cu, 0x1D0324u)) {
        return;
    }
    ctx->pc = 0x1D0324u;
label_1d0324:
    // 0x1d0324: 0xc0603ce  jal         func_180F38
    ctx->pc = 0x1D0324u;
    SET_GPR_U32(ctx, 31, 0x1D032Cu);
    ctx->pc = 0x180F38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180F38u, 0x1D0324u, 0x1D032Cu)) {
        return;
    }
    ctx->pc = 0x1D032Cu;
label_1d032c:
    // 0x1d032c: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d032cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1d0330: 0x8e031a70  lw          $v1, 0x1A70($s0)
    ctx->pc = 0x1d0330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6768)));
    // 0x1d0334: 0x8c4486c0  lw          $a0, -0x7940($v0)
    ctx->pc = 0x1d0334u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6F86C0u));
    // 0x1d0338: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1D0338u;
    {
        const bool branch_taken_0x1d0338 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D033Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0338u;
        // 0x1d033c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0338) {
            ctx->pc = 0x1D0368u;
            goto label_1d0368;
        }
    }
    ctx->pc = 0x1D0340u;
    // 0x1d0340: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d0340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d0344: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D0344u;
    {
        const bool branch_taken_0x1d0344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0344u;
        // 0x1d0348: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0344) {
            ctx->pc = 0x1D0368u;
            goto label_1d0368;
        }
    }
    ctx->pc = 0x1D034Cu;
    // 0x1d034c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1d034cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1d0350: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d0350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0354: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1D0354u;
    SET_GPR_U32(ctx, 31, 0x1D035Cu);
    ctx->pc = 0x1D0358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0354u;
    // 0x1d0358: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1D0354u, 0x1D035Cu)) {
        return;
    }
    ctx->pc = 0x1D035Cu;
label_1d035c:
    // 0x1d035c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D035Cu;
    {
        const bool branch_taken_0x1d035c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D035Cu;
        // 0x1d0360: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d035c) {
            ctx->pc = 0x1D0368u;
            goto label_1d0368;
        }
    }
    ctx->pc = 0x1D0364u;
label_1d0364:
    // 0x1d0364: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d0364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d0368:
    // 0x1d0368: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1d0368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d036c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1d036cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d0370: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d0370u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d0374: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d0374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0378: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D037Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0378u;
        // 0x1d037c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0380u;
}
