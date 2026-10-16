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

// Function: sub_002E1850
// Address: 0x2e1850 - 0x2e19a0
void sub_002E1850_0x2e1850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1850_0x2e1850");
#endif

    switch (ctx->pc) {
        case 0x2e1890u: goto label_2e1890;
        case 0x2e18e8u: goto label_2e18e8;
        case 0x2e1900u: goto label_2e1900;
        default: break;
    }

    ctx->pc = 0x2e1850u;

    // 0x2e1850: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2e1850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2e1854: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2e1854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x2e1858: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2e1858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x2e185c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e185cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1860: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2e1860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x2e1864: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2e1864u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1868: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2e1868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x2e186c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2e186cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1870: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2e1870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2e1874: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x2e1874u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1878: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2e1878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x2e187c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2e187cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1880: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e1880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e1884: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2E1884u;
    {
        const bool branch_taken_0x2e1884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1884u;
        // 0x2e1888: 0x2415000c  addiu       $s5, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1884) {
            ctx->pc = 0x2E18F0u;
            goto label_2e18f0;
        }
    }
    ctx->pc = 0x2E188Cu;
    // 0x2e188c: 0x0  nop
    ctx->pc = 0x2e188cu;
    // NOP
label_2e1890:
    // 0x2e1890: 0x14540013  bne         $v0, $s4, . + 4 + (0x13 << 2)
    ctx->pc = 0x2E1890u;
    {
        const bool branch_taken_0x2e1890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x2E1894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1890u;
        // 0x2e1894: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1890) {
            ctx->pc = 0x2E18E0u;
            goto label_2e18e0;
        }
    }
    ctx->pc = 0x2E1898u;
    // 0x2e1898: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2e1898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e189c: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x2e189cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x2e18a0: 0x34424fff  ori         $v0, $v0, 0x4FFF
    ctx->pc = 0x2e18a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20479);
    // 0x2e18a4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2e18a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e18a8: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2E18A8u;
    {
        const bool branch_taken_0x2e18a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E18ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E18A8u;
        // 0x2e18ac: 0x3c020003  lui         $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e18a8) {
            ctx->pc = 0x2E1978u;
            goto label_2e1978;
        }
    }
    ctx->pc = 0x2E18B0u;
    // 0x2e18b0: 0x34427002  ori         $v0, $v0, 0x7002
    ctx->pc = 0x2e18b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28674);
    // 0x2e18b4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2e18b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e18b8: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2E18B8u;
    {
        const bool branch_taken_0x2e18b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E18BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E18B8u;
        // 0x2e18bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e18b8) {
            ctx->pc = 0x2E197Cu;
            goto label_2e197c;
        }
    }
    ctx->pc = 0x2E18C0u;
    // 0x2e18c0: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E18C0u;
    {
        const bool branch_taken_0x2e18c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E18C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E18C0u;
        // 0x2e18c4: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e18c0) {
            ctx->pc = 0x2E18CCu;
            goto label_2e18cc;
        }
    }
    ctx->pc = 0x2E18C8u;
    // 0x2e18c8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2e18c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2e18cc:
    // 0x2e18cc: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E18CCu;
    {
        const bool branch_taken_0x2e18cc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E18D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E18CCu;
        // 0x2e18d0: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e18cc) {
            ctx->pc = 0x2E18D8u;
            goto label_2e18d8;
        }
    }
    ctx->pc = 0x2E18D4u;
    // 0x2e18d4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2e18d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_2e18d8:
    // 0x2e18d8: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2E18D8u;
    {
        const bool branch_taken_0x2e18d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E18DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E18D8u;
        // 0x2e18dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e18d8) {
            ctx->pc = 0x2E197Cu;
            goto label_2e197c;
        }
    }
    ctx->pc = 0x2E18E0u;
label_2e18e0:
    // 0x2e18e0: 0xc093620  jal         func_24D880
    ctx->pc = 0x2E18E0u;
    SET_GPR_U32(ctx, 31, 0x2E18E8u);
    ctx->pc = 0x2E18E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E18E0u;
    // 0x2e18e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D880u, 0x2E18E0u, 0x2E18E8u)) {
        return;
    }
    ctx->pc = 0x2E18E8u;
label_2e18e8:
    // 0x2e18e8: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2E18E8u;
    {
        const bool branch_taken_0x2e18e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E18ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E18E8u;
        // 0x2e18ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e18e8) {
            ctx->pc = 0x2E197Cu;
            goto label_2e197c;
        }
    }
    ctx->pc = 0x2E18F0u;
label_2e18f0:
    // 0x2e18f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e18f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e18f4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2e18f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e18f8: 0xc093546  jal         func_24D518
    ctx->pc = 0x2E18F8u;
    SET_GPR_U32(ctx, 31, 0x2E1900u);
    ctx->pc = 0x2E18FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E18F8u;
    // 0x2e18fc: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x2E18F8u, 0x2E1900u)) {
        return;
    }
    ctx->pc = 0x2E1900u;
label_2e1900:
    // 0x2e1900: 0x1455001b  bne         $v0, $s5, . + 4 + (0x1B << 2)
    ctx->pc = 0x2E1900u;
    {
        const bool branch_taken_0x2e1900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x2E1904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1900u;
        // 0x2e1904: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1900) {
            ctx->pc = 0x2E1970u;
            goto label_2e1970;
        }
    }
    ctx->pc = 0x2E1908u;
    // 0x2e1908: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e1908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e190c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2e190cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2e1910: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x2e1910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2e1914: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x2e1914u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e1918: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2e1918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2e191c: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x2e191cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x2e1920: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E1920u;
    {
        const bool branch_taken_0x2e1920 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1920u;
        // 0x2e1924: 0xafa40004  sw          $a0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1920) {
            ctx->pc = 0x2E1938u;
            goto label_2e1938;
        }
    }
    ctx->pc = 0x2E1928u;
    // 0x2e1928: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x2e1928u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x2e192c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2e192cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x2e1930: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2E1930u;
    {
        const bool branch_taken_0x2e1930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1930u;
        // 0x2e1934: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1930) {
            ctx->pc = 0x2E1968u;
            goto label_2e1968;
        }
    }
    ctx->pc = 0x2E1938u;
label_2e1938:
    // 0x2e1938: 0x3c040003  lui         $a0, 0x3
    ctx->pc = 0x2e1938u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
    // 0x2e193c: 0x61b82  srl         $v1, $a2, 14
    ctx->pc = 0x2e193cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 14));
    // 0x2e1940: 0x3484ff00  ori         $a0, $a0, 0xFF00
    ctx->pc = 0x2e1940u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65280);
    // 0x2e1944: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2e1944u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x2e1948: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2e1948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2e194c: 0x61402  srl         $v0, $a2, 16
    ctx->pc = 0x2e194cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x2e1950: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2e1950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2e1954: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x2e1954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x2e1958: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e1958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e195c: 0x30c4ffff  andi        $a0, $a2, 0xFFFF
    ctx->pc = 0x2e195cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2e1960: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2e1960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x2e1964: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x2e1964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
label_2e1968:
    // 0x2e1968: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x2e1968u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
    // 0x2e196c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e196cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e1970:
    // 0x2e1970: 0x1440ffc7  bnez        $v0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x2E1970u;
    {
        const bool branch_taken_0x2e1970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1970u;
        // 0x2e1974: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1970) {
            ctx->pc = 0x2E1890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e1890;
        }
    }
    ctx->pc = 0x2E1978u;
label_2e1978:
    // 0x2e1978: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e1978u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e197c:
    // 0x2e197c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2e197cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e1980: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2e1980u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e1984: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2e1984u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e1988: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2e1988u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e198c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2e198cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e1990: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2e1990u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e1994: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e1994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e1998: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E199Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1998u;
        // 0x2e199c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E19A0u;
}
